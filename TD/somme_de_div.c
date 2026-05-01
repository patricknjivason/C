/*VARIABLE
  i:entier;
  n:entier;
  S:reel;
  DEBUT
    AFFICHER("entrer un nombre que vous voulez");
    LIRE(n);
    S=0;
    POUR(i=1,i<=n,i=i+1) FAIRE 
      S=S+(1/i);
    FINPOUR
    AFFICHER("voici la somme de 1 a votre nombre sur (1/i) est :",S);
  FIN*/
#include<stdio.h>
int main()
{
  int i;
  int n;
  float S;
  float s;
  printf("entrer un nombre que vous voulez \n");
  scanf("%d",&n);
  S=0;
  for (i=1;i<=n;i++)
  {
    s=(1.0/i);
    S=S+s;
  }
  printf("la valeur de \'1/i' est :%f ",s);
  printf("voici la somme de 1 a votre nombre %d sur \'1/i' est : %f \n",n,S);
  return (0);
}
  
      
