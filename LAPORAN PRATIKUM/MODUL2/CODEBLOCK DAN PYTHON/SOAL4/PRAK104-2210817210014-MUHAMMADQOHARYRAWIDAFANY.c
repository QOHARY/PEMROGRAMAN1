#include <stdio.h>

int main()
{
    int a,b;
    a = 400000;
    b = 350000;
    float hasil1,hasil2;
    hasil1 = a -(0.13 * a);
    hasil2 = b - (0.21 * b);
    printf("Harga sepatu A adalah %d\n",a);
    printf("Harga sepatu B adalah %d\n",b);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %.0f\n",hasil1);
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %.0f",hasil2);
    return 0;
}
