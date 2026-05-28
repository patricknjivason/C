/*VARIABLE
  i:entier;
  n:entier;
  DEBUT
    AFFICHER("entrer la valeur que vous souhaitez savoir ses diviseurs ");
    LIRE(n);
    POUR(i=0,i<=n,i++) FAIRE
      SI (n%i=0) FAIRE 
        AFFICHER(i);
      FINSI
    FINPOUR
  FIN
  */
#include<stdio.h>
int main()
{
  int i;
  int n;
  printf("entrer la valeur que vous souhaitez savoir ses diviseurs ");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    {
      if (n%i==0)
        {
          printf("%d\n",i);
        }
    }
  return (0);
}
