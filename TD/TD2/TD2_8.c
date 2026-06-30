#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define speed 70
typedef struct donnes
{
  int *tableau;
  int *max;
  int *position_max;
  int *min;
  int *position_min;
  int taille;
  int taille_max;
  int taille_min;
}donne;

void reception_de_taille(donne* donne);
void reception_tableau(donne* donne);
void recherche_max_min(donne* donne);
void affichage(donne* donne);
void output(const char *mesg,int vitesse_ms);
void output(const char *mesg,int vitesse_ms)
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

void reception_de_taille(donne* donne)
{
  output("entrer la taille du tableau: ",speed);
  scanf("%d",&donne->taille);
}

void reception_tableau(donne* donne)
{
  donne->tableau=malloc(donne->taille*sizeof(int));
  output("collecte de donnée ....\n",speed);
  for (int i=0;i<donne->taille;i++)
  {
    printf("\tn°%d: ",i+1);
    scanf("%d",&donne->tableau[i]);
  }
}

void recherche_max_min(donne* donne)
{
int max=donne->tableau[0],min=donne->tableau[0],k=0,l=0;
int ptr_max[donne->taille];
int ptr_posmax[donne->taille];
int ptr_min[donne->taille];
int ptr_posmin[donne->taille];
  for (int i=0;i<donne->taille;i++)
  {
    if(donne->tableau[i] >= max)
    {
      max=donne->tableau[i];
    }
    
    if (donne->tableau[i] <=min)
    {
      min=donne->tableau[i];
    }
  }
  //reboucler pour une meilleur précision
  for (int j=0;j<donne->taille;j++)
  {
    if (donne->tableau[j]==max)
    {
      ptr_max[k]=donne->tableau[j];
      ptr_posmax[k]=j;
      k++;
    }
    donne->taille_max=k;
    if (donne->tableau[j]==min)
    {
      ptr_min[l]=donne->tableau[j];
      ptr_posmin[l]=j;
      l++;
    }
    donne->taille_min=l;
  }
  //allouer l' espace pour ne pas avoir un overflow
  donne->max=malloc(donne->taille_max*sizeof(int));
  donne->min=malloc(donne->taille_min*sizeof(int));
  donne->position_max=malloc(donne->taille_max*sizeof(int));
  donne->position_min=malloc(donne->taille_min*sizeof(int));
   if (!donne->max || !donne->min || !donne->position_max || !donne->position_min )
  {
    fprintf(stderr," erreur d'allocation dynamique ");
    exit (0);
  }
  
  for (int h=0;h<donne->taille_max;h++)
  {
    donne->max[h]=ptr_max[h];
    donne->position_max[h]=ptr_posmax[h];
  }
  
  for (int g=0;g<donne->taille_min;g++)
  {
    donne->min[g]=ptr_min[g];
    donne->position_min[g]=ptr_posmin[g];
  }
  
}

void affichage(donne* donne)
{
if (donne->max[0]==donne->min[0])
{
  output("tout les nombres sont égaux : nombre=",speed);
  printf("%d",donne->max[0]);
  printf("\n");
  exit (1);
}
  output("la valeurs max est : ",speed);
 printf("%d",donne->max[0]);
  
  printf("\n");
  output("les position sont : ",speed);
  for (int i=0;i<donne->taille_max;i++)
  {
    printf("%d, ",donne->position_max[i]+1);
    usleep(120*1000);
  }
  printf("\n");
  
  output("la valeur min est: ",speed);
  printf("%d",donne->min[0]);
  
  printf("\n");
  
  output(" les position sont : ",speed);
  for (int j=0;j<donne->taille_min;j++)
  {
    printf("%d, ",donne->position_min[j]+1);
    usleep(120*1000);
  }
  printf("\n");
}

int main(void)
{
  donne donne;
  reception_de_taille(&donne);
  reception_tableau(&donne);
  recherche_max_min(&donne);
  affichage(&donne);
  free(donne.max);
  free(donne.min);
  free(donne.position_max);
  free(donne.position_min);
  return 0;
}
