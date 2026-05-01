#include<stdio.h>
#include<stdlib.h>
void reception(int *a,int *b)
{
  printf("entrer la valeur  a ");
  scanf("%d",a);
  printf("entrer la valeur de b ");
  scanf("%d",b);
}
int res (int a,int b)
{
 return (a + b);
} 
void affichage(int valiny)
{
  FILE *some;
 some= fopen("resultat.txt","a");
 if (some == NULL)
 {
  printf("ERREUR:impossible d'executer le fichier ");
  exit (0);
 }
 else 
 {
  fprintf(some," la somme de a et b est %d \n",valiny);

 }
 fclose(some);
}
int main(void)
{
  int a;int b;
  reception(&a,&b);
  int x=res(a ,b);
  int valiny = x;
  affichage(valiny);
 return 0;
}
