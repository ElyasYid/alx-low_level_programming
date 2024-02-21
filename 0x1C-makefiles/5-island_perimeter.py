#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return perimeter of an island.

    The grid reps water:0 and land: 1.

    Args:
        grid (list): A list of list of ints reps an island.
    Returns:
        Perimeter of  island defined by grid.
    """
    horizontal = len(grid[0])
    vertical = len(grid)
    perim = 0
    lobar = 0

    for k in range(vertical):
        for p in range(horizontal):
            if grid[k][p] == 1:
                lobar += 1
                if (p > 0 and grid[k][p - 1] == 1):
                    perim += 1
                if (k > 0 and grid[k - 1][p] == 1):
                    perim += 1
    return lobar * 4 - perim * 2
