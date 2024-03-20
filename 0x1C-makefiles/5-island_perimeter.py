#!/usr/bin/python3
'''
This module define the function island_perimeter
'''


def island_perimeter(grid):
	'''
	Returns the perimeter of the island described in grid
	'''
	width = len(grid[0])
	height = len(grid)
	edges = cells = perimeter = 0

	for row_idx in range(height):
		for cell_idx in range(width):
			if grid[row_idx][cell_idx] == 1:
				cells += 1
				if (cell_idx > 0 and grid[row_idx][cell_idx - 1] == 1):
					edges += 1
				if (row_idx > 0 and grid[row_idx - 1][cell_idx] == 1):
					edges += 1
	perimeter = (cells * 4) - (edges * 2)
	return perimeter
