#!/usr/bin/python

mystr="I'm PY`@T`HO\@@@N! `B\@ut no/b@/@/o//dy /`///\kn@o//w@@@`s` th```at I'@@`m ju//s\`t/ a /w/o/`rm."

print "Old text: ",mystr

mystr=mystr.replace("@","")
mystr=mystr.replace("/","")
mystr=mystr.replace("\\","")
mystr=mystr.replace("`","")

print "Clean text: ",mystr
