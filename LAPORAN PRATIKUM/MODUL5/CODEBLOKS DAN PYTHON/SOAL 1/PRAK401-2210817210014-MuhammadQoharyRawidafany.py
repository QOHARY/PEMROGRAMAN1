for ulang in range (3) :
    c,k = input("\n").split()
    c = int(c)
    for i in range(1,51) : 
        if i % c == 0 : print(k,end ='')
        else :print(i,end ='')