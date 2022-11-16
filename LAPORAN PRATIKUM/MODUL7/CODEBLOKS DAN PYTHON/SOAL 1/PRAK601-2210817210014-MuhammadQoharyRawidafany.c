#include <stdio.h>
int main ()
{
    int bil[10][10],bar,kol;
    scanf("%d %d",&bar,&kol);
    for (int a=0;a<bar;a++){
        for (int b=0;b<kol;b++){
        scanf("%d",&bil[a][b]);
        }
    }
    printf("");
    for (int a=0;a<bar;a++){
        for(int b=0;b<kol;b++){
        printf(" %d ",bil[a][b]);
        }
        printf("\n");
    }
}
