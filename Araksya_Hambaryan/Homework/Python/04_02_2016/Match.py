#!/usr/bin/python
import re

def PrintIncorrect():
    print 'Incorrect file'
    exit

def Line_1(data):
    if re.match("Brand: ([A-Z]+_[A-Z]+)", data) is 'None' :
	PrintIncorrect()

def Line_2(data):
    if re.match("Version: (\d+[\.]\d+)", data) is 'None' :
	PrintIncorrect()

def Line_3(data):
    countries=['Armenia', 'France', 'Italy', 'USA'] 
    if re.match("Made by: join(countries)", data) is 'None' :
	PrintIncorrect()
data=[]
try:
    with open("brand.txt", "r+") in tmp:
	for line in tmp:
	    data.append(line)
    if len(data) != 3:
	PrintIncorrect()
    
    Line_1(data[0])
    Line_2(data[1])
    Line_3(data[2])
    
    print 'Correct file'
except IndexError:
    print 'Incorrect File'
except FileNotFoundError:
    print 'Incorrect file name'
