for ulang in range (3) :
    n, k = (input().split())
    n,k = int(n),int(k)
    i,h0,h1,h2 = 0,0,0,0
    while i < n:
        i = i + 1
        j = i
        if i == 0:
            break
        while j > 0:
            j = j - 1
            print("(%d * %d)" % (j + 1, k), end=" ")
            if j > 0:
                print("+", end=" ")
        h0 = i * k
        h1 = h1 + h0
        print("= %d" % h1)
        h2 = h2 + h1
    print("%d" % h2)