#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for i in range(10, 100):
    for j in range(i, 100):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result to the file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
