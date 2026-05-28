#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "incript.h" // Assurez-vous que ce fichier contient bien les prototypes et structures

// --- Prototypes des fonctions (pour éviter les warnings de compilation) ---


int main(void)
{
    char filename[20];char niveau[12];int choix_menu;
    // Ajout de la variable etudiant pour pouvoir la passer à la fonction reception
    struct donne_incription etudiant; 
    union niveau level;
    menu_generale(filename,niveau,choix_menu);
    return (0);
}
int  menu_generale(char* filename, char *niveau,int choix_menu)
{
    for (;;)
    {
        printf(" choisir dans le menu :\n");
        printf(" 1-) inscription \n 2-) triage \n 3-)moteur de recheche \n 4-)modification des données existant\n 5-)quitter\n");
        enum readline_status_t statut=read_int_t(&choix_menu,1,5);
        if(statut == READ_INT_OK)
        {
            switch(choix_menu)
            {
                case 1:
                    printf(" bienvenue sur le lateforme d' inscription \n");
                    inscription_option(filename,niveau);
                    return 0;
                    break;
                    
                case 2:
                    printf(" bienvenu sur le plateforme de triage \n");
                    printf("assurez vous d' avoir fait l' inscription dans l' option 1\n" );
                    triage_option();
                    return 0;
                    break;
                    
                case 3:
                    printf(" bienvenue sur notre moteur de recherche \n");
                    printf(" en attente de fabrication du programme\n");
                    return 0;
                    break;
                    
                case 4:
                    printf("binvenue sur le plateforme de modification \n");
                    printf(" en attente de fabrication du programme\n");
                    return 0;
                    break;
                    
                case 5:
                     printf("merci pour votre visite \n");
                    return 1;
                    break;
                default:
                    break;
        }
        }
        else if (statut == READ_INT_DEBORDE)
        {
            printf("choix en dehors dans le menu ,réessayer\n");
            char c; while((c=getchar())!='\n'&& c!=EOF);
        }
        else 
        {
            printf("Erreur de choix ,taper les nombre correspondant votre choix\n");
            char c; while((c=getchar())!='\n'&& c!=EOF);
        }  
    } 
}
 void inscription_option(char*filename,char *niveau)
{
    int number;
    struct donne_incription etudiant; 
    union niveau level;
    printf(" Réception des données pour les inscriptions pour l' anneé universitaire 2025-2026 ");
    // CORRECTION : Appel avec les bons arguments (2 arguments selon votre logique)
    //ici on demande de choisir le nivau a s' inscrire
    declaration_fichier_ecrire(filename,&level);
    // ici on demande le nombre d' eleve a s' incrire 
    printf("\n ________ Début de l'inscription _______\n");
    number_student(&number);
    FILE* IB = fopen(filename, "w+");
    if (!IB)
    {
        perror(" Erreur au niveau du fichier");
        exit(1);
    }
    //en elnelve le fameux .txt
    enleve_txt(niveau,filename);
    fprintf(IB, "_____________________________Inscription pour les %s_____________________  \n", niveau);
    for (int i=0; i<number;i++)
    {
    printf("etudiant n°%d\n",i+1);
    fprintf(IB,"\netudiant  n°%d:\n",i+1);
    reception(filename, IB, &etudiant);
    }
    fprintf(IB, "Fin de liste");
    printf("Données ajoutées avec succès dans %s\n",filename);
    fclose(IB);
}
void triage_option()
{
    int choix_mode;
    for (;;)
    {
        char filename[15];
        union niveau level;
        struct donne_incription etudiant ;
        printf("choisir le mode de triage\n" );
        printf("1-) par nom \n 2-)date de naissance \n3-)numero d'inscription\n 4-)retour");
        enum readline_status_t statut =read_int_t(&choix_mode,1,4);
        if (statut == READ_INT_OK)
        {   
            if (choix_mode == 4)
            {
                return;
            }
            switch (choix_mode)
            {
            case 1:
                declaration_fichier_ecrire(filename,&level);//renvoie le ficier du fichier a ouvrir 
                open_file(filename,etudiant,number);
                break;
                //ici on recupère juste les infos dans le fichier concerné apres on creer trois fonction qui fait les differentes trie 
            case 2:
                declaration_fichier_ecrire(filename,&level);
                open_file(filename,etudiant,number);
                break;
            case 3:
                declaration_fichier_ecrire(filename,&level);
                open_file(filename,etudiant,number);
                break;
            default:
                break;
            }
        }
        else if (statut == READ_INT_DEBORDE)
        {
           printf("votre choix n' est pas dans le menu: reéssayer \n" );
           char c;while ((c=getchar())!='\n'&& c!=EOF);
        }
        else
        {
            printf("ERREUR : choix invalid réssayer \n");
            char c;while((c=getchar())!='\n' && c!= EOF);
        }
    }
}
void open_file(char *filename,struct donne_incription etudiant,int number)
{
    FILE *file_read=fopen(filename,"r");
    if(!file_read)
    {
        fprintf(stderr,"ERREUR: fichier vide ou n' existe pas \n");
        exit (1);
    }
    trie_nom(file_read,etudiant,number);
    fclose(file_read);
}
void trie_nom(FILE *filename,struct donne_incription etudiant[100],int number)
{
    int nombre;
    for (int i=0;i<number;i++)
    {
        fscanf(filename," etudiant  n°%d :\n NOM et PRENOM:%s \nAGE:%d \nDATE DE NAISSANCE:%s\n ADRESSE:%s\n NUMERO D'INSCRIPTION:%s ",nombre,etudiant[i].NOM_PRENOM,etudiant[i].age,etudiant[i]->date_naissance,etudiant[i].adresse,etudiant[i].numero_incription);
    }
}
// CORRECTION : Suppression du 'const' sur les char* qui doivent être modifiés
void reception( const char* niveau, FILE* IB, struct donne_incription * etudiant)
{   
    int jour,mois,annee;
    // OPTIMISATION : On passe la taille réelle du tableau de la structure
    printf("Entrer NOM et PRENOM : ");
    read_data_t(etudiant->NOM_PRENOM, sizeof(etudiant->NOM_PRENOM), "NOM et PRENOM");
    
    for (;;)
    {
        printf("Entrer l'âge : ");
         enum readline_status_t statut = read_int_t(&(etudiant->age),12,30);
        if(statut== READ_INT_OK)
        {
            break;
        }
        else if (statut== READ_INT_DEBORDE)
        {
            printf("verifier bien que l' age correspondant min: 12, max: 30\n");
            char c; while((c=getchar())!='\n' && c!=EOF);
        }
        else
        {
            printf("Veuillez entrer un nombre valide \n ");
            // Nettoyage du tampon de saisie en cas d'échec de scanf
            char c; while ((c=getchar()) != '\n' && c != EOF); 
        }
    }
    printf(" date de naissance:\n");
    date_birth(&annee,1996,2014,"annee");
    date_birth(&mois,1,12,"mois");
    date_birth(&jour,1,31,"jour");
    char vrai_date[12];
    snprintf(vrai_date,"%d/%d/%d",annee,mois,jour);
    copie_coller(etudiant->date_naissance,vrai_date);
    printf("Entrer votre adresse : ");
    read_data_t(etudiant->adresse, sizeof(etudiant->adresse), "adresse");
    
    printf("Entrer votre numéro d'inscription : ");
    read_data_t(etudiant->numero_incription, sizeof(etudiant->numero_incription), "Numéro d'inscription");
    
    // --- Écriture dans le fichier ---
     // CORRECTION : Syntaxe fprintf corrigée
    fprintf(IB, "NOM et PRENOM: %s\n", etudiant->NOM_PRENOM);
    fprintf(IB, "AGE: %d\n", etudiant->age);
    fprintf(IB,"DATE DE NAISSANCE:%s\n",etudiant->date_naissance);
    fprintf(IB, "ADRESSE: %s\n", etudiant->adresse);
    fprintf(IB, "NUMERO D' INSCRIPTION : %s\n", etudiant->numero_incription);
     // CORRECTION : Syntaxe du \n corrigée
}
void date_birth(int *time,int min, int max,const char *time_name)
{
    int jour,moi,annee;
    for (;;)
    {   printf("%s:",time_name);
        enum readline_status_t status= read_int_t(time,min,max);
        if (status== READ_INT_OK)
        {
            break;
        }
        else if (status == READ_INT_DEBORDE)
        {
            printf("ERREUR: annee entrer en dehors de %d et %d",min,max);
            char c;while ((c=getchar())!='\n' && c!=EOF);
        }
        else
        {
            printf("ERREUR entrer un nombre :");
            char c;while ((c=getchar())!='\n' && c!=EOF);
        }
    }
}
void declaration_fichier_ecrire( char*filename,union niveau *level)
{
    enum readline_status_t statut =level_student(level);
     if(statut== L1)
    {
        copie_coller(filename,level->l1) ;
    }
    else if (statut== L2)
    {
       copie_coller(filename,level->l2);
    }
    else if (statut == L3)
    {
       copie_coller(filename,level->L3);
    }
    else if (statut == M1)
    {
        copie_coller(filename,level->m1);
    }
    else
    {
        copie_coller(filename,level->m2);
    }
}
// Fonction chargée de filtrer le flux saisi
// CORRECTION : Retrait du 'const' sur buffer car fgets le modifie
enum readline_status_t readline(char* buffer, size_t size)
{
    if(!fgets(buffer, (int)size, stdin))
    {
        return READ_FAILURE;
    }
    
