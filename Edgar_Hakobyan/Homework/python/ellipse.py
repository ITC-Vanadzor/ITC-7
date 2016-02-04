import math
class ellipse:
    def __init__(self,coord):
        self.big_semiaxis = (math.sqrt(math.pow(coord[2]-coord[0],2) + math.pow(coord[3]-coord[1],2)))/2
        self.small_semiaxis = (math.sqrt(math.pow(coord[6]-coord[4],2) + math.pow(coord[7]-coord[5],2)))/2

    def area(self):
        s  = math.pi * self.big_semiaxis * self.small_semiaxis
        print "area = ",s

    def in_ellipse(self,coord):
        s1 = math.pow(coord[0],2)/math.pow(self.big_semiaxis,2)
        s2 = math.pow(coord[1],2)/math.pow(self.small_semiaxis,2)
        if s1 + s2 < 1:
            print "ket@ gtnvum e ellipsi mej"
        elif s1 + s2 == 1:
            print "ket@ gtnvum e ellipsi vra"
        else:
            print "ket@ gtnvum e ellipsic durs"
ellipse_coord = [-20,0,20,0,0,10,0,-10]
a = ellipse(ellipse_coord)
a.area()
point_coord = [40,0]
a.in_ellipse(point_coord)

