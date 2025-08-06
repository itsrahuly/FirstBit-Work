1. Customers
CustomerID (Primary Key)
Email

2. Rooms
RoomID (Primary Key)
CustomerID (Foreign Key)
RoomType

3. RoomTypes
RoomType (Primary Key)
Rent

4. Services
ServiceID (Primary Key)
CustomerID (Foreign Key)
ServiceType

5. FoodOrders
OrderID (Primary Key)
CustomerID (Foreign Key)
FoodItem

6. Laundry
LaundryID (Primary Key)
CustomerID (Foreign Key)
Quantity
RatePerCloth

7. SiteVisits
VisitID (Primary Key)
CustomerID (Foreign Key)
VehicleType
RatePerDay

8. Invoices
InvoiceID (Primary Key)
CustomerID (Foreign Key)
