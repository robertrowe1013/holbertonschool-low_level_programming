#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """returns perimeter"""
    count = 0
    row_len = len(grid)
    prev_row = []
    i = 0

    while i < row_len:
        prev_row.append(0)
        i += 1

    for row in grid:
        for i in row:
            if row[i] == 1:
                if prev_row[i] == 0:
                    count += 1
                if row[i - 1] == 0:
                    count += 1
                if row[i + 1] == 0:
                    count += 1
        prev_row = row
    return count
