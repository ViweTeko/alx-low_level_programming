#!/usr/bin/python3
"""This is an island perimeter module"""


def island_perimeter(grid):
    """Returns perimeter of island in grid"""

    a = 0
    ln = len(grid) - 1
    wd = len(grid[0]) - 1

    for z, b in enumerate(grid):
        for y, c in enumerate(b):
            if c == 1:
                if z == 0 or grid[z - 1][y] != 1:
                    a += 1
                if y == 0 or grid[z][y - 1] != 1:
                    a += 1
                if y == wd or grid[z][y + 1] != 1:
                    a += 1
                if z == ln or grid[z + 1][y] != 1:
                    a += 1
    return a
