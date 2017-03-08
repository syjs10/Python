#_*_ coding:utf-8 _*_
# 未用闭包, 无法保每次的变化量
def count():
	fs = []
	for i in range(1,4):
		def f():
			return i * i
		fs.append(f)
	return fs

f1, f2, f3 = count()
print f1()
print f2()
print f3()

#使用闭包, 可以保存变量
def count():
 	fs = []
 	for i in range(1,4):
 	 	def f(i):
 	 		def g():
 	 	 		return i * i
 	 	 	return g 
 	 	fs.append(f(i))
 	return fs
f1, f2, f3 = count()
print f1()
print f2()
print f3()