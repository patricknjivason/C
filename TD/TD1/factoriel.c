/*VARIABLE
  n:entier; 
  i:entier;
  S:entier;
  DEBUT
    AFFICHER("entrer le nombre factoriel");
    LIRE(n);
    S=1;
    POUR(i=1,i<=n,i=i+1) FAIRE
      S=S*i;
    FINPOUR
    AFFICHER("le factoriel de ce nombre est ");
  FIN*/
#include<stdio.h>
int main()
{
  int n;
  int i;
  double  S;
  printf("entrer le nombre factoriel ");
  scanf("%d",&n);
  S=1;
  for (i=1;i<=n;i++)
  {
    S=S*i;
  }
  printf("le factoriel de ce nombre est :%lf\n",S);
  return (0);
}
