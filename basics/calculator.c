#include <stdio.h>

int main() {

   float sayi1,sayi2,sonuc;
   char islem;

   printf("islemi seciniz.\n");
   scanf("%c",&islem);

   printf("sayilari giriniz.");
   scanf("%f %f",&sayi1,&sayi2);

   switch(islem){

   case '+':
   sonuc=sayi1+sayi2;
   printf("sayilarin toplami:%.2f\n",sonuc);
   break;

   case '-':
   sonuc=sayi1-sayi2;
   printf("sayilarin farki:%.2f\n",sonuc);
   break;

   case '*':
   sonuc=sayi1*sayi2;
   printf("sayilarin carpimi:%.2f\n",sonuc);
   break;

   case '/':
   sonuc=sayi1/sayi2;
   if(sayi2==0)
    printf("tanimsiz.");
    else
        printf("sayilarin bolumu:%.4f\n",sonuc);
    break;
   }

    return 0;
}
