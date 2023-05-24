#!/usr/bin/python3

"""
Method to validate a UTF8 set of data
data represented as a list of integers
"""


def validUTF8(data):
    """
    verify if given data is valid UTF8
    Carrie assumes only 1 byte data set
    """
    for byte in data:
        if (byte >> 7) != 0:
            return False
        return True