    size_t bufferstrength = strlen(buffer);
    if(bufferstrength > 0 && buffer[bufferstrength-1] == '\n')
    {
        buffer[bufferstrength-1] = '\0'; // Supprime le retour à la ligne
    }
    else
    {
        // Si la chaîne est plus longue que le buffer, on vide le reste du flux stdin
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        return READ_DEBORDE;
    }
    return READ_OK;
}

// CORRECTION : Ajout du paramètre 'size' pour éviter le bug du sizeof sur pointeur
// CORRECTION : Retrait de FILE* IB car cette fonction sert juste à lire sur la console (stdin)
void read_data_t(char* enter_value, size_t size, const char* type_saisir)
{
    for (;;)
    {
        // OPTIMISATION : Stockage du résultat pour éviter de lancer 'readline' deux fois
        enum readline_status_t status = readline(enter_value, size);
        
        if (status == READ_FAILURE)
        {
            fprintf(stderr, "❌ Erreur : %s non saisi\n", type_saisir);
            exit(1);
        }
        else if (status == READ_DEBORDE)
        {
            printf("❌ Votre %s dépasse la norme, réessayez : ", type_saisir);
            // La boucle continue pour permettre une nouvelle saisie
        }
        else 
        {
            break; // Saisie OK, on sort de la boucle
        }
    }
}

