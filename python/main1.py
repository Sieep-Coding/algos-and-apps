# Python uses indents for code blocks
def columnNumberTitle(columnNumber):
    """""
    The columnNumberTitle function can take an integer as an argument, columnNumber.
    It will return its corresponding column title as it appears in an Excel sheet.
    """""

    res = ""  # an empty string to store the result

    while columnNumber > 0:

        # Python uses 0-based indexing, so we adjust for that
        columnNumber -= 1

        # chr() converts an integer to a character
        # ord('A') gives the Unicode value of 'A'
        remain = columnNumber % 26
        character = chr(remain + ord('A'))
        res = character + res

        columnNumber //= 26

    return res

# Now the function can be used
print(columnNumberTitle(555))  # Output: UI
