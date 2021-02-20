#!/usr/bin/python3
"""
	Module - function returning the perimeter of an island
"""


def island_perimeter(grid):
	""" returns the perimeter of the island (grid) """
	total = 0

	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if grid[i][j] is 1:
				total += 4
				if j > 0 and grid[i][j - 1]:
					total -= 2
				if i > 0 and grid[i - 1][j]:
					total -= 2
	return total
