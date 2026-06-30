//entrer le tableau 
//trouver la somme des nombres 
//trouver la max
//touver sa position
//supprimer un element du tableau
//afficher le resultat
//afficher les tableaus positif et negatif separement
//afficher le tableau inverse

/*ALGORITHME

STRUCTURE TABLEAUX
  tableau_principale: POINTEUR ENTIER;
  tableau_positif:POINTEUR ENTIER;
  tableau_negatif:POINTEUR ENTIER;
FIN STRUCTURE

PROCEDURE reception_limite(taille: POINTEUR VERS ENTIER)
  DEBUT:
    AFFICHER ("entrer le nombre des valeurs du tableau");
    LIRE("%d",taille);
    FIN PROCEDURE
    
PROCEDURE reception_du_tableau(tableau: POINTEUR VERS TABLEAUX, taille:ENTIER,S:POINTEUR VERS ENTIER)
  VARIABLE:
    i:ENTIER;
    ptr_principale:POINTEUR VERS ENTIER;
  DEBUT
  ptr<--malloc(taille*TAILLE(INT));
  tableau->tableau_principale<--ptr;*
  
     POUR i ALLANT DE 0 A taille-1
    AFFICHER(" entrer la valeur n°%d ",i+1);
    LIRE("%d",tableau->tableau_principale[i]);
    *S<--*S+tableau_principale[i];
    FIN POUR
    AFFICHER(" la somme totale est de :%d",*S);
  FIN PROCEDURE    

PROCEDURE recherche_max(tableau: POINTEUR VERS TABLEAU,taille:ENTIER,position:POINTEUR VERS ENTIER)

VARIABLE
  i:ENTIER;
  j=0:ENTIER;
  max=0:ENTIER;
  k:ENTIER;
  l:ENRIER;
  ptr_position[taille]: TABLEAU ENTIER;
DEBUT
  POUR i ALLANT DE 0 A taille
    SI tableau->tableau_principale[i]>=max
      max<--tableau->tableau_principale[i];
      ptr_position[j]<--i;
      j++;
    FINSI
   FINPOUR
  ptr_alloc:POINTEUR VERS ENTIER
  ptr_alloc<--realloc(position,j*TAILLE(ENTIER));
  position<--ptr_alloc;
  POUR k ALLANT DE 0 A j
    position[k]<--ptr_position[k];
  FINPOUR
  
   AFFICHER(" les valeurs max sont : ");
  POUR l ALLANT DE 0 A j
  printf("%d ",position[l]);
  FIN POUR
  FIN PROCEDURE
  
PROCEDURE suppression_element(tableau: POINTEUR VERS TABLEUX,taille:POINTEUR VERS ENTIER)

VARIABLE
  elsup:ENTIER;
  i:ENTIER;
  J:ENTIER;
  elsup_pos=0:ENTIER;
  DEBUT:
    AFFICHER("entrer le nombre a supprimer");
    LIRE("%d",&elsub);
    
    POUR i ALLANT DE 0 A *taille
      SI tableau->tableau_principale[i]==elsub ALORS
      elsups_pos=i;
        POUR j ALLANT DE i A *taille
          tableau_principale[i]<--tableau_principale[i+1];
        FINPOUR
        *taille<--*taille-1;
      SINON i++;
    FINPOUR
    
    AFFICHER(" le resultat apres la suppression de %d a la position %d sont: ",elsup,elsup_pos);
    POUR j ALLANT DE 0 A *taille
      AFFICHER("%d, ",tableau_principale[j]);
    FINPOUR
    
  FIN PROCEDURE



 PROCEDURE affiche_neg_et_pos(tableau POINTEUR VERS  TABLEAUx,taille:ENTIER)
 VARIABLE
  i:ENTIER;
  j:ENTIER;
  k:ENTIER;
  l:ENTIER;
  m:ENTIER;
  ptr_pos:POINTERU VERS ENTIER;
  ptr_neg:POINTEUR VERS ENTIER;
  tab_pos[taille]:TABLEAUX ENTIER;
  tab_neg:[taille]TABLEAUX ENTIER;
  
  DEBUT
    POUR i ALLANT DE 0 A taille
      SI tableau->tableau_principale[i] >O ALORS
        tab_pos[k]<--tableau->principale[i];
        k++;
      FINSI
      SINON SI tableau->tableau_principale[i]<0 ALORS
        tab_neg[l]<--tableau->principale[i];
        l++;
      FINSI;
    FINPOUR

      //aloouer l' esapce pour les tableus pos et neg 
      ptr_pos<--malloc(k*TAILLE(ENTIER));
      ptr_neg<--malloc(l*TAILLE(ENTIER));
      tableau->tableau_positif<--ptr_pos;
      tableau->tableau_negatif<--ptr_neg;
      
      POUR j ALLANT DE 0 A k
        tableau->tableau_positif[j]<--tab_pos[j];
      FIN POUR
      
      POUR m ALLANT DE 0 A l
        tableau->tableau_negatif[m]<--tab_neg[m];
      FIN POUR
        AFFICHER(" les nombres positfi sont :");
      POUR i ALLANT DE 0 A k
          AFFICHER("%d",tableau->tableau_positif[i]);
      FIN POUR
    
       AFFICHER(" les nombres negatif sont :");
      POUR i ALLANT DE 0 A k
          AFFICHER("%d",tableau->tableau_negatif[i]);
      FIN POUR
    FIN PROCEDURE
    
PROCEDURE affiche_inverse(tableau: POINTEUR VERS TABLEAUX,taille: ENTIER)
VARIABLE
  i:ENTEIR;
  DEBUT
    AFFICHER("l' affichage inverse est ");*
    POUR i ALLANT DE taille -1 -i A 0
      AFFICHER("%d, ",tableau->tableau_principale[i]);
    FIN_POUR
  FIN_PROCEDURE


VARIABLE
taille:ENTIER;
TABLEAUX tableau;
S=0:ENTIER;
position[]==VIDE;
DEBUT 
  reception_limite(&taille);
  reception_du_tableau(&tableau,taille,&S);
  recherche_max(&tableau,taille,position);
  suppression_element(&tableau,&taille);
  affiche_neg_et_pos(&tableau,taille);
  affiche_inverse(&tableau,taille);
FIN
*/

