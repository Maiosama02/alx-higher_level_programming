#!/usr/bin/python3
first = True
for i in range(0, 10):
    for j in range(0, 10):
        if i != j:
            if i < j:
                if first:
                    print("{:02d}".format(i * 10 + j), end="")
                    first = False
                else:
                    print(", {:02d}".format(i * 10 + j), end="")
print("")
