#!/user/bin/python
#class Triangle
class Triangle:
	def __init__(self, x1,y1,x2,y2,x3,y3): #construktor for class
		self.x1 = x1 #giving
		self.y1 = y1 #values
		self.x2 = x2 #to
		self.y2 = y2 #coordinates
		self.x3 = x3 #of tops of 
		self.y3 = y3 #triangle
	def area(self): #function for calculating of area 
		arrea = 1/2 * ((self.x1-self.x3)(self.y2-self.y3)-(self.x2-self.x3)(self.y1-self.y3))
		print("The area of triangle is " + arrea)
	def perimeter(self):
		perimetter = sqrt((self.x2-self.x1)*(self.x2-self.x1)+(self.y2-self.y1)) + sqrt((self.x3-self.x2)*(self.x3-   	self.x2)+(self.y3-self.y2)*(self.y3-self.y2)) + ((self.x1-self.x3)*(self.x1-self.x3)+(self.y1-self.y3)*(self.y1-self.y3))
		print("The perimeter of triangle is " + perimetter)
	def point(self,x,y):
	#if point wich have coordinates (x,y) is in triangle, the sum of areas 3 triangles must be = to area of grand triangle 
		triangle1 = Triangle(x1,y1,x3,y3,x,y)
		triangle2 = Triangle(x1,y1,x2,y2,x,y)
		triangle3 = Triangle(x2,y2,x3,y3,x,y)
		triangle4 = Triangle(x1,y1,x2,y2,x3,y3)
		if triangle1.area() + triangle2.area() + triangle3.area() == triangle4.area() :
			print "The point is in triangle"
		else:
			print "The point is not in triangle"
print "Inputing coordinates for 3 tops of triangle " 	
x1 = input("x1 = ")
y1 = input("y1 = ")
x2 = input("x2 = ")
y2 = input("y2 = ")
x3 = input("x3 = ")
y3 = input("y3 = ")
triangle = Triangle(x1,y1,x2,y2,x3,y3) #constructing of new object Triangle
print "Please input coordinates for anter point: " 
x = input("x= ")
y = input("y= ")
triangle.point(x,y)
triangle.area()
triangle.perimeter()

