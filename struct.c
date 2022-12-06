#include <stdio.h>

struct Personagem{
    char nome[50];
    int idade;
    char raca[20];
    char classe[20];
};


int main(){
    system("clear");
    
    struct Personagem cdn;
    printf("Nome: ");
    fgets(cdn.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &cdn.idade);
    printf("Raca: ");
    fgets(cdn.raca, 50, stdin);
    printf("Classe: ");
    fgets(cdn.classe, 50, stdin);


    return 0;
}