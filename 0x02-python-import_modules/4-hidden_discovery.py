#!/usr/bin/python3
import hidden_4
names = dir(hidden_4)
names.sort()
for i in names:
    if i[0] != '_' and i[1] != '_':
        print(i)
