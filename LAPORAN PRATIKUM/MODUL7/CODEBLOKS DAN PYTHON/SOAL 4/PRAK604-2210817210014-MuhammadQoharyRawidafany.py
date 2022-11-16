kata1 = input()
kata2 = input()
b = 0;c = 0
if len(kata1) == len(kata2):
    for a in range(len(kata1)):
        if kata1[a] == kata2[a]:
            if kata1[a] == ' ':
                print(end=' ')
            else :
                print("*", end='')
                b = b+1
        else:
            print("#", end='') 
            c = c+1
    print("\n* = %d"%(b))
    print("# = %d"%(c))
    if b >= c:
        print("Pesan Asli")
    else :
        print("Pesan Palsu")
else :
    print("Panjang kalimat berbeda, pesan palsu")