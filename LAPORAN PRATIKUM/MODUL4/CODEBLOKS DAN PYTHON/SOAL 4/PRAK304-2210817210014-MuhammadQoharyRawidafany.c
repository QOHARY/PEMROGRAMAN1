#include <stdio.h>
int main()
{
    for(int q=1;q<=5;q++){
    int I;
    printf("");
    scanf("%d",&I);
    if(I>=1 && I<=9){
    printf("Satuan\n");
    }
    else if (I>=10 && I<=19){
        printf("Belasan\n");
    }
    else if (I>=20 && I<=99){
        printf("Puluhan\n");
    }
    else if (I==0){
        printf("Nol\n");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    }
}
