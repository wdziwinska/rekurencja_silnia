#include <stdio.h>

int silnia(int n){
    int suma_n=0;

    if(n==0) {
        return 1;
    }
    else{
        suma_n = n * silnia(n - 1);
        return suma_n;
    }
}

int main() {
    int silnia_n=0;
    silnia_n=silnia(4);
    printf("%d", silnia_n);
    return 0;
}