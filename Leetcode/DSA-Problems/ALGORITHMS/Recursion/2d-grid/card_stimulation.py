def find_final_position(cards, moves, query):
    # Initialize the current positions based on initial cards
    current_positions = {}
    for card in cards:
        card_id, row_index, col_index = card
        current_positions[card_id] = (row_index, col_index)

    def move_card(card_id, to_row, to_col):
        # If the position is already occupied by another card, move that card down
        for other_card_id, (r, c) in current_positions.items():
            if (r, c) == (to_row, to_col) and other_card_id != card_id:
                # Move the other card down and handle further conflicts recursively
                move_card(other_card_id, r + 1, c)
        # Move the current card to the new position
        current_positions[card_id] = (to_row, to_col)

    # Process each move and update positions
    for move in moves:
        card_id, from_row, from_col, to_row, to_col = move
        move_card(card_id, to_row, to_col)

    # Return the final position of the query card
    return current_positions.get(query)

# Test cases
test_cases = [
    {
        "cards": [
            [1, 1, 0],
            [3, 0, 0],
            [6, 0, 1],
            [4, 0, 2],
            [5, 2, 0],
            [7, 1, 1],
            [2, 1, 2]
        ],
        "moves": [
            [6, 0, 1, 2, 0]
        ],
        "query": 2,
        "expected_output": (1, 2)
    },
    {
        "cards": [
            [1, 1, 0],
            [3, 0, 0],
            [6, 0, 1],
            [4, 0, 2],
            [5, 2, 0],
            [7, 1, 1],
            [2, 1, 2]
        ],
        "moves": [
            [6, 0, 1, 2, 0],
            [7, 0, 1, 0, 2]
        ],
        "query": 2,
        "expected_output": (2, 2)
    },
    {
        "cards": [
            [1, 1, 0],
            [3, 0, 0],
            [6, 0, 1],
            [4, 0, 2],
            [5, 2, 0],
            [7, 1, 1],
            [2, 1, 2]
        ],
        "moves": [
            [6, 0, 1, 3, 0],
            [7, 0, 1, 0, 2]
        ],
        "query": 2,
        "expected_output": (2, 2)
    },
    {
        "cards": [
            [1, 1, 0],
            [3, 0, 0],
            [6, 0, 1],
            [4, 0, 2],
            [5, 2, 0],
            [7, 1, 1],
            [2, 1, 2]
        ],
        "moves": [
            [1, 1, 0, 2, 0],
            [1, 2, 0, 1, 1],
            [1, 1, 1, 1, 2]
        ],
        "query": 2,
        "expected_output": (2, 2)
    },
    {
        "cards": [
            [1, 1, 0],
            [3, 0, 0],
            [6, 0, 1],
            [4, 0, 2],
            [5, 2, 0],
            [7, 1, 1],
            [2, 1, 2]
        ],
        "moves": [
            [4, 0, 2, 1, 1],
            [7, 2, 1, 0, 2],
            [1, 0, 1, 2, 1],
            [5, 2, 0, 0, 1],
            [3, 0, 0, 1, 1],
            [2, 0, 2, 1, 0],
            [6, 1, 1, 2, 1]
        ],
        "query": 2,
        "expected_output": (1, 0)
    }
]

# Test the function with all test cases
for i, test_case in enumerate(test_cases):
    cards = test_case["cards"]
    moves = test_case["moves"]
    query = test_case["query"]
    expected_output = test_case["expected_output"]
    
    # Run the function
    final_position = find_final_position(cards, moves, query)
    
    # Compare with expected output
    if final_position == expected_output:
        print(f"Test case {i+1}: Passed")
    else:
        print(f"Test case {i+1}: Failed. Expected {expected_output}, but got {final_position}")
