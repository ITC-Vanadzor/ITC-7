#!/usr/bin/python

import math

class Triangle:

    def __init__(self,cord):
        print "Welcom my l...\n"
        x1=cord[3]-cord[1]
        x2=cord[5]-cord[1]
        x3=cord[5]-cord[3]
        y1=cord[2]-cord[0]
        y2=cord[4]-cord[0]
        y3=cord[4]-cord[2]
        self.a=math.sqrt(math.pow(x1,2)+math.pow(y1,2)) 
        self.b=math.sqrt(math.pow(x2,2)+math.pow(y2,2)) 
        self.c=math.sqrt(math.pow(x3,2)+math.pow(y3,2)) 
    
    def area(self):
         p =self.perimeter()/ 2
         s = math.sqrt(p * (p - self.a) * (p - self.b) * (p - self.c))
         return s
    
    def perimeter(self):
         return self.a + self.b + self.c
    def __del__(self):
        print "\nGood bye my l..."

base_coord=[10,10,20,30,35,20]
point_coord= [25,25]

basic=Triangle(base_coord)
tmp=[base_coord[0],base_coord[1],base_coord[2],base_coord[3],point_coord[0],point_coord[1]]
first=Triangle(tmp)
tmp=[base_coord[0],base_coord[1],base_coord[4],base_coord[5],point_coord[0],point_coord[1]]
second=Triangle(tmp)

tmp=[base_coord[4],base_coord[5],base_coord[2],base_coord[3],point_coord[0],point_coord[1]]
third=Triangle(tmp)

print basic.area()
if basic.area()==(first.area()+second.area()+third.area()):
   print "Point in triangle!"
else:
    print "Point out of triangle!"
