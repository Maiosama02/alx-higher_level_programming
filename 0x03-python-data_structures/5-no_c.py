#!/usr/bin/python3
def no_c(my_string):
    str = ""
    for char in my_string:
        if char not in "Cc":
            str += char
    return str
