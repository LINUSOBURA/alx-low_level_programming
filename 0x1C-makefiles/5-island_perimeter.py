#!/usr/bin/python3

""" Grid Perimeter Module """


def island_perimeter(grid):
    """Function that returns perimeter of the island"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                    x, y = i + dx, j + dy
                    if x < 0 or x >= rows or y < 0 or\
                    y >= cols or grid[x][y] == 0:
                        perimeter += 1
    return perimeter
