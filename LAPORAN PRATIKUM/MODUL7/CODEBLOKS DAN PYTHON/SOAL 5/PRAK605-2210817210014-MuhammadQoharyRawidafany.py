matrix = int(input())
matriks1 = []
print('Matriks A')
for i in range (matrix):
    k = list(map(int, input().split()))
    matriks1.append(k)
matriks2 = []
print('Matriks B')
for i in range (matrix):
    k = list(map(int, input().split()))
    matriks2.append(k)
matrikskali = []
print('Matriks AXB')
for i in range (matrix):
    matrikskali.append([])
    for j in range (matrix):
        jumlah = 0
        for k in range (matrix):
            jumlah = jumlah + matriks1[i][k] * matriks2[k][j]
        matrikskali[i].append(jumlah)
for baris in matrikskali:
    for k in baris:
        print(k, end=' ')
    print()