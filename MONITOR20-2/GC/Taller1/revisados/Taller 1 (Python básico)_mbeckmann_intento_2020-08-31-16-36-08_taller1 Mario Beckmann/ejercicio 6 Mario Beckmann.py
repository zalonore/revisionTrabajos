v = 8675
a = int((v//1000)%10)


b = int((v//100)%10)


c = int((v/10)%10)


d = int(v%10)

total=(str(d)+str(c)+str(b)+str(a))
print (int(total))
