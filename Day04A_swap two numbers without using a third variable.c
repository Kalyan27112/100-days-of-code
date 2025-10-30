# Program to swap two numbers without using a third variable

# Taking input from user
a, b = map(int, input().split())

# Swapping without a third variable
a = a + b
b = a - b
a = a - b

# Display the result
print("After swap:", a, b)
