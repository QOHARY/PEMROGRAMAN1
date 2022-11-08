def maksimal (a,b):
    return max(a,b)
def minimal (a,b):
    return min(a,b)

batas = 0
maks = -10000
minim = 100000
bilangan = int (input())
while batas < bilangan :
    nilai = map(int,input().split())
    for nilai_input in nilai :
        maks = maksimal(maks,nilai_input)
        minim = minimal(minim,nilai_input)
        batas +=1
print(maks,minim)
