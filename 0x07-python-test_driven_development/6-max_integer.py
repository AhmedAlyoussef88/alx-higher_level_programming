#!/usr/bin/python3
"""Module to find the max integer"""


def max_integer(list=[]):
    """Function to find and return the max integer"""
    if len(list) == 0:
        return None
    res = list[0]
    i = 1
    while i < len(list):
        if list[i] > res:
            res = list[i]
        i += 1
    return res
