print("jai shree ram")
str = input("jaii mata di")
print(str)
number1 = int(input())
number2 = int(input())
sum = float(number1) +  float(number2)
print('the sum of {0} and {1} is {2}'.format(number1,number2,sum))

import calendar
from traceback import print_tb

from pygame import init
year = int(input("please enter the number of year: "))
month = int(input("enter the number of months: "))
print(calendar.month(year,month))
print(3**2) # ** to multiply something with power
a = 12
b = 3
addition = a+b
subtraction = a-b
multiplication = a*b
division = a / b
modulus = a % b
exponent = a**b
Floor_Division = a // b
print("Addition of two numbers 12 and 3 is : ", addition)
print("Subtracting Number 3 from 12 is : ", subtraction)
print("Multiplication of two numbers 12 and 3 is : ", multiplication)
print("Division of two numbers 12 and 3 is : ", division)
print("Modulus of two numbers 12 and 3 is : ", modulus)
print("Exponent of two numbers 12 and 3 is : ", exponent)
print("Floor Division of two numbers 12 and 3 is : ", Floor_Division)
i = 5
for i in range(0,5):
    print(i*2)

age = 25
if age < 18:
    print("you are tooo minor")
    print("go to home")
else:
    if (age > 18) and (age >=40):
        print("you are eligible ")
        print("you can submit your files here")
    else:
        print("niklo")


for num in range(5, 18, 2):
    print(num)

import calendar
year = int(input("please enter year number: "))
month = int(input("please enter the month number: "))
print(calendar.month(year,month))
print("jai shree ram")
help(str)
#-------------------------------------------------------------------------------------------
a = [11,12,13]
print(a)
a.append(33)
print(a)
a.pop()
print(a)
a.insert(1,11)
print(a)
#---------------------------------------------
#electricity
units = int(input("please enter the number of units consumed: "))
if(units<50):
    amount = unit * 2.60
    surcharge = 25
elif(units <= 100):
    amount = 130 + ((units-50)*3.25)
    surcharge = 35
elif(units<=200):
    amount = 130 + 162.50 + ((units -100)*5.26)
    surcharge = 45
else:
    amount = 130 +162.50+526+((units-200)*8.45)
    surcharge = 75
total = amount + surcharge
print("\nelectricity bill = %.2f" %total)





def print_table(num):
    """ This function prints multiplication table of a given number"""
    for i in range(1,21):
        return (num,' x ', i, ' = ',num*i)
# end of function table


# input a number
n = int(input("Please Enter a number to print its multiplication table:"))

# call the function tanle by passing actual parameter 'n'

print_table(n)


## dictionary
a = {}
a = dict()

b  = {1:"apple",2:"oramge",3:"banana"}
print(b)
print(b[1])
print(b(3))
b[1]="abhi"
print(b)

def Adding(a,b):
    sum = a+b
    return sum
print("after calling ", Adding(3,4))


def sumAndaverage(x,y,z):
    sum = x+y+z
    averag = sum/3
    print("the sum ", sum)
    print("the avearge",averag)
a = int(input("\nplease enter the first value a = "))
b = int(input("\n pleasse enter 2nd"))
c = int(input("\n please enter another value"))

sumAndaverage(a,b,c)
sumAndaverage(10,20,30)
___init__


class Person:

    def __init__(self, name, age):
        self.name = name
        self.age = age


p1 = Person("John", 36)

print(p1.name)
print(p1.age)
