#!/usr/bin/env python
# coding: utf-8

# In[14]:


import math

a = float(input("Digite el valor de a: "))
b = float(input("Digite el valor de b: "))
c = float(input("Digite el valor de c: "))

X1 = (-b+(math.sqrt(b**2-4*a*c)))/(2*a)
X2 = (-b-(math.sqrt(b**2-4*a*c)))/(2*a)

print ("X1 = ",X1,)
print ("X2 = ",X2,)

