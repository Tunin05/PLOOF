USE [PLOOF]
GO
/****** Object:  Trigger [dbo].[GenerateOrderRef]    Script Date: 05/12/2023 19:36:44 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
ALTER TRIGGER [dbo].[GenerateOrderRef]
ON [dbo].[Orders]
AFTER INSERT
AS
BEGIN
    SET NOCOUNT ON;

    DECLARE @OrderRefPrefix NVARCHAR(20);

    -- Obtenir le préfixe de la référence de commande en fonction du client
    SELECT @OrderRefPrefix = LEFT(firstname, 2) + LEFT(name, 2) + CONVERT(NVARCHAR(4), YEAR(order_date)) + LEFT(delivery_adress_id, 3)
    FROM Clients C
    INNER JOIN inserted I ON C.client_num = I.client_num;

    -- Générer la référence de commande en utilisant le préfixe et la séquence
    UPDATE O
    SET order_ref = @OrderRefPrefix + CONVERT(NVARCHAR(5), NEXT VALUE FOR OrderRefSequence)
    FROM Orders O
    INNER JOIN inserted I ON O.client_num = I.client_num AND O.order_ref = '';
END;
