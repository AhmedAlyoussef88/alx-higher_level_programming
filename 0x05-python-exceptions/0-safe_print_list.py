#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):

	jj = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            jj += 1
        except IndexError:
            NONE
    print()
    return jj
