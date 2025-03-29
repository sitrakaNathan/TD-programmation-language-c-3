/*
algorithme suppression d un element X dans un tableau
variable c=500;
        n,e,f,a,b;
        T : tableau_entier [c];
debut
    b<-0;
    faire
        si(b=3) alors
            fin;
        finsi
        afficher("entrer la taille du tableau");
        lire(n);
        b++;
    tantque((n<1)ou(n>500));  
    pour(e<-0;e<n;e++)
        afficher("entrer la valeur de T[",e,"] : ");
        lire(T[e]);
    finpour
    afficher("entrer la valeur a supprimer : ");
    lire(a);
    faire
        b<-0;
        afficher("la valeur ",a," n existe pas \n veuillez entrer la valeur a supprimer \n");
        lire(a);
        pour(e<-0;e<n;e++)
            si (T[e]<>a) alors
                b++;
            finsi
        finpour
    tantque(b=n);
    f<-0;
    pour(e<-0;e<n;e++)
        si (T[e]=a)
            continue;
        finsi
        T[f]<-T[e];
        f++;
    finpour
    pour(e<-0;e<f;e++)
        afficher("T[",e,"] = ",T[e]);
    finpour
fin                                          
*/
#include <stdio.h>
#define c 500
int main ()
{
    int T[c],n,e,f,a,b;
    b=0;
    do
    {
        if(b==3)
        {
            exit (0);
        }
        printf("entrer la taille du tableau ");
        scanf("%d",&n);
        b++;
    }while((n<1)||(n>500));    
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de T[%d] : ",e);
        scanf("%d",&T[e]);
    }
    printf("entrer la valeur à supprimer ");
    scanf("%d",&a);
    do
    {
        b=0;
        printf("la valeur %d existe pas \n veuillez entrer la valeur à supprimer \n",a);
        scanf("%d",&a);
        for(e=0;e<n;e++)
        {
            if(T[e]!=a)
            {
                b++;
            }
        }    
    }while(b==n);
    f=0;
    for (e=0;e<n;e++)
    {
        if(T[e]==a)
            continue;
        T[f]=T[e];
        f++;    
    }
    for(e=0;e<f;e++)
    {
        printf("T[%d] = %d \n",e,T[e]);
    }
    return (0);
}
    