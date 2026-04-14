def solve(B: int, L: int, E: int) -> int:
    curr_age_at_shower = B + E
    age_at_first_shower = curr_age_at_shower % 50
    rem_years = L - age_at_first_shower

    
    no_of_showers = (rem_years // 50) + 1
 

    return no_of_showers

def main():
    T = int(input(""))
    for _ in range(T):
        B, L, E = map(int, input("").strip().split())
        result = solve(B, L, E)
        print(result)

# Run the program as a standalone script
if __name__ == '__main__':
    main()
