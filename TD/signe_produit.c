/*VARIABLE
  a:entier;
  b:entier;
  c>entier,
  DEBUT
    AFFICHER("entrer le premier nombre");
    LIRE(a);
    AFFICHER'"entrer le deuxième nombre );
    LIRE (b);
    SI (a>0 et b>0) FAIRE
      afficher ("leur produit est positif");
    SINON SI (a<0 ou b<0) FAIRE 
      afficher ("leur produit est négatif");
    FINSI
  FIN
  */
#include<stdio.h>
int main()
{ 
  int a;
  int b;
  printf("entrer le premier nombre");
  scanf("%d",&a);
  printf("entrer le deuxième nombre");
  scanf("%d",&b);
  if (a>0 && b>0)
  {
    printf("le produit de deux nombres est ");
  }
  else if (a<0 && b<0)
  {
    printf("leur produit est négatif\n");
  }
  else if ( a<0 && b>0 || a>0 && b<0)
  {
    printf("leur produit est positif\n ");
  }
  return (0);
}
