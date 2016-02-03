#!/user/bin/python
#class Elipse 
class Elipse:
	def __init__(self,a,b): #constructor for Elipse
		self.a = a
		self.b = b
	def area(self): # function for calculating of area of elipse
		print "Area of elipse is: "
		arrea = self.a * self.b
		print (arrea)   
	def perimeter(self): # function for calculating of perimeter of elipse
		print "Perimeter of elipse is: "
		perimetter = (self.a + self.b) * 3.14 
		print (perimetter)
	def point(self,x,y): #function for checking is point situated in elipse or not?
		if x*x/(self.a * self.a) + y*y/(self.b * self.b) <= 1 :
			print "The point is in elipse "
		elif  x*x/(self.a * self.a) + y*y/(self.b * self.b) = 1 :
			print "The point is in line of elipse "
		else:
			print "The point is not in elipse or in line of elipse "
print "Input minor axis: "		
a = input("a = ")
print "Input major axis: "
b = input("b = ")
elipse = Elipse(a,b) # creating of new Elipse object
print "Input coordinates of point: " 
x = input("x= ")
y = input("y= ")
elipse.point(x,y)
elipse.area()
elipse.perimeter()
