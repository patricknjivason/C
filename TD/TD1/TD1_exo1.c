/*=====ALGOTRITHME====
STRUCTURE TABLEAU
  pointeur vers tab1;
  pointeur vers tab2;
FIN STRUCTURE

PROCEDURE allocation(tableau: POINTEUR VERS TABLEAU,val1: ENTIER,val2: ENTIER)
  DEBUT
    //declarer un tableau pour l' allocation
    POINTEUR VERS ptr1=ALLOATION(val1*TAILLE(INT));
    POINTEUR VERS ptr2=ALLOCATION(val1*TAILLE(INT));
    TABLEAU ->tab1<-- ptr1;
    TABLEAU ->tab2<-- ptr2;
  FIN PROCEDURE
    
PROCEDURE reception_de_taille(taill1:POINTEUR VERS ENTIER,taille2:POINTEUR VERS ENTIER)
  DEBUT:
    AFFICHER ("entrer le nombre des valeurs a entrer la 1 1 ère");
    LIRE("%d",taille1);
    AFFICHER("entrer le nombre des valeurs a entrer pour les 2 ème);
    LIRE("%d",taille2);
  FIN PROCEDURE
  
PROCEDURE reception_tableau(tableau: POINTEUR VERS TABLEAU,taille1:ENTIER,taille2:ENTIER);
  VARIABLE:
    i:ENTIER;
    j:ENTIER;
  DEBUT:
  POUR i ALLANT DE 0 A taille1-1
    AFFICHER(" entrer la valeur n°%d du tableau n°1",i+1);
    LIRE("%d",tableau->tab1[i]);
   FIN POUR
   
   POUR j ALLANT DE 0 A taille2-1
    AFFICHER ("entrer la valeur n°%d du tableau n°2",j+1);
    LIRE("%d",tableau ->tab2[j]);
    FIN POUR
  FIN PROCEDURE

PROCEDURE affichage(tableau:POINTEUR VERS TABLEAU,taille2:ENTIER,taille1)
  VARIABLE:
    i:ENTIER
    j:ENTIER
  
  DEBUT:
    //reallouer le tableau n°1
    (ptr1:POINTEUR VERS INT)<-- REALLOCATION(tableau->tab1,taille2*TAILLE(INT));
    tableau->tab1<-- ptr1;
    //redirger les valeurs de la 2 ème tableau
    POUR i ALLANT DE 0 A taille2
      tableau->tab1[taille1 +i]<--tableau->tab2[i];
    FIN POUR
    
    AFFICHER(" les valeurs sont :);
    POUR j ALLANT DE 0 A taill1 +taille2 
      AFFICHER ("%d",tableau->tab1[j]);
    FIN POUR
    
  FIN PROCEDURE
  
VARIABLE:
  STRUCTURE TABLEAU tableau;
  taille1: ENTIER;
  taille2: ENTIER;
  
DEBUT
  //appelle au fonction defini
  reception_de_taille(&taille1,&taille2);
  allocation(&tableau,taille1,taille2);
  reception_tableau(&tableau,taille1,taille2);
  affichage(&tableau,taille1,taille2);
FIN
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct tableau
{
  int* tab1;
  int* tab2;
}tableau;

//definition des fonction
void reception_de_taille(int* taille1, int* taille2);
void allocation(tableau* tableau,int val1,int val2);
void reception_tableau(tableau * tableau, int taille1, int taille2);
void affichage(tableau* tableau,int taille1, int taille2);

void reception_de_taille(int* taille1, int* taille2)
{
  printf("entrer la limite du valeurs de tableau n°1: ");
  scanf("%d",taille1);
  printf("entrer la limite du valeurs de tableau n°2: ");
  scanf("%d",taille2);
}

void allocation(tableau* tableau ,int val1, int val2)
{
  int* ptr1=malloc(val1*sizeof(int));
  int* ptr2=malloc(val2*sizeof(int));
  tableau->tab1=ptr1;
  tableau->tab2=ptr2;
}

void reception_tableau(tableau* tableau,int taille1,int taille2)
{
  for (int i=0;i<taille1;i++)
  {
    printf("entrer n°%d du tableau 1: ",i+1);
    scanf("%d",&tableau->tab1[i]);
  }
  
  for (int j=0;j<taille2;j++)
  {
    printf("entrer n°%d du tableau 2: ",j+1);
    scanf("%d",&tableau->tab2[j]);
  }
}

void affichage(tableau* tableau,int taille1,int taille2)
{
  //reallouer tab1
  int *ptr1=realloc(tableau->tab1,(taille1+taille2)*sizeof(int));
  tableau->tab1=ptr1;
  
  //insertion de tab2
  for (int i=0;i<taille2;i++)
  {
    tableau->tab1[taille1 +i]=tableau->tab2[i];
  }

//affichage finale 
  printf(" les valeurs sont: ");
  for (int j=0;j<taille1 + taille2;j++)
  {
    printf("%d, ",tableau->tab1[j]);
  }
  printf("\n");
}

int main(void)
{
  tableau tableau;
  int taille1,taille2;
  reception_de_taille(&taille1,&taille2);
  allocation(&tableau,taille1,taille2);
  reception_tableau(&tableau,taille1,taille2);
  affichage(&tableau,taille1,taille2);
  return 0;
}
