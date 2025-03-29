/*
algorithme le nombre de bigramme Dans une chaine de caractère
variable T: tableau[1..50] de chaine;
        n,e,f,a : entier;
debut
    faire
        e++;
        si(e>3)
            fin;
        finsi
        afficher("entrer le nombre de caractère \n");
        lire(n);
    tantque((n<1)ou(n>50));
    e<-0;
    faire
        e++;
        si(e>3)
            fin;
        finsi
        afficher("entrer le mot : \n");
        lire(T);
    tantque(strlen(T)<>n);
    a<-0;
    pour(f<-0;f<n-1;f++)
        si((T[f]=T[f])et(T[f+1]=T[f+1]))
            a++;
        finsi
    finpour
    afficher("\n le nombre de bigramme est ",a);     
fin          
*/
#include <stdio.h>
#include <string.h>
int main ()
{
    int n,e,f,a;
    char T[50];
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le nombre de caractère \n");
        scanf("%d",&n);
    }while((n<1)||(n>50));
    e=0;
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le mot : \n");
        scanf("%s",T);
    }while(strlen(T)!=n);
    a=0;
    for (f=0;f<n-1;f++)
    {
        if((T[f]==T[f])&&(T[f+1]==T[f+1]))
        {
            a++;
        }
    }
    printf("\n le nombre de bigramme est %d ",a);
    return (0);
    
}
    