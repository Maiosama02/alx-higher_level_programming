#!/usr/bin/python3
def uppercase(string):
    for c in string:
        ascii = ord(c)
        if 'a' <= c <= 'z':
            ascii -= 32
        print(chr(ascii), end="")
    print("")
    