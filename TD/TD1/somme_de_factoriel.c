/*VARIABLE
  i:entier;
  n:entier;
  S:reel;
  S1:reel;
  S=0;
  S1=1;
  DEBUT 
    AFFICHER("entrer un nombre quelconque");
    LIRE(n);
    POUR(i=1,i<=n,i=i+1) FAIRE
      POUR(j=0,j<=i,j=j+1) FAIRE
        S1=S*j;
        S=S+S1;
      FINPOUR
    FINPOUR
    AFFICHER("la somme de 1! a ",n"! est :",S);
  FIN
  */  
#include<stdio.h>
int main ()
{
  int i;
  int n;
  int j;
  double S=0;
  double S1=1;
  printf("entrer la valeur de n ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    for (j=1;j<=i;j++)
    {
      S1=S1*j;
      S=S+S1;
    }
  }
  printf("le somme de 1 a %d sur \'1! ...%d!' est :%lf \n",n,n,S);
  return  (0);
}
