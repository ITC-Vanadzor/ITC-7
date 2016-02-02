#!/usr/bin/python
class triangle:
    def __init__(self, x1, y1, x2, y2, x3, y3):
	self.X1=x1
	self.Y1=y1
	self.X2=x2
	self.Y2=y2
	self.X3=x3
	self.Y3=y3
    def makeres(self, a, b):
		self.m1=abs((self.X2-self.X1)*(self.Y3-self.Y1)-(self.X3-self.X1)*(self.Y2-self.Y1));
		self.m2=abs((a-self.X1)*(self.Y3-self.Y1)-(self.X3-self.X1)*(b-self.Y1));
		self.m3=abs((self.X2-a)*(self.Y3-b)-(self.X3-a)*(self.Y2-b));
		self.m4=abs((self.X2-self.X1)*(b-self.Y1)-(a-self.X1)*(self.Y2-self.Y1));
	def stugum(self, a, b):
		self.makeres(a, b);
		if self.m1 == self.m2 + self.m3 + self.m4:
	    	self.my_print="Ket@ erankyan nersum e";
		else:
	    	self.my_print="Ket@ erankyan nersum che";
print "mutqagreq erankyan gagatneri koordinatner@";
x1=input("x1 = ")
y1=input("y1 = ")
x2=input("x2 = ")
y2=input("y2 = ")
x3=input("x3 = ")
y3=input("x3 = ")
test=triangle(x1, y1, x2, y2, x3, y3);
print "stugvox keti koordinatner@"
x=input("x= ")
y=input("y= ")
test.stugum(x, y);
print test.my_print;  
