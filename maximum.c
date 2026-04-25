/*VARIABLE
a:reel;
b:reel;
c:reel;
DEBUT
  AFFICHER("entrer le premier valeur");
  LIRE(a);
  AFFICHER("entrer le second valeur");
  LIRE(b);
  AFFICHER("entrer la troisieme valeur ");
  LIRE(c);
  SI (a>=b et a>=c) ALORS 
    AFFICHER("la valeur la plus grand est :",a);
  SINON SI (b>=a et b>=c) ALORS
    AFFICHER("la valeur la plus grand est ",b);
  SINON SI (c>=a et c>=b) ALORS 
    AFFICHER("la plus grand valeur est ",c);
  SINON SI (a=b et b=c) ALORS
    AFFICHER("tout les nombres sont égaux ");
  FINSI
FIN
*/
#include<stdio.h>
int main()
{
  float a;
  float b;
  float c;
  printf("entrer la 1er valeur ");
  scanf("%f",&a);
  printf("entrer la second valeur ");
  scanf("%f",&b);
  printf("entrer le troisieme valeur ");
  scanf("%f",&c);
  if (a>b && a>c)
  {
    printf("le plus grand nombre est : %2f ",a);
  }
  else if (b>a && b>c)
  {
   printf("le plus grand nombre est : %2f",b);
  }
  else if (c>a && c>b)
  {
   printf("le plus grand nombre est : %2f",c); 
  }
  else if (a==b && a==c)
  {
    printf("les nombres sont tous égaux\n");
  }
  return (0);
}
