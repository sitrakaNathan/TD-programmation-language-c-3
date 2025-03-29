/*
algorithme creation du triangle de pascal
variable n,e,k,f : entier;
        T: tableau[1..500] de chaine;
        T1: tableau[1..500] de chaine;
debut
    afficher("entrer le degree du triangle de pascal\n");
    lire(k);
    n<-1;
    T[0]<-1;
    T1[0]<-1;
    printf("",T[0],"\n");
    tantque(n<=k)
        pour(e<-1;e<=n;e++)
            si(e<>n)
                T1[e]<-T[e]+T[e-1];
            finsi   
        finpour
        T1[n]<-T[0];
        pour(f<-0;f<=n;f++)
            afficher("",T1[f],"\t");
        finpour
        afficher("\n");
        n++;
        si(n<=k)
            pour(e<-1;e<=n;e++)
                si(e<>n)
                    T[e]<-T1[e]+T1[e-1];
                finsi  
            finpour
            T[n]<-T1[0];
            pour(f<-0;f<=n;f++)
                afficher("",T[f],"\t");
            finpour
            afficher("\n");
            n++;
        finsi   
    fintantque
fin        
*/
#include <stdio.h>
int main ()
{
    int T[500],T1[500],n,e,k,f;
    printf("entrer le degree du triangle de pascal\n");
    scanf("%d",&k);
    n=1;
    T[0]=1;
    T1[0]=1;
    printf("%d\n",T[0]);
    while(n<=k)
    {
        for(e=1;e<=n;e++)
        {
            if(e!=n)
            {
                T1[e]=T[e]+T[e-1];
            }    
        }
        T1[n]=T[0];
        for(f=0;f<=n;f++)
        {
            printf("%d\t",T1[f]);
        }
        printf("\n");
        n++;
        if(n<=k)
        {
            for(e=1;e<=n;e++)
            {
                if(e!=n)
                {
                    T[e]=T1[e]+T1[e-1];
                }    
            }
            T[n]=T1[0];
            for(f=0;f<=n;f++)
            {
                printf("%d\t",T[f]);
            }
            printf("\n");
            n++;
        }    
    }    
    return (0);
}
    