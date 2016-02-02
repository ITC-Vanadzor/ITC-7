#! /usr/bin/python

import math

# class point

class point:
	def __init__(self, x1, y1):
		self.x = x1
		self.y = y1
	
class triangle:
	# constructor of triangle
	def __init__(self, point1, point2, point3):
		self.p1 = point1
		self.p2 = point2
		self.p3 = point3

	# destructor of triangle
	def __del__(self)
		print "Triangle object was deleted"
	# area of triangle
	def area(self, p1, p2, p3):
		return abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y))/2
	
	# perimeter of triangle
	def perimeter(self):
		self.side1 = math.sqrt( (self.p2.x-self.p1.x)*(self.p2.x-self.p1.x)+(self.p2.y-self.p1.y)*(self.p2.y-self.p1.y) ) 
		self.side2 = math.sqrt( (self.p3.x-self.p2.x)*(self.p3.x-self.p2.x)+(self.p3.y-self.p2.y)*(self.p3.y-self.p2.y) ) 
		self.side3 = math.sqrt( (self.p3.x-self.p1.x)*(self.p3.x-self.p1.x)+(self.p3.y-self.p1.y)*(self.p3.y-self.p1.y) ) 
		return self.side1+self.side2+self.side3	

	# check if point is in triangle
	def ifInTriangle(self, aPoint):
		if (self.area(self.p1, self.p2, aPoint)+self.area(self.p1, aPoint, self.p3)+self.area(aPoint, self.p2, self.p3) == self.area(self.p1, self.p2, self.p3)):
			print "The point is inside triangle"
		else:
			print "The point is outside of triangle"

# main program
x1, y1 = input("x1 = "), input("y1 = ")
x2, y2 = input("x2 = "), input("y2 = ")
x3, y3 = input("x3 = "), input("y3 = ")
a = point(x1,y1)
b = point(x2,y2)
c = point(x3,y3)
po = point(1, 3)

t = triangle(a, b, c)		
print "================================\n"
print "Area : ", t.area(a,b,c)
print "Perimeter : ", t.perimeter()
t.ifInTriangle(po)
