#ifndef CONTATOS_H
#define CONTATOS_H

// Estrutura do contato com os 3 campos obrigatórios
typedef struct {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

// Assinaturas das funcoes usando ponteiros (passagem por referencia)
void cadastrar(Contato *agenda, int *qtd);
void listar(Contato *agenda, int qtd);
void buscar(Contato *agenda, int qtd);
void editar(Contato *agenda, int qtd);
void excluir(Contato *agenda, int *qtd);
int contarGmail(Contato *agenda, int qtd, int i); // Funcao recursiva

#endif