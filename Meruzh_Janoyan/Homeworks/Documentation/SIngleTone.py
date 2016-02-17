#!/usr/bin/python3
class Singleton(type):
    _instances = {}
    def __call__(cls, *args, **kwargs):
        if cls not in cls._instances:
            cls._instances[cls] = super(Singleton, cls).__call__(*args, **kwargs)
        return cls._instances[cls]

class Printer( metaclass=Singleton):
    txt=None
    def __init__(self,t):
        self.txt=t

    def print(self):
        print(self.txt)



a=Printer('First')
b=Printer('Second')

a.print() # First
b.print() # First