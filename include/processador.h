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
    BancoDeDados banco;
    bool sair = false;

  public:

    void carregar_bancodd(char *nomeArq[], int numArqs);

    void iniciar(std::istream &in, std::ostream &out);

    std::string processarLinha(std::string linha);

};

#endif