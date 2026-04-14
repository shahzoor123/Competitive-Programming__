# Read number of test cases
t = int(input())

while t > 0:
    # Input values for l, r, L, R
    l, r, L, R = map(int, input().split())

    # Check if there is no overlap
    if r < L or R < l:
        # No overlap, lock 0 doors
        print(0)
    else:
        # There is an overlap, find the smallest cut
        print(min(r, R) - max(l, L) + 1)

    # Decrement the test case counter
    t -= 1
