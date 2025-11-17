//Importação das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Definição da lista
struct List {
    int id; //Número identificador
    char nome[50]; //Nome
    struct List *proximo; //Ponteiro para o próximo nó da lista
};

int main() {
    //Varíveis principais do programa
    struct List *inicio = NULL; //inicio -> aponta para o primeiro nó da lista
    struct List *novo, *atual, *anterior; 
    int opcao = 0, id, contador = 1;
    char nome[50];
    //novo -> usado para criar novos nós
    //atual -> usado para percorrer a lista
    //anterior -> usador para deletar um item 
    //opcao -> guarda o número digitado no menu
    //id -> usado na exclusão
    //contador -> gera ID´s automáticos
    //nome -> string temporária para ler nome digitado

    //Loop principal do programa ( do / while)
    do {
        //Menu de opções
        printf("\nRENALF MEGA DATA    ");
        printf("\n======MENU======\n");
        printf("1 - Adicionar\n");
        printf("2 - Listar\n");
        printf("3 - Deletar\n");
        printf("4 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar(); // remove o ENTER deixado pelo scanf, sem ele o método fgets() não funciona 

        switch (opcao) {
        case 1:
            novo = (struct List *) malloc(sizeof(struct List)); //Aloca memória para adicionar um novo item na lista
            novo->id = contador++; //Atribui um ID único ao item adicionado, e incrementa o contador para o próximo item
            
            //Lê o nome
            printf("Digite um nome: ");
            fgets(nome, 50, stdin); //Lê texto com espaços
            nome[strcspn(nome, "\n")] = 0; //remove o ENTER ao final
            strcpy(novo->nome, nome); //Copia para dentro do item
            novo->proximo = NULL; //O último item sempre aponta para o NULL

            //Se a lista estiver vazia, o novo item vira o primeiro
            if (inicio == NULL) {
                inicio = novo;
            } else { // Caso já tenha itens dentro da lista, o novo item adicionado percorre até o final e é adicionado lá
                atual = inicio;
                while (atual->proximo != NULL) {
                    atual = atual->proximo;
                }
                atual->proximo = novo;
            }

            printf("Elemento inserido com sucesso!\n");
            break;

        case 2:
            //Listar os itens
            if (inicio == NULL) {
                printf("Lista vazia.\n"); //Caso não tenha itens na lista
            } else { //Se tiver será listado todos os itens adicionados
                atual = inicio;
                printf("\n====LISTA====\n");
                while (atual != NULL) { 
                    //Começa do primeiro item
                    //Vai percorrer a lista até achar NULL
                    printf("ID: %d | Nome: %s\n", atual->id, atual->nome);
                    atual = atual->proximo;
                }
            }
            break;

        case 3:
            //Deletar itens
            if (inicio == NULL) {
                printf("Lista vazia.\n"); //Caso não tenha itens para deletar
            } else { // Caso tenha
                printf("Digite o ID para deletar: "); //Lê o ID do item a ser deletado
                scanf("%d", &id);

                //Busca o item correspondente
                atual = inicio; //atual é o item sendo examinado
                anterior = NULL; //anterior guarda o item anterior ao atual

                //Achou o ID ou chegou ao final da lista(atual == NULL)
                while (atual != NULL && atual->id != id) {
                    anterior = atual;
                    atual = atual->proximo;
                }

                //Se não encontrou o ID
                if (atual == NULL) {
                    printf("ID não encontrado.\n");
                } else { //Se encontrou, remove
                    if (anterior == NULL) {
                        inicio = atual->proximo; //Se o item for o primeiro da lista
                    } else {//Senão, está no meio ou no fim
                        //O item anterior passa a apontar para o próximo atual
                        //O atual é removido da lista
                        anterior->proximo = atual->proximo; 
                    }
                    free(atual); //Libera a memória que tinha sido alocada para o item
                    printf("Elemento removido!\n"); 
                }
            }
            break;

        case 4:
            //Finalizar o programa
            printf("Finalizando programa\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
        //Enquanto a opção for diferente de 4 , continuar a rodar o programa
    } while (opcao != 4);


    return 0;
}

