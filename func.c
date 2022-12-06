#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    int res = x + y;
    return res;
}

int main(){

    int res;

    res = soma(5, 15);

    printf("%d", res);

    return 0;
}