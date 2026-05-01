/* VARIABLE 
  n,temp,pos=0:entier;
  i,k=0,l=0:entier;
  T[100],I[50],P[50]:tableau entier;
  
  DEBUT
    AFFICHER("entrer le nombre de valeur que vous souhaitez entrer ");
    LIRE (n);
    SI (n<=0 ou n>100) ALORS
      AFFICHER(" entrer un nombre raisonnable comme n>1 ou n<100");
    SINON 
      POUR (i=0,i<n,i=i+1) FAIRE
        LIRE (T[i]);
      FINPOUR 
      POUR (i=0,i<n,i=i+1) FAIRE
        SI (T[i]%2!=0) ALORS
         P[k]=T[i];
         k=k+1;
        SINON 
          I[l]=T[i];
          l=l+1;
        FINSI
      FINPOUR
      AFFICHER("voici votre tableau ou impair est avant pair");
      POUR (i=0,i<k,i=i+1) FAIRE
        T[i]=P[i];
      FINPOUR
      POUR(i=k,i<k+l,i++)FAIRE
        T[i]=I[i];
      FINPOUR
      POUR(i=0,i<k+l,i++)FAIRE
        AFFICHER(T[i]);
      FINPOUR
    FIN
      */
#include<stdio.h>
int main(void)
{
  int T[100],P[50],I[50],i,n,pos,temp,k,u=0,v=0;
  printf(" entrer la taille du tableau \n");
  scanf("%d",&n);
  if (n==1)
  {
    printf("c'est une nombre unique l' analyse ne marche pas \n");
  }
  else if (n<2 || n>100) 
  {
    printf(" entrer un nombre raisonable s' il vous plait \n");
  }
  else 
  {
    printf(" enter la valeur \n");
    k=1;
    for(i=0;i<n;i++)
    {
      printf("%d-          n°%d:",k,k);
      scanf("%d",&T[i]);
      k++;
      printf("\n");
    }
  pos=n-1;
  for (i=0;i<n;i++) 
  {
    if (T[i]%2==0)
    {
      P[u]=T[i];
      u++;
    }
    else {I[v]=T[i];v++;};
 }
  printf("voici  le resultat attendue:");
  for(i=0;i<=v;i++)
  {
   T[i]=I[i];
  }
  for(i=v+1;i<u+v;i++){T[i]=P[u];}
  for(i=0;i<u+v;i++){printf("%d",T[i]);}
  printf("\n");
}
  return (0);
}
      
