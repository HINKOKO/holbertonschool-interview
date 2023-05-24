#!/usr/bin/python3

"""
Method to validate a UTF8 set of data
data represented as a list of integers
"""


def validUTF8(data):
    """
    Check if the given set of data (list of integers)
    is valid UTF-8 or not
    """
    byte_count = 0
    for bit in data:
        # using a mask to perform bitwise & (1 << 7 = 128)
        # used to check the leftmost bit of each byte
        mask = 1 << 7
        if byte_count == 0:
            while bit & mask:
                byte_count += 1
                mask >>= 1
                if byte_count > 4:
                    # exceed the max byte for UTF-8
                    return False
        elif bit >> 6 != 2:
            # 2 is '10' valid continuation byte
            return False
        if byte_count:
            byte_count -= 1
    return byte_count == 0


def validUTF8_extended(data):
    """
    verify if given data is valid UTF8
    with case for 2, 3, and 4 bytes characters encoding
    """
    byte_count = 0
    for byte in data:
        if byte_count == 0:
            if (byte >> 7) != 0:
                return False
            # check for 2 bytes characters =>
            # update count to 1 remaining byte on right
            if (byte >> 5) == 0b110:
                byte_count = 1
            # check for 3 bytes characters => update count to 2 remaining
            elif (byte >> 4) == 0b1110:
                byte_count = 2
            # check for 4 bytes characters => update count to 3 remaining
            elif (byte >> 3) == 0b11110:
                byte_count = 3
        else:
            if (byte >> 6) != 0b10:
                return False
            byte_count -= 1
    return byte_count == 0
