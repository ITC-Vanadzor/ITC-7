#!/usr/bin/python

class SingleTone(object):
    __instance = None
    def __new__(self, val):
        if SingleTone.__instance is None:
            SingleTone.__instance = object.__new__(self)
        SingleTone.__instance.val = val
        return SingleTone.__instance


x=SingleTone("ok")
print x
y=SingleTone("!!!")
print y
