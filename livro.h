#ifndef SISTEMAGERENCIAMENTOLIVRARIA_LIVRO_H
#define SISTEMAGERENCIAMENTOLIVRARIA_LIVRO_H
#define MAX 100
typedef struct Livro{
    char titulo[100];
    char autor[50];
    char ISBN[13];
    double preco;
    int qtdEstoque;
}livro;
typedef livro *p_livro;

extern p_livro v[MAX];

void inicializar();

void ler_dados(int posicao);

void imprimir_unico(int posicao);

void imprimir_tudo();

void pesquisar_titulo_autor(const char *buscar);

#endif //SISTEMAGERENCIAMENTOLIVRARIA_LIVRO_H
