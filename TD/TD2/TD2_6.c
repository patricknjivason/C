#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define speed 50
typedef struct tableau
{
  int *tab1;
  int *tab2;
}tableau;

void reception_de_taille(int *taille1,int* taille2);
void reception_tableau(tableau* tableau,int taille1, int taille2);
void machine_ecrire(const char *texte,int vitesse);
void vidage();
void vidage()
{
  char c;
  while ((c=getchar())!='\n' && c!=EOF);
}
//fonction pour la saisie 
void reception_de_taille(int *taille1, int *taille2)
{
  machine_ecrire("entrer la taille du tableau n°1: ",speed);
  vidage();
  scanf("%d",taille1);
  machine_ecrire("entrer la taille du tableau n°2: ",speed);
  vidage();
  scanf("%d",taille2);
  sleep(1);
}

void reception_tableau(tableau* tableau,int taille1, int taille2)
{
//allouer la memoire exacte
  tableau->tab1=malloc(taille1*sizeof(int));
  tableau->tab2=malloc(taille2*sizeof(int));
  if (tableau->tab1==NULL || tableau->tab2==NULL)
  {
    fprintf(stderr," l' allocation a echouer ");
    exit(0);
  }
  //reception de contenu
  machine_ecrire("saisie de contenu du tableau n°1 ....\n",100);
  vidage();
  sleep(1);
  machine_ecrire("entrer: \n",speed);
  for (int i=0;i<taille1;i++)
  {
    printf("\tn°%d: ",i+1);
    scanf("%d",&tableau->tab1[i]);
  }
  machine_ecrire("données reçu avec succès \n",speed);
  vidage();
  sleep(2);
  machine_ecrire("saisie de contenu du tableau n°2 ....\n",speed);
  vidage();
  sleep(1);
  for (int j=0;j<taille2;j++)
  {
    printf("\tn°%d: ",j+1);
    scanf("%d",&tableau->tab2[j]);
  }
  sleep(0.5);
  machine_ecrire("donnée recuperer avec succès \n",speed);
  vidage();
  sleep(0.5);
  //transfert de donner de tba1 vers tab2
  int* ptr_1=realloc(tableau->tab1,(taille1+taille2)*sizeof(int));
  tableau->tab1=ptr_1;
  machine_ecrire("transfert de donées..\n",speed);
  vidage();
  for (int k=0;k<taille2;k++)
  {
    tableau->tab1[taille1+k]=tableau->tab2[k];
    sleep(2);
  }
  machine_ecrire(" les nombres sont: ",speed);
  vidage();
  for (int k=0;k<(taille1+taille2);k++)
  {
    printf("%d, ",tableau->tab1[k]);
    fflush(stdout);
    usleep(speed *10000);
  }
  printf("\n");
}

void machine_ecrire(const char *texte,int vitesse)
{
  int i=0;
  while (texte[i]!='\0')
  {
    printf("%c",texte[i]);
    fflush(stdout);
    usleep(vitesse* 1000);
    i++;
  }
}
int main(void)
{
  tableau tableau;
  int taille1,taille2;
  reception_de_taille(&taille1,&taille2);
  reception_tableau(&tableau,taille1,taille2);
  free(tableau.tab1);
  free(tableau.tab2);
  return 0;
}
