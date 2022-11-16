#include <stdio.h>
int main ()
{
    int bil1[20],bil2[20],bar,bar2,total;
    scanf("%d %d",&bar,&bar2);
    if (bar == bar2){
    for (int a=0;a<bar;a++){
        scanf("%d",&bil1[a]);
    }
    for (int a=0;a<bar2;a++){
        scanf("%d",&bil2[a]);
        }
    for (int a=0;a<bar2;a++){
            total = bil1[a] * bil2[a];
        printf("%d ",total);
    }
    }
    else {
        printf("Jumlah tidak Sama");
    }
}
