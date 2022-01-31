#ifndef PROCESSADOR_H
#define PROCESSADOR_H

#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <string>

#include "interface.h"
#include "bancodd.h"

class Processador {

  private:
    Interface menu;
    BancoDeDados* banco = new BancoDeDados;
    bool sair = false;

  public:

    /*! carrega o banco de dados com os arquivos inseridos.
      @param nomeArq O nome do arquivo a ser lido.
      @param numArqs Quantidade de arquivos.
    */
    void carregar_bancodd(char *nomeArq[], int numArqs);

    /*! inicia o programa completer, recebendo a entrada do usuario e chama as funções para processa-la.
      @param in entrada do usuario.
      @param out saida do sistema.
    */
    void iniciar(std::istream &in, std::ostream &out);

    /*! realiza a remoção da alocação dinamica
    */
    void deletarBanco();

};

#endif