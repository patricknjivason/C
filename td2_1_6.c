/* VARIABLE 
  i,j,max,pmax,min,pmin,s,S,S1,ipos,ineg,tmep:entier;
  TPOS[ipos],TNEG[ineg],T[50]:tableau entier;
  DEBUT
    AFFICHER("veuillez entrer n nombres que vous voylez ");
    LIRE(n);
    POUR(i=0,i<n,i=i+1) FAIRE
      LIRE([i]);
      S=S+T[i];
    FINPOUR
    AFFICHER("la somme est :",S);
    max=0;
    POUR(i=0,i<n,i=i+1) FAIRE
      SI (T[i]>max) ALORS
        max=T[i];
        pmax=i+1;
        SINON SI (T[i]<min) ALORS
        min = T[i];
        pmin=i+1;
      FINSI
    FINPOUR
    AFFICHER(la valeur max est ,max),
    i=0;
    s=0;
    TANTQUE(i<n) FAIRE
      SI (T[i]=0) ALORS
        POUR(j=i,i<n,i=i+1)FAIRE
          T[J]=T[J+1];
          s=s+1;
        FINPOUR
        n=n-1;
      SINON 
       i=i+1;
      FINSI
    FINTANQUE
    AFFICHER("le tableau resultant est ");
    POUR (i=0,i<n-s,i=i+1) FAIRE
      AFFICHER(T[i]);
    FINPOUR 
    ipos=0;
    ineg=0;
    POUR(i=0,i<n-s,i=i+1) FAIRE
      SI (T[i]>0) ALORS
        TPOS[ipos]=T[i];
        ipos=ipos+1;
      SINON SI(T[i]<0) ALORS
        TNEG[ineg]=T[i];
        ineg=ineg+1;
      FINSI
    FINPOUR
    AFFICHER( le tableau positif est )
    POUR (i=0,i<ipos,i=i+1)
      AFFICHER(TPOS[i]);
    FINPOUR
    AFFICHER( le tableau negatif est )
    POUR (i=0,i<ineg,i=i+1)
      AFFICHER(TNEG[i]);
    FINPOUR
    POUR(i=0,i<(n/2)-1,i=i+1) FAIRE
      temp=T[i];
      T[i]=T[n-1-i];
      T[n-1-i]=temp;
    FINPOUR
    AFFICHER("le tableau inverser de T est ",
    POUR(i=0,i<n,i=i+1) FAIRE
      AFFICHER(T[i]);
    FINPOUR
  FIN
    */
#include<stdio.h>
int main()
{
  int i,s,S=0,j,n,max,min,pmax,pmin,ipos,ineg,temp,k;
  int TPOS[25];
  int TNEG[25];
  int T[50];
  printf("veuillez entrer la taille du tableau :");
  scanf("%d",&n);
  k=1;
  if (n<1 || n>50)
  {
    printf("entrer un nombre normal compris entre 1 a 50:\n");
  }
  else{
  for (i=0;i<n;i++)
  {
      printf("entrer le nombre n°%d :",k);
      scanf("%d",&T[i]);
      S=S+T[i];
      k++;
  }
  printf("la somme est :%d\n",S);
  max=0;
  for (i=0;i<n;i++) 
  {    
    if (T[i]>max) 
    {
      max=T[i];
      pmax=i+1;
    }
    else if (T[i]<min)
    {
      min = T[i];
      pmin=i+1;
    }
  }
  printf("la valeur max est :%d\n",max);
  printf("sa position est au %d ème \n",pmax);
  i=0;
  s=0;
  
  while (i< n)
  {
      if (T[i]==0)
      {
        for (j=i;j<n;j++)
         {
          T[j]=T[j+1];
          }
        n=n-1;
      
       
      }
      else {
       i=i+1;
      }
      
  }
  
  printf("le tableau resultant est:");
  for (i=0;i<n;i++)
  {
      printf("%d,",T[i]);
  } 
  ipos=0;
  ineg=0;
  for (i=0;i<n;i++)
  {
      if (T[i]>0)
      {
        TPOS[ipos]=T[i];
        ipos=ipos+1;
      }
      else if (T[i]<0)
      {
        TNEG[ineg]=T[i];
        ineg=ineg+1;
      }
  } 
  printf( "\nle tableau positif est:\n" );
  for (i=0;i<ipos;i++)
    { 
      printf("%d,",TPOS[i]);
    }
  printf(" \nle tableau negatif est\n" );
  for (i=0;i<ineg;i++)
    {
      printf("%d,",TNEG[i]);
    }
  for (i=0;i<(n/2);i++) 
  {
    temp=T[i];
    T[i]=T[n-1-i];
    T[n-1-i]=temp;
  }
  printf("\nle tableau inverser de T est ");
  for (i=0;i<n;i++)
  {
    printf("%d,",T[i]);   
  }
  return (0);}
}
    
      
