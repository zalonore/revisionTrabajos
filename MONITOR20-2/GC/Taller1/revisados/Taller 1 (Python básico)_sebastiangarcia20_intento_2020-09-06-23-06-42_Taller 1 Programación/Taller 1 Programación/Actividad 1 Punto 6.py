#!/usr/bin/env python
# coding: utf-8

# In[13]:


a = int(input("Digite un número entero de 4 cifras: "))
c4 = a %10
c3 = int((a%100)/10)
c2 = int((a%1000)/100)
c1 = int((a - (a % 1000)) / 1000)

print (str(c4)+str(c3)+str(c2)+str(c1))


# In[ ]:




