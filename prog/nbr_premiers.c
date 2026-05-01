#include<stdio.h>
#include<stdlib.h>
void reception(int *n)
{
  printf("entrer le n ième fois de premiers que tu veut voir");
  scanf("%d",n);
}
 void calcul_des_premiers(int n,FILE *documents)
{
  int compteur;
  int i,j;
  for (i=2;i<=n;i++)
  {
    compteur=0;
    for (j=2;j<i;j++)
    {
      if (i%j==0)
      {
         compteur=1;
         break;
      }
    }
    if (compteur==0)
    {
      int temp=i;
      
     fprintf(documents,"%d\n",i);
     if (i%3==0)
      {
        printf("%d\n",i);
      }
    }
  }
}

void affichage(int n)
{
  FILE *nbr_premier;int temp;
  nbr_premier =fopen("resultat.txt", "a");
  if (nbr_premier == NULL)
  {
    printf("ERREUR: impossible d' ouvrir le fichier");
    exit (0);
  }
  else
  {
    fprintf(nbr_premier," les nombres avant %d sont: \n",(int)n);
    printf("le nombre divisible par trois dans le fichier est \n");
    calcul_des_premiers(n,nbr_premier);
  }
  fclose(nbr_premier);
  printf("resulta dans resultat.txt\n");
}
/*void affichage_a_ecran()
{
  FILE
}*/
int main(void)
{
  int n,compteur,j,i;
  reception(&n);
  affichage(n);
  return (0);
}
  
