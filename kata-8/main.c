#include <stdio.h>

void main() {  
  /* 8. x, y pozitif tam sayilar olmak üzere, eger x sayisinin carpanlari toplami y sayisina, ve
  ayni zamanda y sayisinin carpanlari toplami x sayisina esit ise, bu sayilar "arkadastir"
  denir. ornegin 220 ve 284 arkadas sayilardir:
  220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
  284 => 1 + 2 + 4 + 71 + 142 = 220
  Klavyeden girilen 2 sayinin arkadas sayi olup olmadigini bulan programi yaziniz. */

  int i, number1, number2, dividers1 = 0, dividers2 = 0;
  printf("ilk sayiyi giriniz: ");
  scanf("%d", &number1);
  printf("sayinin carpanlari toplami: ");

  for (i = 1; i <= 9999; i++) {
    if (number1 % i == 0) {
      printf("%d ", i);
      if (i < number1) printf("+ ");
      dividers1 += i;
    }
  }
  
  printf("= %d\n", dividers1);
  printf("ikinci sayiyi giriniz: ");
  scanf("%d", &number2);
  printf("sayinin carpanlari toplami: ");

  for (i = 1; i <= 9999; i++) {
    if (number2 % i == 0) {
      printf("%d ", i);
      if (i < number2) printf("+ ");
      dividers2 += i;
    }
  }
  
  printf("= %d", dividers2);

  if (dividers1 == number2 && dividers2 == number1)
  	printf("\n%d ve %d, iki arkadas sayidir.", number1, number2);
  else
    printf("\n%d ve %d, arkadas sayi degillerdir.", number1, number2);
}
