#!/usr/bin/python3
"""
5-main
"""
from typing import List
from functools import reduce


def island_perimeter(grid: List[List[int]]) -> int:
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (List[List[int]]): The grid representing the island.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the grid is empty or invalid.

    """
    if not grid:
        raise ValueError("Grid is empty.")

    height = len(grid)
    width = len(grid[0])

    def cell_perimeter(row: int, col: int) -> int:
        if grid[row][col] == 0:
            return 0

        top = grid[row - 1][col] if row > 0 else 0
        bottom = grid[row + 1][col] if row < height - 1 else 0
        left = grid[row][col - 1] if col > 0 else 0
        right = grid[row][col + 1] if col < width - 1 else 0

        return 4 - (top + bottom + left + right)

    perimeter = sum([cell_perimeter(row, col) for row in range(height) for col in range(width)])

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

