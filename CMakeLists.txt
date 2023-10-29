cmake_minimum_required(VERSION 3.26)
project(SistemaGerenciamentoLivraria C)

set(CMAKE_C_STANDARD 11)

add_executable(SistemaGerenciamentoLivraria main.c
        livro.c
        livro.h)
