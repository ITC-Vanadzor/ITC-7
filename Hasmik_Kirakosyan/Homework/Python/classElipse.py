#! /usr/bin/python
import math

# ******************class point********************
class point:
	def __init__(self, x1, y1):
		self.x = x1
		self.y = y1


# ******************class ellipse*******************
class ellipse:
	__ifEllipse = true
	# constructor
	def __init__(self, point0, pointX, pointY):
		
		self.centre = point0
		self.radiusX = math.sqrt((pointX.x-point0.x)*(pointX.x-point0.x)+(pointY.y-point0.y))
		self.radiusY = math.sqrt((pointY.x-point0.x)*(pointY.x-point0.x)+(pointY.y-point0.y))
		if ((point0.y-pointX.y)*(point0.x-pointY.x)==(point0.y-pointY.y)*(point0.x-pointX.x)) or ((pointX.x*pointX.x/self.radiusY*self.radiusY+pointX.y*pointY.y/self.radiusX*self.radiusY)!=1):
			print "Can't make ellipse. Wrong coordinates!!!"
			__self.ifEllipse = false
				
	
	# destructor
	def __del__(self):
		print "An ellipse object was deleted"
	
	# ellipse area
	def area(self):
		return math.pi*self.radiusX*self.radiusY
	
	# ellipse perimeter
	def perimeter(self):
		return 2*math.pi*math.sqrt((self.radiusX*self.radiusX+self.radiusY*self.radiusY)/2)

	# check if point is inside the ellipse
	def ifIsIn(self, aPoint):
		if self.ifEllipse:
			if ( ((aPoint.x-self.centre.x)*(aPoint.x-self.centre.x)/(self.radiusX*self.radiusX)-(aPoint.y-self.centre.y)*(aPoint.y-self.centre.y)/(self.radiusY*self.radiusY)) <=1 ):
				print "\nPoint is inside the ellipse"
			else: 
				print "\nPoint isn't inside the ellipse"
		

	# ellipse characteristic
	def characteristic(self):
		print "Centre point : (", self.centre.x, ", ", self.centre.y, ")"
		print "Minor axis : ", self.radiusY
		print "Major axis : ", self.radiusX

# ******************** main program *******************************
# objects of point class
px = point(30,0)
py = point(1,6)
centre = point(0,0)
somePoint = point(0,2)

# object of ellipse class
elp = ellipse(centre, px, py) 

# result
print "===================================================="
print "Area : ", elp.area()
print "\nPerimeter : ", elp.perimeter()
elp.ifIsIn(somePoint)

