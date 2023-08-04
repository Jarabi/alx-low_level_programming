#!/usr/bin/python3
"""Island Perimeter Calculator

This script returns the perimeter of the island described in grid:
    * grid is a list of list of integers:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island
    (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t connected to
    the water around the island).

This file can be imported as a module and contains the function:
    * def island_perimeter(grid):
"""


def island_perimeter(grid):
    """Gets a list of lists of integers and calculates the perimeter of an
    island.

    Args:
        grid: list

    Returns:
        perimeter (int): The perimeter of the island represented by 1s in the
        grid (if present).
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if row == 0:
                    perimeter += 1
                else:
                    perimeter += grid[row - 1][col] == 0

                if col == 0:
                    perimeter += 1
                else:
                    perimeter += grid[row][col - 1] == 0

                if row == height - 1:
                    perimeter += 1
                else:
                    perimeter += grid[row + 1][col] == 0

                if col == width - 1:
                    perimeter += 1
                else:
                    perimeter += grid[row][col + 1] == 0

    return perimeter
