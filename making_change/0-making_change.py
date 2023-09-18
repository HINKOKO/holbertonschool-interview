#!/usr/bin/python3


import sys

"""
Module to determine the fewest number of coins needed to meet a given amount
"""


def makeChange(coins, total):
    """
    coins: a list of the values of coins we got
    we suppose it infinite mwahaha so rich boy
    total: the total to reach dude
    """

    set = [0] * (total + 1)

    for i in range(1, total + 1):
        set[i] = sys.maxsize

        for c in range(len(coins)):
            if i - coins[c] >= 0:
                result = set[i - coins[c]]

                if result != sys.maxsize:
                    set[i] = min(set[i], result + 1)
    if set[total] == sys.maxsize:
        return -1
    return (set[total])
