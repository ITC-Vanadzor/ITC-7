#!/usr/bin/python

import math

class Triangle:

    def __init__(self,x1,y1,x2,y2,x3,y3):
        print "Welcom my l...\n"
        xx1=x2-x1
        xx2=x3-x1
        xx3=x3-x2
        yy1=y2-y1
        yy2=y3-y1
        yy3=y3-y2
        self.a=math.sqrt(math.pow(xx1,2)+math.pow(yy1,2))
        self.b=math.sqrt(math.pow(xx2,2)+math.pow(yy2,2))
        self.c=math.sqrt(math.pow(xx3,2)+math.pow(yy3,2))

    def area(self):
         p =self.perimeter()/ 2
         s = math.sqrt(p * (p - self.a) * (p - self.b) * (p - self.c))
         return s

    def perimeter(self):
         return self.a + self.b + self.c
    def __del__(self):
        print "\nGood bye my l..."

basic=Triangle(10,10,20,30,35,20)
first=Triangle(10,10,20,30,25,25)
second=Triangle(10,10,25,25,35,20)
third=Triangle(25,25,20,30,35,20)

if basic.area()==(first.area()+second.area()+third.area()):
    print "Point in triangle!"
else:
    print "Point out of triangle!"

~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                                                                                                     
~                                                    
