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

    dp = [float('inf')] * (total + 1)
    dp[0] = 0

    for amount in range(1, total + 1):
        for coin in coins:
            if coin <= amount:
                dp[amount] = min(dp[amount], dp[amount - coin] + 1)

    if (dp[total] == float('inf')):
        return -1
    return dp[total]
