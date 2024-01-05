#!/usr/bin/python3

from sys import argv


def print_args() -> None:
    """
    Prints the number of command line arguments with
    each argument on a new line
    """
    size = len(argv[1:])

    print(f"{size} argument{'s' if size == 0 or size > 1 else ''}", end="")

    if not argv[1:]:
        print(".")
        return

    print(":")
    for position, arg in enumerate(argv[1:], start=1):
        print(f"{position}: {arg}")


if __name__ == "__main__":
    print_args()
