#include "../include/bancodd.h"
#include <iostream>

std::string BancoDeDados::ler_dados(std::string nomeArq){
  std::ifstream arq;
  std::string linha, palavra;
  std::string::size_type sz;
  int numero;

  arq.open(nomeArq, std::ios::in);
  while (! arq.eof()){
    std::getline(arq, linha);
    //testar se pegou a linha
    std::cout << linha << std::endl;
    numero = std::stoi(linha,&sz);
    palavra = linha.substr(sz+1);
    palavras.push_back(make_pair(numero,palavra));
  }
  arq.close();

  return "Arquivo lido com sucesso!";

}