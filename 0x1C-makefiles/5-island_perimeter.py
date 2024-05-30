#!/usr/bin/python3
"""
island perimeter
water if above == 0 or we are the begining of the array
water if blow == 0 or we are the end of the array
water if right == 0 or we are the begining of the column
water if left == 0 or we are the end of the column 
"""

def island_perimeter(grid):
    """The island perimeter"""
    count = 0
    for i in range(len(grid)):
            for j in range(len(grid[i])):
                if (grid[i][j] == 1):
                    # above
                    if (i == 0 or grid[i - 1][j] == 0):
                        count += 1
                    # blow
                    if (i == len(grid[i]) - 1 or grid[i + 1][j] == 0):
                        count += 1
                    # check left
                    if (j == 0 or grid[i][j - 1] == 0):
                        count += 1
                    # check right
                    if (j == len(grid[i]) - 1 or grid[i][j + 1]):
                        count += 1
        
    return (count)





