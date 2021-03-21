#include <stdio.h>

void main() {  
  /* 6. Uc basamaklı, basamaklarının küpleri toplamı kendisine esit olan tam sayılara
  Armstrong sayısı denir. ornegin: 371 = 3^3 + 7^3 + 1^3.
  Ic ice dongü yapısı kullanarak 3 basamaklı Armstrong sayılarını bulan programı C dili
  ile yazınız. */

  int a, b, c, cubeRoot, threeDigits;

  for (a = 1; a <= 9; a++) {
    for (b = 0; b <= 9; b++) {
      for (c = 0; c <= 9; c++) {
        threeDigits = (a * 100) + (b * 10) + c;
        cubeRoot = a * a * a + b * b * b + c * c * c;
        if (threeDigits == cubeRoot) printf("%d => Bir Armstrong sayisidir. \n", threeDigits);
      }
    }
  }
}
