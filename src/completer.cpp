#include <iostream>
#include "../include/processador.h"

int main() {
  Processador processador;

  processador.iniciar(std::cin, std::cout);

  return 0;
} 