#include<stdio.h>
#include<stdlib.h>                              

typedef struct tableau
{
  int *tableau_principale;
  int *tableau_positif;
  int *tableau_negatif;
  int *position;
}tableau;

//declaration des fonctions
void reception_limite(int *taille);
void reception_tableau(tableau* tableau,int taille,int* S);
void recherche_max(tableau* tableau,int taille);
void suppression_element(tableau* tableau,int *taille);
void affiche_neg_et_pos(tableau* tableau,int taille);
void affiche_inverse(tableau* tableau,int taille);

//commencement des fonctions
void reception_limite(int *taille)
{
  printf("entrer le nombre des valeurs du tableau: ");
  scanf("%d",taille);
}

void reception_tableau(tableau* tableau,int taille, int* S)
{
  int *ptr=malloc(taille*sizeof(int));
  tableau->tableau_principale=ptr;
  for (int i=0;i<taille;i++)
  {
    printf("entre n°%d: ",i+1);
    scanf("%d",&tableau->tableau_principale[i]);
    *S=*S+tableau->tableau_principale[i];
  }
  printf("la somme des nombres est : %d ",*S);
  printf("\n");
}

void recherche_max(tableau* tableau,int taille)
{
int ptr_position[taille],max=0,z=0;
  for (int i=0;i<taille;i++)
  {
    if (tableau->tableau_principale[i]>=max)
    {
      max=tableau->tableau_principale[i];
    }
  }
  
  //reboucler pour revoir les plus grand
  for (int i=0;i<taille;i++)
  {
    if (tableau->tableau_principale[i]==max)
    {
      ptr_position[z]=i;
      z++;
    }
  }
  int *ptr_pos=malloc(z*sizeof(int));
  tableau->position=ptr_pos;
  
  for (int j=0;j<z;j++)
  {
    tableau->position[j]=ptr_position[j];
  }
  printf(" la valeur max est: %d\n",max);
  printf(" les position des plus grand valeurs sont est :  ");
  for (int j=0;j<z;j++)
  {
    printf("%d ",tableau->position[j]+1);
    
  }
  printf("\n");
}

void suppression_element(tableau *tableau, int *taille)
{
  int number,pos_number;int trouver=0;;
  printf("entrer le nombre a supprimer: ");
  scanf("%d",&number);
  //gerer manuellement le cas ou le nombre a supprimer est a la fin 
   if (tableau->tableau_principale[*taille-1]==number) *taille=*taille-1;trouver=1;pos_number=*taille;
   
  for (int i=0;i<*taille-1;i++)
  {
    if (tableau->tableau_principale[i]==number)
    {
      pos_number=i;
      trouver=1;
      for (int j=i;j<*taille;j++)
      {
        tableau->tableau_principale[j]=tableau->tableau_principale[j+1];
      }
      *taille=*taille-1;
      i--;
    }
  }
if (trouver != 1) 
    {
      printf("le nombre n' existe pas verifier votre nombre");
    }

else
{
  printf("le resulat après la suppression de %d a la position %d est :\n",number,pos_number+1);
  
  for (int k=0;k<*taille;k++)
  {
    printf("%d ",tableau->tableau_principale[k]);
  }
  printf("\n");
  }
}
void affiche_neg_et_pos(tableau* tableau,int taille)
{
  int tab_pos[taille];
  int tab_neg[taille],k=0,l=0;
  for (int i=0;i<taille;i++)
  {
    if (tableau->tableau_principale>0)
    {
      tab_pos[k]=tableau->tableau_principale[i];
      k++;
    }
    else if (tableau->tableau_principale[i]<0)
    {
      tab_neg[l]=tableau->tableau_principale[i];
      l++;
    }
  }
  //allouer une memoire pour les deux 
  int *ptr_pos=malloc(k*sizeof(int));
  int *ptr_neg=malloc(l*sizeof(int));
  tableau->tableau_positif=ptr_pos;
  tableau->tableau_negatif=ptr_neg;
  
  //transfert de données 
  for (int j=0;j<k;j++)
  {
    tableau->tableau_positif[j]=tab_pos[j];
  }
  
  for (int j=0;j<l;j++)
  {
    tableau->tableau_negatif[j]=tab_neg[j];
  }
  
  //affichage 
  printf(" le tableau positif est : ");
  for (int h=0;h<k;h++)
  {
    printf("%d, ",tableau->tableau_positif[h]);
  }
  printf("\n");
   printf(" le tableau negatif est : ");
  for (int h=0;h<k;h++)
  {
    printf("%d, ",tableau->tableau_negatif[h]);
  }
  printf("\n");
}

void affiche_inverse(tableau* tableau,int taille)
{
  printf("les serie de nombres inverser : ");
  for (int j=taille-1;j>=0;j--)
  {
    printf("%d, ",tableau->tableau_principale[j]);
  }
  printf("\n");
}

//le tout 
int main(void)
{
  tableau tableau;
  int taille;
  int S=0;
  reception_limite(&taille);
  reception_tableau(&tableau,taille,&S);
  recherche_max(&tableau,taille);
  suppression_element(&tableau,&taille);
  affiche_neg_et_pos(&tableau,taille);
  affiche_inverse(&tableau,taille);
  
  //liberer les memoire
  return 0;
}
