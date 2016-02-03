import math
class triangle:
    def __init__(self,x1,y1,x2,y2,x3,y3):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.x3 = x3
        self.y3 = y3

    def side(self):
        self.a = math.sqrt(math.pow(self.x2-self.x1,2)+math.pow(self.y2-self.y1,2))
        self.b = math.sqrt(math.pow(self.x3-self.x2,2)+math.pow(self.y3-self.y2,2))
        self.c = math.sqrt(math.pow(self.x3-self.x1,2)+math.pow(self.y3-self.y1,2))

    def perimeter(self):
        self.side()
        p = self.a + self.b + self.c
        return p

    def area(self):
        pp = self.perimeter()/2
        s = math.sqrt(pp * (pp - self.a) * (pp - self.b) * (pp - self.c))
        return s

    def __del__(self):
        print "destructor"

print "triangle coordinates"
try:
    x1 = input("x1=")
    y1 = input("y1=")
    x2 = input("x2=")
    y2 = input("y2=")
    x3 = input("x3=")
    y3 = input("y3=")
    print "point coordinates"
    x = input("x=")
    y = input("y=")
except ValueError:
    print "ERROR"

p=triangle(x1,y1,x2,y2,x3,y3)
p1=triangle(x1,y1,x2,y2,x,y)
p2=triangle(x1,y1,x,y,x3,y3)
p3=triangle(x,y,x2,y2,x3,y3)

if p1.area() + p2.area() + p3.area() == p.area():
    print "ket@ patkanum e erankyan@!"
else:
    print "ket@ chi patkanum erankyan@!"

