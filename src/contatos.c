#include <stdio.h>
#include <string.h>
#include "contatos.h"

void cadastrar(Contato *agenda, int *qtd) {
    if (*qtd >= 100) {
        printf("A agenda esta cheia!\n");
        return;
    }
    
    printf("Digite o nome: ");
    scanf(" %[^\n]s", agenda[*qtd].nome);
    
    printf("Digite o telefone: ");
    scanf(" %[^\n]s", agenda[*qtd].telefone);
    
    printf("Digite o email: ");
    scanf(" %[^\n]s", agenda[*qtd].email);

    (*qtd)++; 
    printf("Contato cadastrado com sucesso!\n");
}

void listar(Contato *agenda, int qtd) {
    int i; /* Declarando a variavel fora do 'for' para o Dev-C++ aceitar */
    if (qtd == 0) {
        printf("A agenda esta vazia!\n");
        return;
    }
    for (i = 0; i < qtd; i++) {
        printf("\n--- Contato [%d] ---\n", i);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Email: %s\n", agenda[i].email);
    }
}

void buscar(Contato *agenda, int qtd) {
    char nomeBusca[50];
    int achou = 0;
    int i; /* Variavel do laco */
    
    printf("Qual nome deseja buscar? ");
    scanf(" %[^\n]s", nomeBusca);

    for (i = 0; i < qtd; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("Achou no indice [%d]: %s - %s - %s\n", i, agenda[i].nome, agenda[i].telefone, agenda[i].email);
            achou = 1;
        }
    }
    if (achou == 0) {
        printf("Nenhum contato com esse nome.\n");
    }
}

void editar(Contato *agenda, int qtd) {
    int i;
    printf("Digite o numero (indice) do contato para editar: ");
    scanf("%d", &i);

    if (i >= 0 && i < qtd) {
        printf("Novo nome: ");
        scanf(" %[^\n]s", agenda[i].nome);
        printf("Novo telefone: ");
        scanf(" %[^\n]s", agenda[i].telefone);
        printf("Novo email: ");
        scanf(" %[^\n]s", agenda[i].email);
        printf("Contato editado!\n");
    } else {
        printf("Indice invalido.\n");
    }
}

void excluir(Contato *agenda, int *qtd) {
    int i, j; /* Variaveis do laco declaradas aqui em cima */
    printf("Digite o numero (indice) do contato para excluir: ");
    scanf("%d", &i);

    if (i >= 0 && i < *qtd) {
        for (j = i; j < (*qtd) - 1; j++) {
            agenda[j] = agenda[j + 1];
        }
        (*qtd)--; 
        printf("Contato excluido!\n");
    } else {
        printf("Indice invalido.\n");
    }
}

int contarGmail(Contato *agenda, int qtd, int i) {
    int temGmail = 0;
    
    if (i >= qtd) {
        return 0; 
    }
    
    if (strstr(agenda[i].email, "@gmail.com") != NULL) {
        temGmail = 1;
    }
    
    return temGmail + contarGmail(agenda, qtd, i + 1);
}
