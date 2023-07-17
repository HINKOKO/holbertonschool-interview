#!/usr/bin/python3
"""
Module that computes units of water retained
between slice of world war 2 pieces of wall after a heavy flooding
=> two"pointers" approach in this module

Consider this example:
Given the list: walls = [0, 4, 0, 0, 3, 0, 0, 5]
'W' for solid wall
'"' for rain
                                             W
                           W  "  "  "  "  "  W
                           W  "  "  W  "  "  W
                           W  "  "  W  "  "  W
                           W  "  "  W  "  "  W

values                  0  4  0  0  3  0  0  5
index                   0  1  2  3  4  5  6  7

Hoho ! seems like we get 17 units of fresh acid rain water !
"""


def rain(walls):
    if not len(walls):
        return 0
    left, right = 0, len(walls) - 1
    lmax, rmax = walls[left], walls[right]
    water = 0
    while left < right:
        lmax = max(lmax, walls[left])
        rmax = max(rmax, walls[right])
        if lmax < rmax:
            water += lmax - walls[left]
            left += 1
        else:
            water += rmax - walls[right]
            right -= 1
    return water


if __name__ == "__main__":
    walls = [0, 4, 0, 0, 3, 0, 0, 5]
    print(rain(walls))
