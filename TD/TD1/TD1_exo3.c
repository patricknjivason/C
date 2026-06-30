/*

PROCEDURE nombre_paire_avant
VARIABLE
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
  FIN PROCEDURE
  
  DEBUT 
    nombre_paire_avnt();
  FIN
  */
  
#include<stdio.h>
void nombre_paire_avant();

int main()
{
nombre_paire_avant();
 return (0);
}

void nombre_paire_avant()
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

}
