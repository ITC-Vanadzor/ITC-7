#!/usr/bin/python
import math

class Ellipse:

	def __init__(self, x,y,a,b,c,d):
		self.__a=math.sqrt(math.pow(a-x,2)+math.pow(b-y,2))
		self.__b=math.sqrt(math.pow(c-x,2)+math.pow(d-y,2))
	def Geta(self):
		return self.__a
	def Getb(self):
		return self.__b
	def area(self):
		return math.pi*self.__a*self.__b
	def perimeter(self):
		return 2*math.pi*math.sqrt((math.pow(self.__a,2)+math.pow(self.__b,2)/2))
	
        def pointDetermination(self,X,Y):
		answer=math.pow(X,2)/math.pow(self.__a,2)+math.pow(Y,2)/math.pow(self.__b,2)
		if answer < 1:
			print "The point is in ellipse"
		else:
			print "The point isn't in ellipse"


x,y=0,0
a,b=2,1
c,d=4,4

ellipse = Ellipse(x,y,a,b,c,d)
print ellipse.area()	
print ellipse.perimeter()	
ellipse.pointDetermination(5,3)		
