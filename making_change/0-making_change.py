#!/usr/bin/python3
"""
Module to determine the fewest number of coins needed to meet a given amount
"""


def makeChange(coins, total):
    """
    coins: a list of the values of coins we got
    we suppose it infinite mwahaha so rich boy
    total: the total to reach dude
    """
    # hassle
    if total <= 0:
        return 0

    coins.sort(reverse=True)
    count = 0
    i = 0

    while (i < len(coins)):
        if total == 0:
            return count
        if total < coins[i]:
            i += 1
        else:
            total -= coins[i]
            count += 1

    return -1
