/*
algorithme l element le plus proche de la moyenne
variable c<-500;
         n,e,position : entier;
         element,difference,s,m,T[c],a : entier;
debut
    faire
        afficher("entrer le taille du tableau ");
        lire(n);
    tantque((n<1)ou(n>100));
    pour(e<-0;e<n;e++)
    
        afficher("entrer la valeur de T[",e,"] : ");
        scanf(T[e]);
    finpour 
    afficher("\n");
    s<-0;
    m<-0;
    pour(e=0;e<n;e++)
        s=s+T[e];
    finpour      
    m<-(s/n);
    printf("la somme est ",s," et la moyenne est ",m,"\n");
    difference<-fabs(m-T[0]);
    a<-0;
    position<-0;
    element<-T[0];
    pour(e<-1;e<n;e++)
        a<-fabs(m-T[e]);
        si(a<difference)
            difference<-a;
            element<-T[e];
            position<-e;
        fi  
    finpour 
    printf("l element plus proche de la moyenne est ",element," qui est en position T[",position,"]"); 
fin      
*/
#include <stdio.h>
#include <math.h>
#define c 100
int main ()
{
    int n,e,position;
    int element,difference,s,m,T[c],a;
    do
    {
        printf("entrer le taille du tableau ");
        scanf("%d",&n);
    }while((n<1)||(n>100));  
    for(e=0;e<n;e++)
    {
        printf("entrer la valeur de T[%d] : ",e);
        scanf("%d",&T[e]);
    }
    printf("\n");
    s=0;
    m=0;
    for(e=0;e<n;e++)
    {
        s=s+T[e];
    }
    m=s/n;
    printf("la somme est %d et la moyenne est %d\n",s,m);
    difference=fabs(m-T[0]);
    a=0;
    position=0;
    element=T[0];
    for(e=1;e<n;e++)
    {
        a=fabs(m-T[e]);
        if(a<difference)
        {
            difference=a;
            element=T[e];
            position=e;
        }  
    }
    printf("l element plus proche de la moyenne est %d qui est en position T[%d]",element,position);
    return (0);
    
}
    