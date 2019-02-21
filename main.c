#include <stdio.h>
#include <stdlib.h>
int factoriel(int a, int total);


int main()
{
    int total = 1;

    for(int i=1;i<=3;i++){
        total = total*i;
    }

    printf("%i", total);
    return 0;
}
