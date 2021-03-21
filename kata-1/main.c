#include <stdio.h>

void main()
{
  /* 1. Klavyeden girilen sayinin faktoriyelini hesaplayip
  ekrana yazdiran C programini donguler ile yaziniz. */

  int number, i, factorial = 1;

  printf("Bir Sayi Giriniz: ");
  scanf("%d", &number);

  // n faktoriyel = n sayisindan 1 e kadar olan tam sayilarin carpimidir, n! ile gosterilir.

  for (i = 1; i <= number; i++) {
  	printf("%d", i);
  	if (i < number) {
  		printf(" x ");
    }
    factorial *= i;
  }
  
    printf(" = %d", factorial);
}
