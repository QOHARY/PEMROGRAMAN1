bar, kol = map(int, input().split())
angka = []
x = 0
isi = list(map(int, input().split()))
for i in range (bar):
    angka.append(isi[x : x + kol])
    x = x + kol
for bar in angka:
    for isi in bar:
        print(isi, end=' ')
    print()