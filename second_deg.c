#include<math.h>
#include<stdio.h>
int main()
{  
  float a,b,c;
  double x1,x2,x,x3;
  int delta;
  printf(" votre eqution est du forme aX²+bX+c=0 \n"); 
  printf("entrer la valeur de a\n");
  scanf("%f",&a);
  printf("entrer la valeur de b\n");
  scanf("%f",&b);
  printf(" entrer la valeur de c\n");
  scanf("%f",&c);
  if (a==0 )
  {
    if (b!=0 && c!=0)
      {
        printf("devient %.0fx +%.0f =0 \n",b,c);
        x3=-c/b;
        printf("la solution est x=%.2lf \n",x3);
      }
    else if (b!=0 && c==0)
      {
        printf ("la solution est x=0\n");
      }
    else if (b==0 && c!=0)
    {
      printf (" l'equation n'admet pas de solution\n ");
    }
    else if (b==0 && c==0)
    {
      printf(" l'equation admet une infinte de solution\n ");
    }
  }
  if (a!=0)
  {
    delta = (b*b)-(4*a*c);
    if (delta>0)
      {
	printf(" il admet deux solution reel\n");
	x1=(-b-sqrt(delta))/2*a;
	x2=(-b+sqrt(delta))/2*a;
	printf(" les solution sont x1=%3f, x2=%3f\n",x1,x2);
      }
    else if (delta==0)
      {
	printf (" il admet une solution double\n");
	x=(-b/(2*a));
	printf("la solution est x=%f\n",x);
      }
    else if (delta <0)
      {
     	printf("il admet une solution une solution dans C");
     	delta=sqrt(-delta);
     	printf("la solution est X1=%.1lf -%.1lfi",-b/2*a,delta/2*a);
     	printf("la solution est X2=%.1lf +%.1lfi",-b/2*a,delta/2*a);
     	
      }
    }
    return (0);
}
