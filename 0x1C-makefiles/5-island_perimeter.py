#!/usr/bin/python3
"""Defines the perimeter of a grid"""


def island_perimeter(grid):
    """

    This calculates the perimeter of the island described in grid.

    Args:
        grid (List[List[int]]): A 2D grid where water is 0 and land is 1.

    Returns:
        int: The perimeter of the island p.

    """

    p = 0

    N = len(grid)
    M = len(grid[0])

    def dfs(r, c):
        """Defines the Depth-First Search Algorithm"""

        if r < 0 or r >= N or c < 0 or c >= M or grid[r][c] == 0:
            return (1)
        if grid[r][c] == 1:
            grid[r][c] = 2

            pt = dfs(r - 1, c) + dfs(r + 1, c) + dfs(r, c - 1) + dfs(r, c + 1)
            return (pt)

        return (0)

    for r in range(N):
        for c in range(M):
            if grid[r][c] == 1:
                p += dfs(r, c)

    return (p)
