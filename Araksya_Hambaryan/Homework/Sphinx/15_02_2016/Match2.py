#!/usr/bin/python
"""My Match task

:param type: file
:returns: bool
:raise: IndexError, FileNotFoundError

"""

import re
  
def PrintIncorrect():
   '''
   This function works when the file is incorrect.
   '''
#    print 'Incorrect file'
#    exit

def Line_1(data):
   '''
   This function checks the first line
   :param data: first line in file
   :type: string
   :return: bool
   '''
 #   if re.match("Brand: ([A-Z]+_[A-Z]+)", data) is 'None' :
#	PrintIncorrect()

def Line_2(data):
   '''
   This function checks the second line
   
   :param data: second line in file
   :type: string
   :return: bool
   '''
#    if re.match("Version: (\d+[\.]\d+)", data) is 'None' :
#	PrintIncorrect()

def Line_3(data):
   '''
   This function checks the third line
   
   :param data: third line in file
   :type: string
   :value: 'Armenia', 'France', 'Italy', 'USA'
   :return: bool
   '''
#    countries=['Armenia', 'France', 'Italy', 'USA'] 
#    if re.match("Made by: join(countries)", data) is 'None' :
#	PrintIncorrect()
data=[]
#try:
#    with open("brand.txt", "r+") in tmp:
#	for line in tmp:
#	    data.append(line)
#    if len(data) != 3:
#	PrintIncorrect()
#    
#    Line_1(data[0])
#    Line_2(data[1])
#    Line_3(data[2])
#    
#    print 'Correct file'
#except IndexError:
#    print 'Incorrect File'
#except FileNotFoundError:
#    print 'Incorrect file name'
