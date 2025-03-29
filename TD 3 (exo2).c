/*
algorithme insertion d un element X Dans un tableau trie
variable c=500;
        n,e : entier;
        T : tableau_entier [c];
debut
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
    afficher("\n");
    afficher("entrer un valeur de plus");
    lire(T[n]);
    afficher("\n le nouveau tableau trie est : ");
    pour(e<-0;e<n+1;e++)
        si((T[e]%2)=0) alors
            afficher("",T[e]);
        finsi
    finpour
    pour(e<-0;e<n+1;e++)
        si((T[e]%2)<>0) alors
            afficher("",T[e]);
        finsi
    finpour
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
    for(e=0;e<n;e++)
    {
        if (T[e]%2==0)
        {
            printf("%d",T[e]);
        }
    }
    for(e=0;e<n;e++)
    {
        if (T[e]%2!=0)
        {
            printf("%d",T[e]);
        }
    }
    printf("\n");
    printf("entrer un valeur de plus \n ");
    scanf("%d",&T[n]);
    printf("le nouveau triage devient \n");
    for(e=0;e<n+1;e++)
    {
        if (T[e]%2==0)
        {
            printf("%d",T[e]);
        }
    }
    for(e=0;e<n+1;e++)
    {
        if (T[e]%2!=0)
        {
            printf("%d",T[e]);
        }
    }
    return (0);
}
    