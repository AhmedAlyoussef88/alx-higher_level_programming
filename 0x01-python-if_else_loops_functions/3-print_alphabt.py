#!/usr/bin/python3
for character in range(97, 123):
    if chr(character) is not 'q' and chr(character) is not 'e':
        print("{}".format(chr(character)), end="")
