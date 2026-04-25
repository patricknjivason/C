/* VARIABLE
  r :entier;
  a:entier;
  b:entier;
  A:entier;
  AFFICHER("entrer la premiere valeur ");
  LIRE(a);
  AFFICHER("entrer la second valeur ");
  LIRE(b);
  A=a;
  TANT QUE (b!=0) FAIRE
    r =a%b;
    a=b;
    b=r;
  FINVTANT QUE
  AFFFICHER("LE PGCD de ",A "et ",b" est :",a);
FIN*/
#include<stdio.h>
int main()
{
  int r;
  int a;
  int b;
  int A;
  int B;
  printf("entrer la valeur de a");
  scanf("%d",&a);
  printf("entrer la valeur de b");
  scanf("%d",&b);
  A=a;
  B=b;
  while (b!=0)
    {
	 r=a%b;
	 a=b;
	 b=r;
    }
  printf("le pgcd de %d et %d  est %d\n",A,B,a);
 return 0;
}
