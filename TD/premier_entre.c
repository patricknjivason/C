/* VARIABLE
  r :entier;
  a:entier;
  b:entier;
  A:entier;
  pgcd:entier;
  AFFICHER("entrer la premiere nombre ");
  LIRE(a);
  AFFICHER("entrer la second nombre ");
  LIRE(b);
  A=a;
  TANT QUE (b!=0) FAIRE
    r =a%b;
    a=b;
    b=r;
  FINVTANT QUE
  pgcd=a;
  SI (pgcd==1) FAIRE
    AFFICHER("les deux nombres sont premiers entre eux ");
  FINSI
FIN*/
#include<stdio.h>
int main()
{
  int r;
  int a;
  int b;
  int A;
  int B;
  int pgcd;
  printf("entrer le premier nombre ");
  scanf("%d",&a);
  printf("entrer le second nombre ");
  scanf("%d",&b);
  while (b!=0)
    {
	 r=a%b;
	 a=b;
	 b=r;
    }
  pgcd=a;
  if (pgcd==1) 
  {
    printf("les deux nombres sont premier entrer eux \n");
  }
  else 
  {
    printf(" les deux nombres ne sont pas premier entre eux \n");
  }
 return 0;
}
