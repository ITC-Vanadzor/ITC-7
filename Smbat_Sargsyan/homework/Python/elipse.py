import math
class ellipse:
	def __init__(self,x,y):
		self.a = x
		self.b = y
	def __havasarum(self,x1,y1):
		return (x1**2)/(self.a**2)+(y1**2)/(self.b**2)
	def area(self,mec_arancq,poqr_arancq):
		return math.pi*mec_arancq*poqr_arancq
	def paragic(self,mec_arancq,poqr_arancq):
		return math.pi*(mec_arancq+poqr_arancq)
	def stugum(self,x1,y1):
		if self.__havasarum(x1,y1) < 1:
			print("kety patkaanum e elipsin")
		if self.__havasarum(x1,y1) == 1:
			print("kety elipsi vra e")
		if self.__havasarum(x1,y1) > 1:
			print("kety chi patkanum")
try:
	x=float(input("x= "))
	y=float(input("y= "))
except TypeError:
	print("Number,Please!!")
try:
	arancq_mec=int(input("mec arancq= "))
	arancq_poqr=int(input("poqr arancq= "))
except ValueError:
		print("Number,Please")
except ZeroDivisionError:
		print("Divise in zero!!")
except arancqneriStugum(arancq_mec,arancq_poqr):
		print("Number Please")
class arancqneriStugum(Exception):
	def __init__(self,a,b):
		self.a=a
		self.b=b
	def error(self,arancq_mec,arancq_poqr):
		if self.arancq_mec <= 0 or self.arancq_mec <= 0:
			print("ERROR")
Object=ellipse(arancq_mec,arancq_poqr)
Object.stugum(x, y)
print Object.paragic(arancq_mec,arancq_poqr)
print Object.area(arancq_mec,arancq_poqr)
