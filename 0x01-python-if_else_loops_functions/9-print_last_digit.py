#!/usr/bin/python3
def print_last_digit(number):
    lastdigit = abs(number) % 10
    if number < 0:
       lastdigit *= -1
    print("{:d}".format(lastdigit), end='')
    return lastdigit
