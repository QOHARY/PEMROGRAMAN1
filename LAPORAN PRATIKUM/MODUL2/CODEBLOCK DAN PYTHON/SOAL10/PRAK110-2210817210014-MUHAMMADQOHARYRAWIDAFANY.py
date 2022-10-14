import math
a = 5
t = 12
B = math.sqrt(a*a + t*t)
A = math.sqrt(B*B - a*a)
C = math.sqrt(B*B - t*t)
K = A + B + C
L = 0.5 *a*t
print("Diketahui :")
print("Alas =",a,"cm")
print("Tinggi =",t,"cm\n\n")
print("Jawab :")
print("Sisi A = ",round(B),"cm")
print("Sisi B = ",round(A),"cm")
print("Sisi C = ",round(C),"cm")
print("Keliling = ",round(K),"cm")
print("Luas = ",round(L),"cm")