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
class arancqneriStugum(Exception):
        def __init__(self,a,b):
                self.a=a
                self.b=b
try:
	x=float(input("x= "))
	y=float(input("y= "))
	arancq_mec=int(input("mec arancq= "))
	arancq_poqr=int(input("poqr arancq= "))
	if arancq_mec <= 0 or arancq_mec <= 0:
		raise arancqneriStugum(arancq_mec,arancq_poqr)
	Object=ellipse(arancq_mec,arancq_poqr)
	Object.stugum(x, y)
	print Object.paragic(arancq_mec,arancq_poqr)
	print Object.area(arancq_mec,arancq_poqr)
except ValueError:
	print("Number,Please")
except ZeroDivisionError:
	print("Divise in zero!!")
except arancqneriStugum as ex:
	print("Positive Number Please")
except TypeError:
	print("Number,Please!!")
