def strToStd(s):
	def charadd(s1, s2):
		return s1 + s2
	def charToLower(s):
		return reduce(charadd, map(str.lower, s))	
	def firstToUpper(s):
		return s[0].upper()+s[1:]	

	L = []
	for s1 in s:
		L.append(charToLower(s1))
	return map(firstToUpper, L)
print strToStd(['adam', 'LISA', 'barT'])
