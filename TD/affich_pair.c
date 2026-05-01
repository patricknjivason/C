/*VARIABLE
  i:entier;
  n:entier;
  DEBUT
    AFFICHER("entrer la valeur de n");
    LIRE(n);
    AFFICHER ("les nombres avant votre nombre est :);
    POUR(i=0,i<=n,i=i+1) FAIRE
      SI(i%2=0) FAIRE
        AFFICHER(i);
      FINSI
    FINPOUR
  FIN*/
#include<stdio.h>
int main()
{
 int i;
 int n;
 printf("entrer la valeur de n\n");
 scanf("%d",&n);
 for (i=0;i<=n;i++)
  {
    if (i%2==0)
      {
        printf("%d\n",i);
      }
  }
 return (0);

}
