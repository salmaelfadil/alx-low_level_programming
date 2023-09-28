#!/usr/bin/python3
"""
computes th perimeter of a grid
"""


def island_perimeter(grid):
    """
    perimeter of a grid
    """
    width = len(grid)
    length = len(grid[0])

    perimeter = 0

    for i in range(width):
        for j in range(length):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == width - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == length - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
