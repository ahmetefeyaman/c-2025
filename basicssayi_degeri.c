#include <stdio.h>
  int main() {

  int i,sayi;
  int pztf=0 , ngtf=0, ntr=0;

     for(i=1; i<=10; i=i+1){
        printf("%d. bir sayi gir:",i);
         scanf("%d",&sayi);

       if(sayi>0)
         pztf++;

          else if(sayi<0)
            ngtf++;

             else
                ntr++;

        }
        printf("pozitif sayi adedi:%d\n",pztf);
         printf("negatif sayi adedi:%d\n",ngtf);
          printf("notr sayi adedi:%d\n",ntr);

    return 0;
}
