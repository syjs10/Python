#!/usr/bin/env python 
#_*_ coding:utf-8 _*_

'this is a moudle test'

__author__ = "JS"

import sys 

def test():
	args = sys.argv
	if len(args) == 1:
		print "Hello World!"
	elif len(args) == 2:
		print "Hello arguments, %s!" % args[1]
	elif len(args) >2:
		print "Too many arguments!"
if __name__ == '__main__':
	test()

