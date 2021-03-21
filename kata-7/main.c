#include <stdio.h>

void main() {  
  /* 7. Kullanicinin iki tam sayinin carpimini toplama islemiyle bulan bir C programini yaziniz.
  (ornegin= 4*5 =20 fakat carpma islemi olmaksizin 4+4+4+4+4 = 20 dir (yani 5 tane 4
  ün toplami) */

  int a, b, sum = 0, counter = 1;

  printf("ilk sayiyi giriniz: ");
  scanf("%d", &a);
  printf("ikinci sayiyi giriniz: ");
  scanf("%d", &b);

  while (counter <= b) {
    if (counter < b) {
      sum += a;
      printf("%d + ", a);
      counter++;
    } else if (counter == b) {
      sum += a;
      printf ("%d = %d", a, sum);
      break;
    }
  }
}
