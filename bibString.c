#include <stdio.h>
#include <string.h>

int main(){
    system("clear");
    char nome[] = "Gabriel";
    
    int tamNome = strlen(nome); // tamanho da string
    printf("Tamanho da string: %d\n", tamNome);

    printf("=============================\n");

    char nome2[] = "Rodrigues";

    strcpy(nome, nome2); // strncpy(stringDestino, stringOrigem, qtdCaracter)
    printf("nome: %s\n", nome);

    printf("=============================\n");

    strcpy(nome, "Gabriel");
    strcpy(nome2, " Rodrigues");
    printf("nome: %s\n", nome);

    printf("=============================\n");

    strcat(nome, nome2); // strncat(string_destino, string_origem, tamanho);
    printf("nome + nome2: %s\n", nome);

    printf("=============================\n");

    char str1[15] = "Curso de C";
    char str2[20] = "Curso de Javascript";
    int retorno;
  
    retorno = strcmp(str1, str2); //retorno = 0: conteúdo das strings são iguais
                                  //retorno < 0: conteúdo da string1 é menor do que string2
                                  //retorno > 0: conteúdo da string1 é maior do que string2
    printf("retorno = %d\n", retorno);

    retorno = strncmp(str1, str2, 5);
    printf("retorno = %d\n", retorno);

    printf("=============================\n");

    char str[30] = "Gabriel Rodrigues Silva";
    char strInvertida[30];
    int j, y = 0;
    for(j = strlen(str) - 1; j >= 0; j--){
        strInvertida[y] = str[j];
        y++;
    }
    strInvertida[y] = '\0';
    printf("strInvertida = %s\n", strInvertida);

    return 0;
}