# Projeto-Contatos

**Universidade Evangélica de Goiás (UniEVANGÉLICA)** **Curso:** Engenharia de Software - 3º Período  
**Disciplina:** Laboratório de Programação (Ciclo 1)  
**Professor:** Renato Luan de Sousa Araújo  

## Membros 
* Edmundo Gabriel Brandão Silva
* Eduarda Cambui Morais
* Eduardo Setti Coelho da Penha
* Rafael Fernandes de Oliveira Teles

---

##  Sobre o Projeto
Este é um sistema de gerenciamento de agenda telefônica desenvolvido em linguagem C com interface em modo texto (Console). O objetivo principal do projeto é a aplicação prática dos conceitos de algoritmos estruturados, incluindo o uso de ponteiros (passagem por referência), manipulação de strings, modularização e recursividade.

##  Organização do Repositório
Para manter a clareza e as boas práticas, o código foi modularizado e dividido da seguinte forma:

```text
/ (Raiz do repositório)
│-- README.md            # Documentação do projeto
│
├── include/             # Arquivos de cabeçalho
│   └── contatos.h       # Definição da struct e assinaturas das funções
│
└── src/                 # Arquivos de código-fonte
    ├── contatos.c       # Implementação das regras de negócio (CRUD e recursão)
    └── main.c           # Interface com o usuário e menu principal
