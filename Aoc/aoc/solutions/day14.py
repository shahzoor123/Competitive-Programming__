
# Part 1
# Constants for the grid dimensions
grid_width = 101
grid_height = 103
time_limit = 100

# Function to determine the quadrant of a robot based on its position
def get_quadrant(x, y):
    if x == grid_width // 2 or y == grid_height // 2:
        return None  # On the middle line, not in any quadrant
    elif x < grid_width // 2 and y < grid_height // 2:
        return 1  # Top-left quadrant
    elif x >= grid_width // 2 and y < grid_height // 2:
        return 2  # Top-right quadrant
    elif x < grid_width // 2 and y >= grid_height // 2:
        return 3  # Bottom-left quadrant
    elif x >= grid_width // 2 and y >= grid_height // 2:
        return 4  # Bottom-right quadrant

# Read input from the file
def read_input(file_path):
    robots = []
    with open(file_path, 'r') as file:
        for line in file:
            line = line.strip()
            if line:
                pos_part, vel_part = line.split()
                px, py = map(int, pos_part[2:].split(','))
                vx, vy = map(int, vel_part[2:].split(','))
                robots.append(((px, py), (vx, vy)))
    return robots

# Simulate the motion of robots and calculate the safety factor
def calculate_safety_factor(robots, time_limit):
    # Update positions after 100 seconds
    for i in range(len(robots)):
        (px, py), (vx, vy) = robots[i]
        px = (px + vx * time_limit) % grid_width
        py = (py + vy * time_limit) % grid_height
        robots[i] = ((px, py), (vx, vy))

    # Count robots in each quadrant
    quadrant_counts = {1: 0, 2: 0, 3: 0, 4: 0}
    for (px, py), _ in robots:
        quadrant = get_quadrant(px, py)
        if quadrant:
            quadrant_counts[quadrant] += 1

    # Calculate the safety factor
    safety_factor = (quadrant_counts[1] * quadrant_counts[2] *
                     quadrant_counts[3] * quadrant_counts[4])
    return safety_factor

# Main function
def main():
    input_file = "inputs/day14.txt"
    robots = read_input(input_file)
    safety_factor = calculate_safety_factor(robots, time_limit)
    print("Safety Factor:", safety_factor)

if __name__ == "__main__":
    main()
    
    




# Part 2 


def mod(a, b):
    """Perform modular arithmetic with positive results."""
    return (a % b + b) % b

def part2(filename, nx=101, ny=103):
    """Simulates particles until all have unique positions."""
    # Parse the input file to extract particles
    particles = []
    with open(filename, 'r') as file:
        for line in file:
            line = line.strip()
            # Extract x, y, vx, vy using the correct delimiter
            if line.startswith("p=") and "v=" in line:
                parts = line.replace("p=", "").replace("v=", "").split()
                x, y = map(int, parts[0].split(","))
                vx, vy = map(int, parts[1].split(","))
                particles.append({'x': x, 'y': y, 'vx': vx, 'vy': vy})
            else:
                raise ValueError(f"Invalid line format: {line}")

    iterations = 0

    while True:
        iterations += 1

        # Update positions
        for p in particles:
            p['x'] = mod(p['x'] + p['vx'], nx)
            p['y'] = mod(p['y'] + p['vy'], ny)

        # Count particle positions
        counts = {}
        max_count = 0
        for p in particles:
            pos = (p['x'], p['y'])
            if pos not in counts:
                counts[pos] = 0
            counts[pos] += 1
            max_count = max(max_count, counts[pos])

        # Stop when all particles are in unique positions
        if max_count == 1:
            print(f"Part 2 iterations: {iterations}")
            break

# Usage
if __name__ == "__main__":
    filename = "inputs/day14.txt"  # Adjust the path if necessary
    part2(filename)
