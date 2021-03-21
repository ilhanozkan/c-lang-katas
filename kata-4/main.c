#include <stdio.h>

void main()
{
  /* 4. 1’den N’ye kadar olan sayilar icinde 3’e ve 5’e tam bolunebilen sayilari bulan ve
  ekranda gosteren C kodunu yaziniz. (N sayisi kullanici tarafindan girilecektir. ornegin:
  N = 10,25,48 gibi) */

  int i, n;

  printf("Bir Sayi Giriniz: ");
  scanf("%d", &n);
  printf("3'e ve 5'e tam bolunen sayilar: \n");

  for ( i = 1; i <= n; i++ )
  if (i % 3 == 0 && i % 5 == 0) {
    printf("%d\n", i);
  }
}
