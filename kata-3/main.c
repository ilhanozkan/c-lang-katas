#include <stdio.h>

void main() {  
  /* 3. Kullanicidan sinirsiz sayida, pozitif sayi alacak ve aldigi sayilarin ortalamasini ekrana
  bastiracak bir program yaziniz. Kullanici negatif bir sayi girdigi takdire, bu sayi hesaba
  alinmayacak ve program sonlandirilip, o zamana kadar girilmis pozitif sayilarin
  ortalamasini yazdiracaktir. */

  int number, average = 0, counter = 0;

  for ( ; ; ) {
    printf("Bir Sayi Giriniz: ");
    scanf("%d", &number);
    counter++;

    if (number > 0) {
      average += number;
      printf("ortalama = %d\n", average);
    } else if (number < 0) {
      printf("ortalama = %d\n", average);
      break;
    }
  }
}
