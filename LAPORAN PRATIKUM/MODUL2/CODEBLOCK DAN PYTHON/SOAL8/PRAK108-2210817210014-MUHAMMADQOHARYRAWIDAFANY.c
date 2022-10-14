#include <stdio.h>
int main()
{
   float x,y,phi,K,r;
   x = 14; 
   y = 5;
   phi= 3.14; 
   K = x / y; 
   r = K/(phi*2);
   printf("Diketahui:\n");
   printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",y);
   printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n",x);
   printf("Jawaban:\n");
   printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer",r); 
   return 0;
}
