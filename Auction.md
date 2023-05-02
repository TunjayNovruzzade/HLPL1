//Adding an item to an auction
from flask import Flask, jsonify, request

app = Flask(__name__)

# Dummy data to simulate database
auction_items = []

# Route to add an item to the auction
@app.route('/auctions', methods=['POST'])
def add_item():
    # Get data from request body
    data = request.get_json()
    
    # Add item to auction_items list
    auction_items.append(data)
    
    # Return success message
    return jsonify({'message': 'Item added to auction successfully!'}), 201

if __name__ == '__main__':
    app.run(debug=True)

// Editing an item for bidding
PUT /auctions/{auction_id}/items/{item_id}
{
  "name": "New item name",
  "description": "New item description",
  "minimum_bid": 100.0
}

//Removing an item from the auction
DELETE /auctions/{auction_id}/items/{item_id}

// Downloading information about the item at the auction
GET /auctions/{auction_id}/items/{item_id}

// For example response should be this:

{
  "id": 1234,
  "name": "Example item",
  "description": "This is an example item for demonstration purposes.",
  "minimum_bid": 50.0,
  "current_bid": 75.0,
  "bids": [
    {
      "bidder": "Alice",
      "amount": 50.0,
      "timestamp": "2023-05-01T12:00:00Z"
    },
    {
      "bidder": "Bob",
      "amount": 75.0,
      "timestamp": "2023-05-01T13:00:00Z"
    }
  ]
}
