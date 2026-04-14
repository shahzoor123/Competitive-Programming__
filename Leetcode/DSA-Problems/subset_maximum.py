def solution(nums, target): 
    # Initialize a list to store the largest subset size for each remainder
    dp = [0] * target
    
    print(dp)
    
    # Iterate through each number in nums
    for num in nums:
        remainder = num % target
        
        print(f"{remainder} for {num}")
        # Update dp based on current remainder
        new_dp = dp[:]
        print(new_dp,"new")
        for i in range(target):
            if dp[i] > 0:
                new_remainder = (i + remainder) % target
                new_dp[new_remainder] = max(new_dp[new_remainder], dp[i] + 1)
        new_dp[remainder] = max(new_dp[remainder], 1)  # Single element subset
        dp = new_dp
    
    # The maximum value in dp will be the answer
    return max(dp)

# Example usage:
nums = [1, 7, 2, 4]
target = 3
print(solution(nums, target))  # Output: 3

nums = [13476]
target = 2
# print(solution(nums, target))  # Output: 2

