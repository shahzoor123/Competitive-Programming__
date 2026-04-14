def max_cards_combination(t, test_cases):
    results = []
    
    for n, k, a in test_cases:
        from collections import Counter
        
        # Count frequency of each card
        count = Counter(a)
        # Sort unique card numbers
        distinct_numbers = sorted(count.keys())
        
        max_taken = 0
        
        # Use a sliding window to count the maximum number of cards taken
        for i in range(len(distinct_numbers)):
            current_taken = 0
            distinct_used = 0
            
            # Check the current number and the next numbers while maintaining k distinct
            for j in range(i, len(distinct_numbers)):
                if j == i or distinct_used < k:
                    current_taken += count[distinct_numbers[j]]
                    distinct_used += 1
                else:
                    break
            
            max_taken = max(max_taken, current_taken)
        
        results.append(max_taken)
    
    return results

# Example Input
t = 4
test_cases = [
    (10, 2, [5, 2, 4, 3, 4, 3, 4, 5, 3, 2]),
    (5, 1, [10, 11, 10, 11, 10]),
    (9, 3, [4, 5, 4, 4, 6, 5, 4, 4, 6]),
    (3, 2, [1, 3, 1])
]

# Run the function
final_combination_results = max_cards_combination(t, test_cases)
final_combination_results
