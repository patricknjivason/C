/* VARIABLE 
  n,temp,pos=0:entier;
  i:entier;
  T[100]:tableau entier;
  
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
          temp=T[pos];
          T[pos] = T[i];
          T[i]=T[pos];
        SINON 
          pos=pos+1;
        FINSI
      FINPOUR
      AFFICHER("voici votre tableau ou impair est avant pair");
      POUR (i=0,i<n,i=i+1) FAIRE
        AFFICHER(T[i]);
      FINPOUR
      */
#include<stdio.h>
int main(void)
{
  int T[100],i,n,temp,j,k;
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
    for (i=0;i<n;i++){
      for(j=0;j<n-i-1;j++){
        if(T[j]%2==0){
          temp=T[j];
          T[j]=T[j+1];
          T[j+1]=temp;
        }
      }
    }
  }
  printf(" voici votre tableau maintenant : ");
  for (i=0;i<n;i++){
    printf("%d,",T[i]);
  }
  return (0);
  
}
