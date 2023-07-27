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
    land_zones = 0
    isle_perimeter = 0

    """Get perimeter of entire grid"""
    grid_perimeter = width * height * 2

    """Get count of land zones grid"""
    for row in range(height):
        land_zones += grid[row].count(1);

    if land_zones > 0:
        isle_perimeter = grid_perimeter // land_zones

    return isle_perimeter
