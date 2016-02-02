#!/usr/bin/python
import math

class point:
	def __init__(self, x=0, y=0):
		self.x=x
		self.y=y
		print("Constructor of point")
	def __del__(self):
		print("Point destructor")
class triangle:
	def __init__(self, a, b, c):
		self.p1 = a
		self.p2 = b
		self.p3 = c
		print("Constructor of triangle")
	def length(self, p1,p2):
		return math.sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y-p1.y)*(p2.y-p1.y))
	def area(self,p1,p2,p3):
		return abs(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y))/2
	def perimeter(self):
		return self.length(p1,p2)+self.length(p2,p3)+self.length(p1,p3)
	def __del__(self):
		print("Triangle destructor")
a=input("x1=")
b=input("y1")
c=input("x2")
d=input("y2")
e=input("x3")
f=input("y3")
p1 = point(a,b)
p2 = point(c,d)
p3 = point(e,f)
g = triangle(p1,p2,p3)
print g.length(p1,p2)
print g.area(p1,p2,p3)
print g.perimeter()


