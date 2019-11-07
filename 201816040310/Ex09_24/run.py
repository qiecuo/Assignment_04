# -*- coding: utf-8 -*-
import os
import re


# 执行jmeter脚本
while 1:
    cmd = "a.exe"
    tmp = os.popen(cmd).read()
    result = tmp.find("Thr")
    if result != -1 :
        print("successed")
        print(tmp)
        exit(0)
  
        