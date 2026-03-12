#include <stdio.h>
#include "contatos.h"

int main() {
    Contato agenda[100]; // Array de 100 registros exigido
    int qtd = 0;
    int opcao;

    do {
        // Menu com as 7 opcoes obrigatorias
        printf("\n--- MENU DE CONTATOS ---\n");
        printf("1) Cadastrar\n");
        printf("2) Listar\n");
        printf("3) Buscar por nome\n");
        printf("4) Editar\n");
        printf("5) Excluir\n");
        printf("6) Estatisticas (recursivo)\n");
        printf("7) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(agenda, &qtd);
                break;
            case 2:
                listar(agenda, qtd);
                break;
            case 3:
                buscar(agenda, qtd);
                break;
            case 4:
                editar(agenda, qtd);
                break;
            case 5:
                excluir(agenda, &qtd);
                break;
            case 6:
                // Passa o indice 0 para iniciar a recursao
                printf("\nContatos com @gmail.com: %d\n", contarGmail(agenda, qtd, 0));
                break;
            case 7:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida, tente novamente.\n");
        }
    } while (opcao != 7); // [cite: 26]

    return 0;
}