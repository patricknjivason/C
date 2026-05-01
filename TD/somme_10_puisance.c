/*VARIABLE
  i:entier;
  n:entier;
  S:reel;
  DEBUT
    AFFICHER("entrer une valeur qui vous plait ");
    LIRE(n);
    POUR(i=0,i<=n,i=i+1)
    {
      S=S+(10^i);
    }
    AFFICHER("la somme de 1 a ",n," sur 10^0 a 10^n est :",S);
  FIN
  */
#include<stdio.h>
#include<math.h>
int main()
{
  int i;
  int n;
  double S;
  S=0;
  printf("entrer la valeur de n");
  scanf("%d",&n);
  for (i=0;i<=n;i++)
  {
    S=S+pow(10,i);
  }
  printf("la somme de 1 a %d sur \'(10^i)' est :%lf \n",n,S);
  return (0);
}
