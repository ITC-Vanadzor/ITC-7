#! /usr/bin/python

import math

# class point

class point:
	def __init__(self, x1, y1):
		self.x = int(x1)
		self.y = int(y1)

class triangle:
	# constructor of triangle
	def __init__(self, point1, point2, point3):

		# check if points are on the same line
		if ((point1.y-point2.y)*(point1.x-point3.x)==(point1.y-point3.y)*(point1.x-point2.x)):
			print "\nPoints are on the same line!!!!\n"
		self.p1 = point1
		self.p2 = point2
		self.p3 = point3

	# destructor of triangle
	def __del__(self):
		print "Triangle object was deleted"
	

	# get sides length
	def getSide1(self):
		self.side1 = self.__distance(self.p2, self.p1) 
		return self.side1

	def getSide2(self):
		self.side2 = self.__distance(self.p2, self.p3) 
		return self.side2

	def getSide3(self):
		self.side3 = self.__distance(self.p2, self.p3) 
		return self.side3

	# distance of two points
	def __distance(self, p1, p2):
		return math.sqrt((p2.x*p2.x-p1.x*p1.x)+(p2.y*p2.y-p1.y*p1.y))


	# area of any  triangle(private)
	def __area(self, p1, p2, p3):
		return abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y))/2

	#  area of triangle (public)
	def area(self):
		return  abs(self.point1.x*(self.point2.y-self.point3.y)+self.point2.x*(self.point3.y-self.point1.y)+self.point3.x*(self.point1.y-self.point2.y))/2

	# perimeter of triangle
	def perimeter(self):
		if ((self.p1.y-self.p2.y)*(self.p1.x-self.p3.x)==(self.p1.y-self.p3.y)*(self.p1.x-self.p2.x)):
			return 0
		else:		
			return self.getSide1()+self.getSide2()+self.getSide3()	

	# check if point is in triangle
	def ifInTriangle(self, aPoint):
		if (self.__area(self.p1, self.p2, aPoint)+self.__area(self.p1, aPoint, self.p3)+self.__area(aPoint, self.p2, self.p3) == self.__area(self.p1, self.p2, self.p3)):
			print "The point is inside triangle"
		else:
			print "The point is outside of triangle"

# main program
try:
	x1, y1 = input("x1 = "), input("y1 = ")
	x2, y2 = input("x2 = "), input("y2 = ")
	x3, y3 = input("x3 = "), input("y3 = ")
except ValueError:
	print "ERROR!! Wrong input data"

a = point(x1,y1)
b = point(x2,y2)
c = point(x3,y3)
po = point(1, 3)

t = triangle(a, b, c)		
print "================================\n"
print "Area : ", t.area(a,b,c)
print "Perimeter : ", t.perimeter()
t.ifInTriangle(po)
