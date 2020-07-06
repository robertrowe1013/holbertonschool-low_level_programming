#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """returns perimeter"""
    count = 0
    index = 0

    if not isinstance(grid, list):
        return 0

    for row in grid:
        row_len = len(row)

    grid_line = []

    for row in grid:
        for item in row:
            grid_line.append(item)

    for item in grid_line:
        if item == 1:
            if grid_line[index - row_len] == 0:
                count += 1
            if grid_line[index - 1] == 0:
                count += 1
            if grid_line[index + 1] == 0:
                count += 1
            if grid_line[index + row_len] == 0:
                count += 1
        index += 1

    return count
