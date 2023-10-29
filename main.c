#include <stdio.h>
#include "livro.h"

p_livro v[MAX];

int main() {
    inicializar();
    int i = 0;
    int op = 0;
    char buscar[100];
    do{
        int p = 0;
        printf("Menu Principal \n");
        printf("1. Cadastrar novo livro \n");
        printf("2. Listar todos os dados de um unico livro\n");
        printf("3. Listar todos os dados de todos os livro\n");
        printf("4. Buscar por livro atraves de nome de autor ou do proprio livro\n");
        printf("9. Sair do programa \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &op);
        switch(op){
            case 1:
                ler_dados(i);
                i++;
                break;
            case 2:
                printf("Digite a posicao que deseja imprimir\n");
                scanf("%d", &p);
                imprimir_unico(p);
                break;
            case 3:
                imprimir_tudo();
                break;
            case 4:
                printf("Pesquisar por titulo ou autor para procurar o livro: \n");
                fflush(stdin);
                gets(buscar);
                printf("Resultados da pesquisa:\n");
                pesquisar_titulo_autor(buscar);
                break;
            case 9:
                printf("Fim da execucao do programa\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }while(op != 9);
}
