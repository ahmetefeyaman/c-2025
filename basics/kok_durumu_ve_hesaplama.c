#include <stdio.h>
#include <math.h>

 int main() {

    float a,b,c,d,x1,x2;

     printf("denklemin katsayilari giriniz.\n");
      scanf("%f %f %f",&a,&b,&c);

       d = b*b-4*a*c;

        if(d>0){
            x1= (-b + sqrt(d))/(2*a);
            x2= (-b - sqrt(d))/(2*a);
             printf("2 farkli reel kok vardir.\n");
               printf("kokler:%f %f",-x1,-x2);
}
         else if(d==0){
            x1=x2=(-b)/(2*a);
             printf("cift kat kok vardır.\n");
               printf("kokler:%f %f",-x1,-x2);
}
           else{
            printf("reel kok yoktur.\n");
}

    return 0;
}
