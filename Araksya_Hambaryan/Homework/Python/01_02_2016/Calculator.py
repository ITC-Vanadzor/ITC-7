#!/ysr/bin/python
import sys

##Please enter the expression (exaple: 5 + 8)
num1 = sys.argv[1]
sym = sys.argv[2]
num2 = sys.argv[3]
operations = {
    '+': int(num1) + int(num2),
    '-': int(num1) - int(num2),
    '/': int(num1) / int(num2),
    '*': int(num1) * int(num2)
}
print operations[sym]
