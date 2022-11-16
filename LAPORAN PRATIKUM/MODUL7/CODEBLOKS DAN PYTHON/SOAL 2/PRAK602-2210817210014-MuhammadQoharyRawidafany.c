#include <stdio.h>
int main ()
{
    int bil[15],batas,total;
    scanf("%d",&batas);
    for (int a=1;a<=batas;a++){
        scanf("%d",&bil[a]);
    }
    for (int a=1;a<=batas;a++){
            total = bil[a] * a ;
        printf("%d ",total);
    }
}
