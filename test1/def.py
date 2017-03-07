#!/usr/bin/env python
#_*_ coding:utf-8 _*_
import json
def persion(name, age, **kw):
    print 'name: ', name, 'age: ', age, 'other: ', json.dumps(kw, ensure_ascii=False, encoding='UTF-8')
persion("JS", '22', city = u'沈阳', job = 'Student')
