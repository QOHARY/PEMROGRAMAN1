for ulang in range (3):
    c = int(input("\n"))
    for i in range (1,c) :
        if i % 2 : print(i,end=' ')
    print(" ")
    while (c > 0) :
        if c % 2 == 0 : print(c,end=' ')
        c = c - 1
        