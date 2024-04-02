#!/usr/bin/python3
def magic_calculation(a, b):
    res = 0
    for jj in range(1, 3):
        try:
            if jj > a:
                raise Exception('Too far')
            res += a ** b / jj
        except Exception:
            res = b + a
            break
    return res
