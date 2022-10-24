#include <stdio.h>
int main ()
{
    for (int q=1;q<=5;q++){
    int H,J,D,I,M;
    scanf("%d",&I);
    H = I /86400;
    J = (I / 3600) % 24;
    M = (I / 60) % 60;
    D = I % 60;
    if (I<=3600){
        printf("%02d : %02d : %02d\n",J,M,D);
        }
    else if(I>3600 && I<86400){
        printf("%02d : %02d : %02d\n",J,M,D);
        }
    else if(I>=86400){
        printf("%d hari %02d : %02d : %02d\n",H,J,M,D);
    }
    }
}