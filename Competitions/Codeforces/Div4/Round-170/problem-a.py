def min_seconds_to_display_sequences(s, t):
    # Find the length of the longest common prefix
    common_prefix_len = 0
    for i in range(min(len(s), len(t))):
        if s[i] == t[i]:
            common_prefix_len += 1
        else:
            break
    
    # If there's a common prefix, we can copy it
    if common_prefix_len > 0:
        return common_prefix_len + 1 + (len(s) - common_prefix_len) + (len(t) - common_prefix_len)
    else:
        # If no common prefix, just type both strings independently
        return len(s) + len(t)

# Reading input
q = int(input())
for _ in range(q):
    s = input().strip()
    t = input().strip()
    print(min_seconds_to_display_sequences(s, t))
