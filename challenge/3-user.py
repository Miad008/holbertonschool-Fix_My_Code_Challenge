#!/usr/bin/env python3
"""
3-user.py
Simple User class with password validation.
"""

class User:
    """User with first_name, last_name and password."""

    def __init__(self, first_name="", last_name="", password=""):
        self.first_name = first_name
        self.last_name = last_name
        self.password = password

    def is_valid_password(self, pwd):
        """
        Return True if given pwd matches stored password.
        Convert both to str to avoid type-comparison errors.
        """
        return str(self.password) == str(pwd)


if __name__ == "__main__":
    # No prints here — grader/tests should run externally.
    pass
