#!/usr/bin/python
import math

class triangle:
	def __init__(self,(x2,y2),(x1,y1), (x3,y3)):
		self.X1,self.X2,self.X3=x1,x2,x3
		self.Y1,self.Y2,self.Y3=y1,y2,y3

	def  side (self, x1,y1,y2,x2):
		return math.sqrt(math.pow(x2-x1,2)+math.pow(y2-y1,2))
	
#	def perimeter(self):
#		perimeter=side(self.X1,self.Y1,self.Y2, self.X2)+side(self.X3,self.Y3,self.Y2, self.X2)+side(self.X1,self.Y1,self.X3, self.Y3) 
#		return perimeter

	def area(self):
		return abs((self.X2-self.X1)*(self.Y3-self.Y1) - (self.X3-self.X1)*(self.Y2-self.Y1))  

	
obj=triangle((1,2),(0,3),(7,4))	
print obj.area()
#print obj.perimeter()
