/*PROCEDURE nombre_afficher()

VARIABLE

  i:ENTIER;
  n:ENTIER;
  
  DEBUT
    AFFICHER("entrer un nombre que vous attire pour afficher \n tout les nomnres devant cecei");
    LIRE(n);
    POUR (i=0,i<=n,i=i+1) FAIRE
      AFFICHER(i);
    FINPOUR
  FIN PROCEDURE
  
DEBUT 
	nombre_afficher();
FIN
  */
#include<stdio.h>
void nombre_afficher();

void nombre_afficher()
{
  int n;
  int i;
  printf("entrer le nombre que vous souhaitez voir tout les nombres avant\n");
  scanf("%d",&n);
  for (i=0;i<=n;i++)
  {
    printf("%d\n",i);
  }
}
int main()
{
  nombre_afficher();
return (0);
}

