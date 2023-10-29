#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

void inicializar(){
    int i;
    for (i=0; i < MAX; i++){
        v[i] = NULL;
    }
}

void ler_dados(int posicao){
    if (v[posicao]==NULL){
        v[posicao] =  (p_livro)malloc(sizeof(livro));
        fflush(stdin);
        printf("Informe o titulo: \n");
        gets(v[posicao]->titulo);
        printf("Informe o autor: \n");
        gets(v[posicao]->autor);
        fflush(stdin);
        printf("Informe o ISBN: \n");
        gets(v[posicao]->ISBN);
        printf("Informe o preco: \n");
        scanf("%lf", &v[posicao]->preco);
        printf("Informe a quantidade em estoque: \n");
        scanf("%d", &v[posicao]->qtdEstoque);
        printf("\n");
    }
    for(int i=0; i<posicao; i++){
        if (strcmp(v[posicao]->ISBN, v[i]->ISBN) == 0){
            v[i]->qtdEstoque += v[posicao]->qtdEstoque;
            free(v[posicao]);
            v[posicao] = NULL;
            break;
        }
    }
}

void imprimir_unico(int posicao){
    if (v[posicao] != NULL){
        printf("Titulo: %s \n", v[posicao]->titulo);
        printf("Autor: %s \n", v[posicao]->autor);
        printf("ISBN: %s \n", v[posicao]->ISBN);
        printf("Preco: %lf \n", v[posicao]->preco);
        printf("Quantidade em estoque: %i \n\n", v[posicao]->qtdEstoque);
    }
}

void imprimir_tudo(){
    for(int i=0; i<MAX; i++){
        imprimir_unico(i);
    }
}

void pesquisar_titulo_autor(const char *buscar) {
    int tot = 0;
    for (int i = 0; i < MAX; i++) {
        if (v[i] != NULL && (strstr(v[i]->titulo, buscar) != NULL || strstr(v[i]->autor, buscar) != NULL)) {
            tot++;
            printf("Livro #%d:\n", i);
            imprimir_unico(i);
        }
    }

    if (tot == 0) {
        printf("Nenhum livro correspondente encontrado para: %s\n", buscar);
    }
}
