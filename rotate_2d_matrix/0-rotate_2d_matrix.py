#!/usr/bin/python3

"""
Module that rotate a matrix 90 degrees clockwise
"""

def rotate_2d_matrix(matrix):
    """
    rotate your matrix and be clockwise
    """
    n = len(matrix)
    matrix.reverse()
    for i in range(n):
        for j in range(i):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
