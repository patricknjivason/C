/*VARIABLE 
  A[100]:tableau entier;
  i,n,pmax,pmin,max=0,min=1000:entier;
  DEBUT
    AFFICHER("entrer la nombre d'element ");
    LIRE(n);
    POUR(i=0,i<n,i=i+1) FAIRE
      SI (A[i]>=max) ALORS
        max= A[i];
        pmax=i+1;
      FINSI
    FINPOUR
    POUR(i=0,i<n,i=i+1) FAIRE
      SI (min >= [i]) FAIRE
        min =A[i];
        pmin =i+1;
      FINSI
    FINPOUR
    AFFICHER(" le plus grand valeur de A est ",max);
    AFFICHER(" sa position est ",pmax );
    AFFICHER("le plus petit valeur est ",min);
    AFFICHER("sa position est ",pmin);
  FIN*/
#include<stdio.h>
int main(void)
{
  int A[100];
  int i,n,pmax,pmin,max=0,min=1000;
  printf (" entrer la nombre d 'element ");
  scanf("%d",&n);
  for (i=0;i<n;i++) 
  {
    scanf("%d",&A[i]);
  }
  for (i=0;i<n;i++)
  { 
    if (A[i] >= max )
    {
      max=A[i];
    }
    else if (min>= A[i])
    {
      min = A[i];
    }
    for (i=0;i<n;i++){
      if (T[i]==max){
        pmax=i+1;
        break;}
        }
    for (i=0;i<n;i++){
      if (T[i]==min){
        pmin =i+1;
        break;}
        }
  printf("le plus grand valeur est %d",max);
  printf(" sa position est %d ",pmax);
  printf(" le plus petit valeur est %d ",min);
  printf(" sa position est %d ",pmin);
  return (0);
}

  
}
