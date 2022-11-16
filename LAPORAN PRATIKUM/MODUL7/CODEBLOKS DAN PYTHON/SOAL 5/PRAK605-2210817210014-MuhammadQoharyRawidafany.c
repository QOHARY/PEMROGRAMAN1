#include <stdio.h>
int main ()
{
    int matriks1[10][10],matriks2[10][10],hasil[10][10];
    int i,j,k,matrix,jumlah = 0;
    scanf("%d",&matrix);
    if (matrix > 0 && matrix <= 3){
    printf("Matriks A \n");
    for(i = 0; i < matrix; i++){
      for(j = 0; j < matrix; j++){
        scanf("%d", &matriks1[i][j]);
      }
    }
    printf("Matriks B \n");
    for(i = 0; i < matrix; i++){
      for(j = 0; j < matrix; j++){
        scanf("%d", &matriks2[i][j]);
      }
    }
    for(i = 0; i < matrix; i++){
      for(j = 0; j < matrix; j++){
        for(k = 0; k < matrix; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    printf("Matriks AXB\n");
    for(i = 0; i < matrix; i++){
      for(j = 0; j < matrix; j++){
        printf("%d ", hasil[i][j]);
      }
      printf("\n");
    }
  }
}
