def hitung (nilai1,nilai2):
    return (nilai1 - nilai2)
def mutlak (nilai):
    return (abs(nilai))
a,b,c,d = map(int,input().split())
hasil = hitung(a,c) + hitung(b,d)
print(mutlak(hasil))