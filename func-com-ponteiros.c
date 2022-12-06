#include <stdio.h>

void soma(int x, int y, int *z){
    *z = x + y;
}

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    system("clear");
    
    // É passado por referência de uma variável (ponteiro) para a função, possibilitando alterar uma variável que é externa a uma função.

    int a = 10, b = 20;
    int c;

    printf("%d\n", c);

    soma(a, b, &c);

    printf("%d\n", c);

    troca(&a, &b);

    printf("a = %d, b = %d\n\n", a, b);
    
    return 0;
}

// Caso o ponteiro referência para a função seja somente para leitura, é possível evitar algum futuro erro tornando esse ponteiro um const.