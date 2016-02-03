#!/usr/bin/python
import math

class triangle:
	def __init__(self,(x2,y2),(x1,y1), (x3,y3)):
		self.__X1,self.__X2,self.__X3=x1,x2,x3
		self.__Y1,self.__Y2,self.__Y3=y1,y2,y3
	
	def GetX1(self):
		return self.__X1
	def GetX2(self):
		return self.__X2
	def GetX3(self):
		return self.__X3
	
       	def GetY1(self):
                return self._Y1
        def GetY2(self):
                return self.__Y2
        def GetY3(self):
                return self.__Y3 
	def side(self, x1,y1,y2,x2):
 		self._Side= math.sqrt(math.pow(x2-x1,2)+math.pow(y2-y1,2))
		return self._Side 
	def perimeter(self):
		perimeter=self.side(self.__X1,self.__Y1,self.__Y2, self.__X2)+self.side(self.__X3,self.__Y3,self.__Y2, self.__X2)+self.side(self.__X1,self.__Y1,self.__X3, self.__Y3) 
		return perimeter

	def area(self):
		return abs((self.__X2-self.__X1)*(self.__Y3-self.__Y1) - (self.__X3-self.__X1)*(self.__Y2-self.__Y1))  

	
obj=triangle((1,2),(0,3),(7,4))	
print obj.area()
print obj.perimeter()
