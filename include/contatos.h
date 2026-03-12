#ifndef CONTATOS_H
#define CONTATOS_H

typedef struct {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

void cadastrar(Contato *agenda, int *qtd);
void listar(Contato *agenda, int qtd);
void buscar(Contato *agenda, int qtd);
void editar(Contato *agenda, int qtd);
void excluir(Contato *agenda, int *qtd);
int contarGmail(Contato *agenda, int qtd, int i);


#endif
