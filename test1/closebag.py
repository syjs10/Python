# 未用闭包, 无法保每次的变化量
# def count():
# 	fs = []
# 	for i in range(1,4):
# 		def f():
# 			return i * i
# 		fs.append(f)
# 	return fs

# f1, f2, f3 = count()
# print f1()