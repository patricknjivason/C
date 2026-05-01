/*VARIABLE
  i :enier;
  n:entier;
  S:entier;
  DEBUT
    AFFICHER("entrer votre nombre ");
    LIRE(n);
    POUR(i=1,i<=n,i=i+1) FAIRE
      S=S*i
    FINPOUR
    AFFICHER("la somme des multiplication de 1 a n",S);
  FIN*/
#include<stdio.h>
int main()
{
  int i;
  int n;
  double S;
  printf("entrer votre nombre \n");
  scanf("%d",&n);
  S=1;
  for(i=1;i<=n;i++)
  {
    S=S*i;
  }
  printf("la somme des multiplication de 0 a %d est :%lf ",n,S);
  return (0);
}
