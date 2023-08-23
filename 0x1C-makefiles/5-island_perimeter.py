#!/usr/bin/python3
"""
Module for island perimeter calculation using DFS
"""

def island_perimeter(grid):
    """
    Function to compute the perimeter of the island in the grid using DFS.

    Parameters:
    - grid (list of lists of integers): 
      0 represents water, 1 represents land

    Returns:
    - int: perimeter of the island
    """
    
    # Define the directions for DFS (up, down, left, right)
    directions = [(0, -1), (0, 1), (-1, 0), (1, 0)]
    
    # DFS function
    def dfs(i, j, visited):
        # Base case: out of bounds or visited cell
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or (i, j) in visited:
            return 0
        
        # Mark current cell as visited
        visited.add((i, j))
        
        # Check if current cell is water
        if grid[i][j] == 0:
            return 1
        
        perimeter = 0
        
        # Explore the neighbors
        for dx, dy in directions:
            perimeter += dfs(i + dx, j + dy, visited)
        
        return perimeter
    
    visited = set()
    
    # Iterate over the grid and start DFS from the first land cell encountered
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                return dfs(i, j, visited)
                
    return 0
