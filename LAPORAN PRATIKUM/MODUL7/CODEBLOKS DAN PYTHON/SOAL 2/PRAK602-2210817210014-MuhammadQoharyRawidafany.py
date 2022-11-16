batas = int(input())
tempat = []
jumlahz= list(map(int, input().split()))
for a in range (batas):
    hasil = jumlahz[a] * (a+1)
    print(hasil,end =' ')