x, y, z = map(int, input().split())
if x % 2 != 0:

 x += 1
if y % 2 != 0:

 y += 1
if z % 2 != 0:
 z += 1
print((x+y+z)//2)
