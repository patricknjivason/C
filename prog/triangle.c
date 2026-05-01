#include<stdio.h>
#include<stdlib.h>
void isocele()
{
    int choix_isocele;
    printf("dans ce programme traiter des etoiles et de les rendre proportionnelle \n est en cours de progrssion sur utilisé le modèle equilaterale ou autres \ntapez 1 si souhaitez dessiner le shema 0 si non");
    scanf("%d",&choix_isocele);
    if (choix_isocele ==1)
    {
        printf(" choisir 3 pour le choix ");
    }
    else 
    {
        exit (0);
    }
}
void equilaterale()
{
    int i,j,l_cote;
    printf("entrer la longueur d' un cote  \n");
    scanf("%d",&l_cote);
    for (i=0;i<l_cote;i++)
    {
         if (i== l_cote-1)
        {
            printf("  ");
        }
        for (j=0;j<2*l_cote-1;j++)
        {
            if (i== l_cote -1 || j== l_cote -i || j== l_cote +i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
    printf("\n");
    }

}
void triangle_rectangle()
{
    int mod,i,j,longueur;
    printf(" NB: dans ce programme on utilise des etoile mais pas des \n longueur preis donc pour une bonne vision tapez 1 \n allez a la shema sinon quitter sur 0 ");
    scanf("%d",&mod);
    if (mod ==1)
    {
        printf("entrer 4 pour le choix ");
    }
    else 
    {
        exit (0);
    }
}
void triangle_rectangle_isocele()
{
    int longueur,i,j;
    printf("entrer la longueur d' un coté");
    scanf("%d",&longueur);
    for (i=0;i<longueur;i++)
    {   
        for (j=0;j<longueur;j++)
        {
            if (j==0 || i==j || i== longueur -1)
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
    printf("\n");
    }
}
void choix()
{
    int choice,i,j,choix_isocele,longueur,mod,l_cote;
    printf(" enter quel type de triangle voulez vous \n1-rectangle\n2-isocele\n3-equilaterale\n4-rectangle isocele \n");
    scanf("%d",&choice);
    if (choice ==1)
    {
        triangle_rectangle();
    }
    else if (choice ==2)
    {
        isocele();
    }
    else if (choice ==3)
    {
        equilaterale();
    }
    else if(choice ==4)
    {
        triangle_rectangle_isocele();
    }
    else 
    {
        printf("ERREUR: reéssayer avec un bon choix \n");
    }
}
int main(void)
{
    int choice,i,j,choix_isocele,longueur,mod,l_cote;
    choix();
    return 0;
}
