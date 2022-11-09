#include <stdio.h>
#include <math.h>
int hitung(int nilai1,int nilai2){
    return (nilai1-nilai2);
}
int mutlak(int nilai){
    return abs(nilai);
}
int main()
{
    int a,b,c,d,hasil;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    hasil = hitung(a,b) + hitung(c,d);
    printf("%d",mutlak(hasil));
    return 0;
}
