#include <stdio.h>
#include <stdlib.h>


int factorielle(int a){
    if(a-1 == 0){
        return a;
    }else{
        return factorielle(a-1) * a;
    }

}


int main()
{
    printf("%i", factorielle(5));
}
