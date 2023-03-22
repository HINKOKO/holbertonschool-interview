#!/usr/bin/python3

'''
Problem ==> given `n` number of boxes, numbered
from 0 to n - 1, with each box containing hypothetically
keys to other boxes, ``canUnlockAll`` purpose is to determine
if all the boxes can be opened
'''


def canUnlockAll(boxes):
    '''
    function to check if all boxes can be opened
    '''
    opened = [0]

    for key in opened:
        for k in boxes[key]:
            if k < len(boxes) and k not in opened:
                opened.append(k)

    return True if len(opened) == len(boxes) else False
