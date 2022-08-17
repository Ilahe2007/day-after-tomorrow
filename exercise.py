d,m,y=input().split()
d=int(d)
m=int(m)
y=int(y)
if m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12:
  if m==12:
    if d>=30:
      d=d%30
      print(d+1,m-11,y+1)
    else:
      print(d+2,m,y)
  else:
    if d>=30:
      d=d%30
      print(d+1,m+1,y)
    else:
      print(d+2,m,y)
elif m==2:
  if d<=29:
    if y%4==0:
      if d==29:
        print(2,m+1,y)
      elif d==28:
        print(1,m+1,y)
      else:
        d=d%28
        print(d+2,m,y)
    else:
      if d==28:
        d=d%28
        print(2,m+1,y)
      elif d==27:
        print(1,m+1,y)
      else:
        d=d%27
        print(d+2,m,y)
else:
  if d>=29:
    d=d%29
    print(d+1,m+1,y)
  else:
    print(d+2,m,y)
