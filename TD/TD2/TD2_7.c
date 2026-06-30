#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct tableau
{
  int *tab1;
  int *tab2;
  int sum;
}tableau;

#define speed 70

void reception_de_taille(int* taille);
void reception_tableau(tableau* tableau,int taille);
void verification_nature(tableau* tableau);
void input_box(const char *mesg,int vitesse_ms);

void reception_de_taille(int *taille)
{
  input_box("le produit scalaire n' est possible que si les deux vecteurs ont le même nombre de composant:\n ",(speed/6));
  sleep(0.25);
  input_box("entrer le nombre de composant des deux vecteurs: ",speed);
  scanf("%d",taille);
  sleep(0.5);
}

void reception_tableau(tableau* tableau,int taille)
{
  //alouer l' espace memoire correspondant
  tableau->tab1=malloc(taille*sizeof(int));
  tableau->tab2=malloc(taille*sizeof(int));
  input_box("recuperation de composant du vecteur n°1 ...\n",speed);
  for (int i=0;i<taille;i++)
  {
    printf("\tn°%d: ",i+1);
    scanf("%d",&tableau->tab1[i]);
  }
  printf("\n");
  sleep(0.25);
  input_box("données collecter avec succès\n",speed);
  sleep(0.5);
  
  input_box("recuperation de composant du vecteur n°1 ...\n",speed);
  for (int j=0;j<taille;j++)
  {
    printf("\tn°%d: ",j+1);
    scanf("%d",&tableau->tab2[j]);
  }
  printf("\n");
  sleep(0.25);
  input_box("données collecter avec succès\n",speed);
  int s;
  //faire la somme maintenat 
  for (int k=0;k<taille;k++)
  {
    s=(tableau->tab1[k]*tableau->tab2[k]);
    tableau->sum+=s;
  }
  sleep(0.5);
}

void verification_nature(tableau* tableau)
{
  if (tableau->sum == 0)
  {
    input_box(" les deux vecteurs sont perpendiculaire\n ",speed);
  }
  else if (tableau->sum >0)
  {
    input_box("les deux vecteurs fait un angle aîgu\n ",speed);
  }
  else input_box("les deux vecteurs fait un angle obtus\n",speed);
}

void input_box(const char *mesg,int vitesse_ms)
{
  int i=0;
  while (mesg[i]!='\0')
  {
    printf("%c",mesg[i]);
    fflush(stdout);
    i++;
    usleep(speed *1000);
  }
}
int main(void)
{
  tableau tableau;
  int taille;
  reception_de_taille(&taille);
  reception_tableau(&tableau,taille);
  verification_nature(&tableau);
  free(tableau.tab1);
  free(tableau.tab2);
  return 0;
}
