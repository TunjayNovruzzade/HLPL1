// Create a REST API that will allow you to make a payment for the auctioned item - in this case, use the sanbox of the selected payment operator

POST https://sandbox.example_payment.com/auctions/{auction_id}/items/{item_id}/payment

{
  "id": 1234,
  "payment_method": "credit_card",
  "amount": 100.0,
  "currency": "USD",
  "status": "paid",
  "confirmation": "EXAMPLE1234"
}
