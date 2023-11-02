#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    import sys
    args = sys.argv
    if len(args) < 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    if args[2] == "+":
        print(f"{args[1]} + {args[3]} = {add(int(args[1]), int(args[3]))}")
    elif args[2] == "-":
        print(f"{args[1]} - {args[3]} = {sub(int(args[1]), int(args[3]))}")
    elif args[2] == "*":
        print(f"{args[1]} * {args[3]} = {mul(int(args[1]), int(args[3]))}")
    elif args[2] == "/":
        print(f"{args[1]} / {args[3]} = {div(int(args[1]), int(args[3]))}")
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)
