#!/usr/bin/python

import math

class Triangle:

    def __init__(self,cord):
        self.a=math.sqrt(math.pow(cord[2]-cord[1],2)+math.pow(0,2)) 
        self.b=math.sqrt(math.pow(0,2)+math.pow(cord[1]-cord[3],2)) 
    
    def area(self):
        return math.pi*self.a*self.b*4
    def in_elipse(self,cord):
	q1=math.pow(cord[0],2)/math.pow(self.a,2)
	q2=math.pow(cord[1],2)/math.pow(self.b,2)
	return q1+q2

elipse_coord=[0,0,10,5]
point_coord= [10,10]

elipse=Triangle(elipse_coord)

print 'Elipse Area: ',elipse.area()
res=elipse.in_elipse(point_coord)

if res>1:
	print 'Point out of elipse.'
elif res<=1:
	print 'Point in elipse.'

	