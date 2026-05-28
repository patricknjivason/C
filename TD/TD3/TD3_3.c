#include<stdio.h>
int main()
{
  int T[100],i,j,k=1,m;
  int n;
  printf(" entrer la taille de votre tableau ");
  scanf("%d",&n);
  if (n>=1 && n<100){
  for(i=0;i<n;i++){
    printf("entrer la valeur n°%d: ",k);
    scanf("%d",&T[i]);
    k++;
    }
  printf("entrer l'element a suprimer");
  scanf("%d",&m);
  i=0;
    while (i< n)
  {
      if (T[i]==m)
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
    
  printf("voici votre tabeau ");
  for (i=0;i<n;i++){
    printf("%d,",T[i]);}
  else printf (" entrer un nombre positif et qui ne dépasse 100");
  return (0);
    }
  

  
