#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "Gabriel"; // 7 letras + 1 \0

    // for (int i = 0; nome[i] != '\0'; i++){
    //     printf("%c", nome[i]);
    // }printf("\n");
    
    printf("%s\n", nome);

    char nome2[20];
    printf("Digite seu nome: ");
    fgets(nome2, 20, stdin);
    printf("%s\n", nome2);
    
    return 0;
}