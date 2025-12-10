#include <stdio.h>
int pgcd(int a, int b);
int pgcd(int a,int b) {
    int r;
    while (b!=0) /*La boucle s'exécute tant que b est non nul*/
    {   r= a % b;  /*Calculer r le reste de la division euclidienne de a par b*/
        a= b;  
        b=r;   /*Cette étape remplace le couple(a,b) par le couple (b,r)*/
    }

    return a;

    }

int main() { 
    int a,b,c,d,pgcd_abc,init_a,init_b,init_c;  /*Declaration des variables*/

    printf("Entrez les entiers a, b et c respectivement:\n"); /*Demande de saisie de a,b et c, on utilise \n pour retourner à la ligne*/
    scanf("%d %d %d",&a,&b,&c); /*Stockage des valeurs des variables a,b et c*/
    init_a= a;       
    init_b =b;
    init_c = c;  
   
    if (a< 0||b<0 || c <0)  /*Vérification si a,b et c sont négatives ou non, || désigne l'opérateur logique "ou"*/
        {if (a<0)   {a = -a;}  /*si oui on attribue à cette variable sa valeur absolue*/
         if (b<0)  {b = -b;}   /*on fait la meme chose pour b et c*/
         if (c<0)  {c = -c;}
        }
    
    d = pgcd(a,b);
    pgcd_abc= pgcd(d,c);
    
    printf("\nPGCD(%d,%d,%d)=%d\n\n",init_a,init_b,init_c,pgcd_abc);   
    if (pgcd_abc==1) {printf("Donc %d , %d et %d sont premiers entre eux",init_a,init_b,init_c);}


}