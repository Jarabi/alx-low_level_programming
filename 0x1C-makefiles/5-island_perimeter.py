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
    isle_perimeter = 0

    for row in range(height):
        for col in range(width):
            """Check if current cell is land (1)"""
            if grid[row][col] == 1:
                """Add a count of 4 to count all sides"""
                isle_perimeter += 4
                """Check if top of land is also land"""
                if row > 0 and grid[row - 1][col] == 1:
                    """Subtract top side"""
                    isle_perimeter -= 2
                """Check if left of land is also land"""
                if col > 0 and grid[row][col - 1] == 1:
                    """Subtract left side"""
                    isle_perimeter -= 2

    return isle_perimeter
