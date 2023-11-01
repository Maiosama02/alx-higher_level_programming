#!/usr/bin/python
output = ""
for c in range(122, 96, -1):
    if c % 2 == 0:
        output += chr(c)
    else:
        output += chr(c).upper()
print("{:s}".format(output), end="")
