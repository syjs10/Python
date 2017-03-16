class Student(object):
	pass
s = Student()
s.name = "Js"
print "name: " + s.name

from types import MethodType

def set_age(self, age):
	self.age = age
s.set_age = MethodType(set_age, s, Student)
s.set_age(25)
print "age: " + str(s.age)

