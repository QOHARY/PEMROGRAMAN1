#include <stdio.h>
int minimal (int a, int b){
    if (a<b){
        return a;
    }
    else if(b<a){
        return b;
    }
}
int maksimal (int a, int b){
    if (a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
}
int main()
{
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    scanf("%d", &bilangan);
    while(batas < bilangan){
    int nilai;
    scanf("%d", &nilai);
    maks = maksimal(maks, nilai);
    minim = minimal(minim, nilai);
    batas++;
    }
    printf("%d %d",maks,minim);
}
