
#!/usr/bin/pythor

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
        def __length(self, p1,p2):
                return math.sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y-p1.y)*(p2.y-p1.y))
        def area(self):
                return abs(p1.x*(p2.x-p3.x)+p2.y*(p3.y-p1.y)+p3.x*(p1.y-p2.y))/2
        def perimeter(self):
                return self.__length(p1,p2)+self.__length(p2,p3)+self.__length(p1,p3)
        def __del__(self):
                print("Triangle destructor")
try:
        a=int(raw_input("x1="))
        b=int(raw_input("y1="))
        c=int(raw_input("x2="))
        d=int(raw_input("y2="))
        e=int(raw_input("x3="))
        f=int(raw_input("y3="))
except TypeError:
        print "ERROR"
p1 = point(a,b)
p2 = point(c,d)
p3 = point(e,f)
g = triangle(p1,p2,p3)
print"Area=",g.area()
print "Perimeter=",g.perimete
