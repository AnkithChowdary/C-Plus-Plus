import random

def manhattan_distance(x1, y1, x2, y2):
    return abs(x1 - x2) + abs(y1 - y2)

def get_neighbors(position, grid):
    x, y = position
    neighbors = []
    if x > 0 and grid[x-1][y] != 1:  # Move up
        neighbors.append((x-1, y))
    if x < len(grid) - 1 and grid[x+1][y] != 1:  # Move down
        neighbors.append((x+1, y))
    if y > 0 and grid[x][y-1] != 1:  # Move left
        neighbors.append((x, y-1))
    if y < len(grid[0]) - 1 and grid[x][y+1] != 1:  # Move right
        neighbors.append((x, y+1))
    return neighbors

def stochastic_hill_climbing(start, goal, grid):
    current_position = start
    while current_position != goal:
        neighbors = get_neighbors(current_position, grid)
        if not neighbors:
            break  # No more moves possible
        next_position = random.choice(neighbors)
        if manhattan_distance(*next_position, *goal) < manhattan_distance(*current_position, *goal):
            current_position = next_position
        else:
            break  # No better neighbors found
    return current_position

# Example usage
grid = [
    [0, 0, 0, 0],
    [0, 1, 1, 0],
    [0, 0, 0, 0],
    [0, 1, 0, 0]
]

start = (0, 0)
goal = (3, 3)
result = stochastic_hill_climbing(start, goal, grid)
print("Final position:", result)