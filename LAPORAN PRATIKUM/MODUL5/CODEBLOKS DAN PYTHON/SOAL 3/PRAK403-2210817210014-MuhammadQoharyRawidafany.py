for ulang in range (4) :
    n1,n2 = (input("\n").split())
    n1,n2 = int (n1),int(n2)
    i,j = int(n1),int(n2)
    if n1 > n2:
        while i>= n2 and j <= n1 :
            print(i ,end='')
            print(" ",j ,end='')
            i = i-1 
            j = j+1
            if i == n2 - 1 : break
            else :
                print(" - ",end='')
    if n1 < n2:
        while i<= n2 and j >= n1 :
            print(i ,end='')
            print(" ",j ,end='')
            i = i+1 
            j = j-1
            if j == n1 - 1 : break
            else :
                print(" - ",end='')