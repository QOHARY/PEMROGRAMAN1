def MaxBilangan(q,w,e,r):
    q = int(q); w = int(w); e = int(e); r = int(r)
    if (q>w and q>e and q>r):
        return q
    elif (w>q and w>e and w>r):
        return w
    elif (e>q and e>w and e>r):
        return e
    elif (r>q and r>w and r>e):
        return r
a,b,c,d= map(int,input().split())
hasil = MaxBilangan(a,b,c,d)
print(hasil)
    