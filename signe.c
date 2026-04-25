/*VARIABLE
  a :reel
  DEBUT
    afficher("entrer un nombre selon votre préference");
    lire(a);
    SI (a>0) ALORS 
      afficher ("le nombre ",a," est positif");
    SINON SI(a=0)
      afficher("le nombre ",a,"est neutre car ni positif ni negatif");
    SINON
      afficher("le nombre ",a,"est negatif");
    FINSI
  FIN
*/
#include<stdio.h>
int main()
{
  float a;
  printf("entrer un nombre selon votre préference\n");
  scanf("%f",&a);
  if (a>0)
    {
    printf("le nombre %1f est positif \n",a);
    }
  else if (a==0)
   {
    printf("le nombre %1f est ni positif et ni negatif\n");
   }
   else 
   {
    printf("le nombre %1f est negatif\n");
   }
   return (0);
}

