#!/usr/bin/python3
"""
island perimeter
water if above == 0 or we are the begining of the array
water if blow == 0 or we are the end of the array
water if right == 0 or we are the begining of the column
water if left == 0 or we are the end of the column
"""


def island_perimeter(grid):
    """Calculate the perimeter of the island in the grid."""
    count = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # above
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1
                # below
                if i == rows - 1 or grid[i + 1][j] == 0:
                    count += 1
                # left
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
                # right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    count += 1
    return count
