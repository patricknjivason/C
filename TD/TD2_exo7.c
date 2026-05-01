/*VARIABLE
  A[10]: tableau entier;
  B[10]:tableau entier;
  S,i,n,n1:entier;
  DEBUT
    AFFICHER(" NB:les deux vectuer doit être avoir le meme dimension\n");
    AFFICHER("enter les composant du premiers vecteur ");
    LIRE(n);
    POUR(i=0,i<n,i=i+1) FAIRE
      LIRE(A[i]);
    FINPOUR
    AFFICHER("entrer les composants du second vecteur ");
    POUR (i=0,i<n1,i=i+1) FAIRE
      LIRE(B[i]);
    FINPOUR 
    POUR (i=0,i<n,i=i+1) FAIRE 
      S=S+(A[i]*B[i]);
    FINPOUR
    SI (S=0) ALORS
      AFFICHER("le deux vecteurs sont perpendiculaire");
    SINON SI (S>0)
      AFFICHER(" le deux vecteur a une angle aigue ");
    SINON SI (S<0) 
      AFFICHER (" Les deux vecteurs a une angle obtus ");
    FINSI*/
#include<stdio.h>
int main()
{
  int A[10],B[10] ;
  int i,n,S=0,s,n1,k,l;
    printf(" NB:calcul des produit scalaire de deux vecteur \n");
    printf(" composant du premiers vecteur !\n");
    scanf("%d",&n);
    k=1;
    for(i=0;i<n;i++)
    {
      printf("entrer la n°%d:",k);
      scanf("%d",&A[i]);
      k++;
    }
    printf("composants du second vecteur !\n");
    l=1;
    for(i=0;i<n;i++)
    {
      printf(" entrer la n°%d:",l);
      scanf("%d",&B[i]);
      l++;
    } 
    for(i=0;i<n;i++)
    {
      s=(A[i])*(B[i]);
      S=S+s;
    }
    printf("leur produit scalaire est %d \n",S);
    if (S==0)
    {
      printf("le deux vecteurs sont perpendiculaire\n");
    }
    else if (S>0)
    {
      printf(" le deux vecteur a une angle aigue \n");
    }
    else if(S<0)
    {
      printf("les deux vecteur a une angle obtus\n");
    }
    return (0);
}\
    
