#include "../include/processador.h"
#include <iostream>


int main(int argc, char* argv[]) {
  Processador processador;
  
  processador.carregar_bancodd(argv, argc);

  processador.iniciar(std::cin, std::cout);

  processador.deletarBanco();

  return 0;
} 