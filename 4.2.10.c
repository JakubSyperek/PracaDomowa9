#include <stdio.h>
#include <stdlib.h>

//a
int maksimuma(unsigned int n, int * tab){
    int i, max=tab[0];
    for(i=1;i<n;i++)
        if(tab[i]>max)
            max=tab[i];
    return max;
}

//b
int maksimumb(unsigned int n, int * tab){
    int i, min=tab[0];
    for(i=1;i<n;i++)
        if(tab[i]<min)
            min=tab[i];
    return min;
}

//c
int maksimumc(unsigned int n, int * tab){
    int i, max=0;
    for(i=1;i<n;i++)
        if(tab[i]>tab[max])
            max=i;
    return max;
}

//d
int maksimumd(unsigned int n, int * tab){
    int i, min=0;
    for(i=1;i<n;i++)
        if(tab[i]<tab[min])
            min=i;
    return min;
}

//e
int maksimume(unsigned int n, int * tab){
    int i, max=tab[0];
    for(i=1;i<n;i++)
        if(tab[i]>max)
            max=abs(tab[i]);
    return max;
}

//f
int maksimumf(unsigned int n, int * tab){
    int i, max=0;
    for(i=1;i<n;i++)
        if(tab[i]>tab[max])
            max=abs(i);
    return max;
}
