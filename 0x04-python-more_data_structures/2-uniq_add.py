#!/usr/bin/python3
def uniq_add(my_list=[]):
    result_set = set()
    for i in my_list:
        if isinstance(i, int):
            result_set.add(i)
    return sum(result_set)
