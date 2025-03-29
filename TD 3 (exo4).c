/*
algorithme suppression Des elements de T1 qui est similaire à T2
variable c <- 500;
        T1 : tableau_entier [c];
        T2 : tableau_entier [c];
        n : entier;
        m : entier;
        e : entier;
        j : entier;
        g : entier ;
        a : entier;
debut 
    e<-0;
    faire
        e++;
        si (e>3) alors
            fin
        finsi
        afficher("entrer le taille du tableau T1");
        lire(n)
    tant que ((n<1)ou(n>50));
    pour(e<-0;e<n;e++)
        afficher("entrer la valeur de T1[",e,"] : ");
        lire(T1[e]);
    finpour 
    e <- 0;
    faire
        e++;
        si(e>3) alors
            fin
        finsi
        afficher("entrer la taille du tableau T2");
        lire(m);
    tant que ((m<1)ou(m>100));
    pour(e<-0;e<m;e++)
        afficher("entrer la valeur de T2[",e,"] : ");
        lire(T2[e]);
    finpour
    pour(e<-0;e<n;e++)
        pour(f<-0;f<m;f++)
            si(T1[e]=T2[f]) alors
                T1[e]<-0;
            finsi
        finpour
    finpour
    a<-0;
    pour(e<-0;e<n;e++)
        si(T1[e]<>0)
            afficher("T1[",a,"] = "T1[e]); 
            a++;
        finsi
    finpour
fin                       
*/
#include <stdio.h>
#define c 500
int main ()
{
    int T1[c],T2[c],n,m,e,j,g,a;
    e=0;
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le taille du tableau T1 \n");
        scanf("%d",&n);
    }while((n<1)||(n>50));
    printf("\n");
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de T1[%d] : ",e);
        scanf("%d",&T1[e]);
    }
    printf("\n");
    e=0;
    do
    {
        e++;
        if(e>3)
        {
            exit(0);
        }
        printf("entrer le taille du tableau T2  \n");
        scanf("%d",&m);
    }while((m<1)||(m>100));
    printf("\n");
    for(e=0;e<m;e++)
    {
        printf("entrer la valeur de T2[%d] : ",e);
        scanf("%d",&T2[e]);
    } 
    for(e=0;e<n;e++)
    {
        for(j=0;j<m;j++)
        {
            if(T1[e]==T2[j])
            {
                T1[e]=0;
            }
            
        } 
        
    }
    a=0;
    for(e=0;e<n;e++)
    {
        if(T1[e]!=0)
        {
            printf("T1[%d] = %d \n",a,T1[e]);  
            a++; 
        }    
    }
    return (0);
    
}
    