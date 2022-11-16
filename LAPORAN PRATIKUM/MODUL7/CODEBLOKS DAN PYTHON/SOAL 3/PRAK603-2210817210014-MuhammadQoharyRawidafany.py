n1,n2 = map(int,input().split())
if n1 == n2 :
    bil1= list(map(int, input().split()))
    bil2= list(map(int, input().split()))
    for a in range (n2):
        hasil = bil1[a] * bil2[a]
        print(hasil,end =' ')
else : print("Jumlah tidak sama")