// CORRECTION : Retrait de FILE* IB qui n'était pas utilisé ici
enum level_student_status_t level_student(union niveau * level)
{
    int choix_niveau;
    for (;;)
    {
        printf("\nchoisissez le niveau : ");
        // Passage de la taille maximale (10) définie dans le main
        printf("\n 1-) L1 \n 2-) L2 \n 3-) L3 \n 4-) M1 \n 5-) M2 \n");
        enum readline_status_t statut=read_int_t(&choix_niveau,1,5);
        if (statut== READ_INT_OK)
        {
            switch (choix_niveau)
            {
            case 1:
                copie_coller(level->l1,"lincence1.txt");
                return L1;
                break;
            case 2:
                copie_coller(level->l2," licence2.txt");
                return L2;
                break;
            case 3:
                copie_coller(level->L3,"licence3.txt");
                return L3;
                break;
            case 4:
                copie_coller(level->m1,"master1.txt");
                return M1;
                break;
            case 5:
                copie_coller(level->m2,"master2.txt");
                return M2;
                break;
            default:
                break;
            }
        }
        else if (statut== READ_INT_DEBORDE)
        {
            printf("ce nombre ne correspond est en dehors du choix ");
            char c; while((c=getchar())!='\n' && c!='\0');
        }
        else
        {
            printf("❌erreur vous devez entrer un chifre pas n' importe quoi");
            char c; while((c=getchar())!='\n' && c!='\0');
        }
    }
}
void number_student(int * number)
{
    for (;;)
    {
        printf("Entrer le nombre d'étudiants : ");
        enum readline_status_t statut = read_int_t(number,2,4000);
        if( statut == READ_INT_OK)
        {
            break;
        }
        else if (statut== READ_INT_DEBORDE)
        {
            perror(" la nombre etudiant depasse les normes (2 a 400) etudiant");
            char c; while ((c = getchar()) != '\n' && c != EOF);
        }
        else
        {
            printf("❌Veuillez entrer un nombre valide.\n");
            char c; while ((c = getchar()) != '\n' && c != EOF); // Nettoyage stdin
        }
    }
}    

// CORRECTION : Syntaxe propre de l'opérateur ternaire ou du if/else
enum readline_status_t read_int_t(int *chiffre,int min,int max)
{
    if (scanf("%d", chiffre) == 1 ) 
    {
        if (*chiffre >= min && *chiffre <= max)
        {
            getchar();
            return READ_INT_OK;
        }
        else 
            return READ_INT_DEBORDE;
    }
    return READ_INT_FAILURE;
}
void copie_coller(char* destination, const char* source)
{
    int i=0;
    while (source[i]!='\0')
    {
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
}
void enleve_txt(char *destination, const char *source)
{
    int i=0;
    while (source[i]!='\0' && source[i]!='.')
    {
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
}
