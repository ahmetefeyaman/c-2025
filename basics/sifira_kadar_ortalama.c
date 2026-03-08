#include <stdio.h>
 int main() {

   float sayi,toplam=0;
   int sayac=1;

     do{
        printf("%d. sayiyi giriniz.",sayac);
         scanf("%f",&sayi);
          toplam+=sayi;
           sayac++;
     }
     while(sayi!=0);
            printf("ortalama:%.2f",toplam/(sayac-1));


return 0;
}
