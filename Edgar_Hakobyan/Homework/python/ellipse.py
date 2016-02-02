import math
class ellipse:
	def __init__(self,coord):
		self.big_semiaxis = (math.sqrt(math.pow(coord[2]-coord[0],2) + math.pow(coord[3]-coord[1],2)))/2
		self.small_semiaxis = (math.sqrt(math.pow(coord[6]-coord[4],2) + math.pow(coord[7]-coord[5],2)))/2
	
	def area(self):
		s  = math.pi * self.big_semiaxis * self.small_semiaxis
		return s

coord = [-5,0,5,0,0,2,0,-2]
elips = ellipse(coord)
print elips.area()
