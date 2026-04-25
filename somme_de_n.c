/*VARIABLE
  i:entier;
  n:entier;
  S:entier;
  DEBUT
    AFFICHER("entrer les nombres n");
    LIRE(n);
    POUR(i=1,i<=n,i=i+1) FAIRE
      S=S+i;
    FINPOUR
    AFFICHER("la somme se tout les nombres entre 1 et votre nombre est ",S);
  FIN*/
#include<stdio.h>
int main()
{
  int i;
  int n;
  double S;
  printf("entrer un nombre quelconque ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
   S=S+i;   
  }
  printf("la somme de tout les nombres entre 0 a %d est : %lf\n",n,S);
  return (0);
}
  
  
