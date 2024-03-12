#!/usr/bin/python3
for d1 in range(0, 10):
    for d2 in range(d1 + 1, 10):
        if d1 == 8 and d2 == 9:
            print(f"{d1}{d2}")
        else:
            print("{:02d}, ".format(int(str(d1) + str(d2))), end="")
