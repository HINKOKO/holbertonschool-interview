#!/usr/bin/python3

"""
Minimum operations module
"""


def minOperations(n):
	'''
	Method to compute the fewest number of operations
	to reach exactly 'n' times 'H' characters in the file
	Text editor can only do 'Paste' and 'Copy all' operations
	'''
	dp = [float('inf')] * (n + 1)
	dp[1] = 0
	for i in range (2, n + 1):
		for j in range (1, i):
			if i % j == 0:
				dp[i] = min(dp[i], dp[j] + i//j)
	return dp[n]

