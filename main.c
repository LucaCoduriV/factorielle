#include <stdio.h>
#include <stdlib.h>

factorielle(int val_user){
    int i;

    for(i=val_user-1; i>=1; i--){
        val_user *= i;
    }

    printf("\n\n%i\n", val_user);
}

int main()
{
    int val_user;

    printf("Entrez un nombre: ");
    scanf("%i", &val_user);


    factorielle(val_user);

    return EXIT_SUCCESS;
}
