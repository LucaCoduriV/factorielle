#include <stdio.h>
#include <stdlib.h>


int factorielle(int a){
    if(a == 1){
        return 1;
    }
        return (factorielle(a-1) * a);
}


int main()
{
    int val_user;

    printf("Entrez un nombre: ");
    scanf("%i", &val_user);

    //fonction factorielle
    printf("%i", factorielle(val_user));
    return EXIT_SUCCESS;
}
