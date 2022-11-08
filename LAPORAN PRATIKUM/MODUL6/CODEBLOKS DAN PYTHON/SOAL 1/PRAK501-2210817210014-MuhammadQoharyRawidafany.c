#include <stdio.h>
int MaxBilangan (int q, int w, int e, int r){
    if (q>w && q>e && q>r){
        return q;
    }
    else if (w>q && w>e && w>r){
        return w;
    }
    else if (e>q && e>w && e>r){
        return e;
    }
    else if (r>q && r>w && r>e){
        return r;
    }
}
int main()
{
    int a,b,c,d;
    for (int i=1;i<=3;i++){
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);
    }
    return 0;
}
