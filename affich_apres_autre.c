/*VARIABLE
  A[100]:tableau entier; 
  B[100]:tableau entier;
  i,n,n1:entier ;
  DEBUTu
    AFFICHGER(" saisi le nombre que  vous sohaitez entrer ");
    LIRE(n)
    AFFICHER("saisi le nombre de vous souhaitez entrer apres");
    LIRE(n1);
    AFFICHER("entrer les chiffres que tu veut");
    POUR (i=0,i<n,i++) FAIRE 
      LIRE(A[i]);
    FINPOUR
    AFFICHER("entrer le chiffre que tu veut ");
    POUR (i=0, i<n1,i=i+1) FAIRE 
      LIRE(B[i]);
    FINPOUR
    POUR (i=0,i<n1,i=i+1) FAIRE 
      A[n+i]=B[i];
    FINPOUR
    POUR (i=0,i<n+n1,i=i+1) FAIRE
      AFFICHER(A[i]);
    FINPOUR
  FIN*/
#include<stdio.h>
int main(void)
{
  int A[100],B[50],i,n,n1,k;
  printf("saisi le nombre de valeur que vous souhaitez entrer pour le premier ");
  scanf("%d",&n);
  printf("saisi le nombre de valeur que vous souhaitez entrer pour le second ");
  scanf("%d",&n1);
  if (n<1 || n>100 || n1<1 || n1>50){
  printf(" ERREUR: entrer un  nombre normal ");}
  else{
  printf(" on est dans le premier! ");
  k=1;
  for (i=0;i<n;i++) 
  {
    printf(" entrer le nombre n°%d ",k);
    scanf("%d",&A[i]);
    k++;
  }
  printf("on est dans le deuxième!");
  for (i=0;i<n1;i++)
  {
    printf(" entrer le nombre n°%d ",k);
    scanf ("%d",&B[i]);
    k++;
  }
  for (i=0;i<n1;i++) 
  {
    A[n+i]=B[i];
  }
  printf("voici le resultat final ");
  for (i=0;i<n+n1;i++)
  {
    printf("%d,",A[i]);
  }}
  return(0);
}
