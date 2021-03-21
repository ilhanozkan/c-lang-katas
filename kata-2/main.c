#include <stdio.h>

void main() {  
  /* 2. Klavyeden girilen sayinin tersini (ornegin 1234 ==> 4321 gibi)
  ekrana bastiran programi yaziniz. */

  int number, reverseNumber;

  printf("Bir sayi giriniz: ");
  scanf("%d", &number);

  while ( number > 10 ) {
    reverseNumber = number % 10;
    printf("%d", reverseNumber);
    number /= 10;
  }

  printf("%d", number);
}
