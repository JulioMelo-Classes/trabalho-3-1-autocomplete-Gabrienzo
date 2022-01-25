#include "../include/bancodd.h"
#include <iostream>
#include <sstream>

std::string BancoDeDados::ler_dados(std::string nomeArq){
  std::ifstream arq;
  std::string linha, palavra, ss2;
  int numero;

  arq.open(nomeArq, std::ios::in);
  while (std::getline(std::cin, linha)){
    std::stringstream ss2;
    ss2 << linha;
    ss2 >> numero;
    ss2 >> palavra;

    palavras.push_back(make_pair(numero,palavra));
  }
  arq.close();

  return "Arquivo lido com sucesso!";

}