#!/usr/bin/python
class triangle:
    def __init__(self, x1, y1, x2, y2, x3, y3):
	self.X1 = x1
	self.Y1 = y1
	self.X2 = x2
	self.Y2 = y2
	self.X3 = x3
	self.Y3 = y3
    def area(self):
	return abs((self.X2-self.X1)*(self.Y3-self.Y1) - (self.X3-self.X1)*(self.Y2-self.Y1))
    def check(self, a, b):
	self__s1 = abs((self.X2-self.X1)*(b-self.Y1) - (a-self.X1)*(self.Y2-self.Y1))
	self__s2 = abs((a-self.X1)*(self.Y3-self.Y1) - (self.X3 - self.X1)*(b - self.Y1))
	self__s3 = abs((self.X2-a)*(self.Y3-b)-(self.X3-a)*(self.Y2-b))
	if self__s1+ self__s2 + self__s3 == self.makeres():
	    return "The point is inside triangle"
	else:
	    return "The point is outside triangle"

print "coordinates of the vertices"
x1, y1 = input("x1 = "), input("y1 = ")
x2, y2 = input("x2 = "), input("y2 = ")
x3, y3 = input("x3 = "), input("y3 = ")
T = triangle(x1, y1, x2, y2, x3, y3);
if T.area() == 0:
    print "There is not triangle"
print "coordinates of the point "
x = input("x= ")
y = input("y= ")
print T.check(x, y)  
