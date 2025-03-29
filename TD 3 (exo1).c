/*
algorithme affichage de nombre pairs avant Les nombres impairs
variable n,e : entier;
        c=500;
        T : tableau_entier [c];
debut
    afficher("entrer la taille du tableau");
    lire(n);
    pour(e<-0;e>n;e++)
        afficher("entrer la valeur de T[",e,"]");
        lire(T[e]);
    finpour
    afficher("\n le tableau trie est : ");
    pour(e<-0;e<n;e++)
        si((T[e]%2)=0) alors
            afficher("",T[e]);
        finsi
    finpour
    pour(e<-0;e<n;e++)
        si((T[e]%2)<>0) alors
            afficher("",T[e]);
        finsi
    finpour
fin                    
            
*/
#include <stdio.h>
#define c 500
int main ()
{
    int T[c],n,e;
    printf("entrer le taille du tableau ");
    scanf("%d",&n);
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de T[%d] : ",e);
        scanf("%d",&T[e]);
    }
    printf("\n le tableau trie est : ");
    for(e=0;e<n;e++)
    {
        if (T[e]%2==0)
        {
            printf("%d \n",T[e]);
        }
    }
    for(e=0;e<n;e++)
    {
        if (T[e]%2!=0)
        {
            printf("%d \n",T[e]);
        }
    }
    return (0);
    
}
    