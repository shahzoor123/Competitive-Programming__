def max_happy_people(test_cases):
    results = []
    
    for n, r, families in test_cases:
        families.sort(reverse=True)  # Sort families in descending order
        happy_people = 0
        
        # First, fill the rows with families
        remaining_rows = r
        
        for family in families:
            if remaining_rows <= 0:
                break
            
            # First, pair as many family members together as possible
            while family >= 2 and remaining_rows > 0:
                happy_people += 2  # Both are happy
                family -= 2
                remaining_rows -= 1
            
            # If there's one family member left and a row available, seat them alone
            if family == 1 and remaining_rows > 0:
                happy_people += 1  # This person will be happy alone
                remaining_rows -= 1
        
        # After seating all possible happy members, check for remaining rows and single members
        remaining_seats = remaining_rows * 2  # Each row has 2 seats
        remaining_members = sum(families) - (len(families) * 2 - happy_people)
        
        # Any remaining members can only make pairs with remaining seats
        additional_happy = min(remaining_seats // 2, remaining_members)
        happy_people += additional_happy
        
        results.append(happy_people)

    return results


# Predefined test cases
test_cases = [
    (3, 3, [2, 3, 1]),  # n=3, r=3, families=[2, 3, 1]
    (3, 3, [2, 2, 2]),  # n=3, r=3, families=[2, 2, 2]
    (4, 5, [1, 1, 2, 2]),  # n=4, r=5, families=[1, 1, 2, 2]
    (4, 5, [3, 1, 1, 3])   # n=4, r=5, families=[3, 1, 1, 3]
]

# Call the function with predefined test cases
results = max_happy_people(test_cases)

# Output the results
for result in results:
    print(result)
