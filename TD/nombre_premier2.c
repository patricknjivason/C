/*VARIABLE
  i:entier;
  n:entier;
  a:entier;
  R:entier;
  S:entier=0;
  AFFICHER("entrer un nombre que vous souhaitez");
  LIRE(a);
  AFFICHER("entrer le second nombre");
  LIRE(b);
  POUR (i=2,i<=n-1,i=i+1) FAIRE
    R=n%i;
    SI (R==0) ALORS
      S=S+1;
    FIN SI
  FIN POUR
  SI(S==0) ALORS
    AFFICHER(a," est un nombre premier ");
  SINON SI (S!=0)
    AFFICHER(a, " n'est pas premier ");
  FINSI
  */
#include<stdio.h>
int main()
{
  int i;
  int a;
  int R;
  int S=0;
  int n;
  int b;
  printf("entrer le premier nombre que vous voulez ");
  scanf("%d",&a);
  printf("entrer le second nombre ");
  scanf("%d",&b);
  if (a==0)
  {
   printf("0 nombre n'est pas premier \n"); 
  }
  else if(a==1)
  {
    printf("1 n'est pas premier \n");
  }
  else if (a!=0 || a!=1)
  {
    for (i=2;i<=a-1;i++)
    { 
      R=a%i;
      if (R==0) 
      {
        S=S+1;
      }
    }
    if (S==0)
    {
      printf("%d est un nombre premier \n",a);
    }
    else if (S!=0) 
    {
      printf("%d n'est pas premier \n ",a);
    }
  }
  if (b==0)
  {
   printf("0 nombre n'est pas premier \n"); 
  }
  else if(b==1)
  {
    printf("1 n'est pas premier \n");
  }
  else if (b!=0 || b!=1)
  {
    for (i=2;i<=b-1;i++)
    { 
      R=b%i;
      if (R==0) 
      {
        S=S+1;
      }
    }
    if (S==0)
    {
      printf("%d est un nombre premier \n",b);
    }
    else if (S!=0) 
    {
      printf("%d n'est pas premier \n",b);
    }
  }
  return (0);
}
