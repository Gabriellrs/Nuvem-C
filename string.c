#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "Gabriel"; // 7 letras + 1 \0

    // for (int i = 0; nome[i] != '\0'; i++){
    //     printf("%c", nome[i]);
    // }printf("\n");
    
    printf("%s\n", nome);
    
    return 0;
}