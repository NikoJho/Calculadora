#include <stdio.h>
#include <stdlib.h>
#include "calc.c"
#include "calc.h"

int main()
{
    int res1,res2,res,soma,sub,multi,a,b;
    printf("\tInicio de uma calculator:\n");
    printf("\nDigite um numero:\n");
    scanf("%d", &a);
    
    printf("\nDigite um numeroo:\n");
    scanf("%d", &b);
    
    res1 = soma(a,b);
    printf("\tsoma = %d", soma);
    
    res2=sub(a,b);
    printf("\tsub = %d", sub);
    
    res=multi(soma,sub);
    printf("\tmulti = %d", multi);
    return 0;
}
