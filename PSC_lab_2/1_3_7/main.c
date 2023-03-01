#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
  double a, b, c, D, x_1, x_2;
  printf("Enter number a =  ");
  scanf("%lf", &a);
  printf("Enter number b =  ");
  scanf("%lf", &b);
  printf("Enter number c =  ");
  scanf("%lf", &c);
  if(a != 0){
        D = (b*b)-4*a*c;
      if(D > 0){
        x_1 = - b + sqrt(D)/2*a;
        printf("The first root is %lf \n", x_1);
        x_2 = - b - sqrt(D)/2*a;
        printf("The first root is %lf", x_2);
    }
      else if(D == 0){
      x_1 = -b/2*a;
      printf("The first root is %lf \n", x_1);
      x_2 = -b/2*a;
      printf("The first root is %lf", x_1);
    }

    else {
        printf("This equation has no roots");
    }
  }
  else {
   printf("This equation is not quadratic");
  }
}
