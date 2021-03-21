#include <stdio.h>

void main() {  
  /* 5. Ic ice dongü yapisi ile carpim tablosunu gerceklestiren C kodunu yaziniz. */

  int i, j, product;

  for (i = 1; i <= 10; i++) {
    if (i>1) printf("\n");
    
    printf("%d'ler / 'lar\n", i);

    for (j = 1; j <= 10; j++) {
      product = i * j;
      printf("%d x %d = %d\n", i, j, product);
    }
  }
}
