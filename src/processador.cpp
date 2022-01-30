#include "../include/processador.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <queue>


void Processador::carregar_bancodd(char *nomeArq[], int numArqs){
  int ordem;
  std::string saida;

  //setar ordenação
  menu.setOrdem(*nomeArq[1]);

  //carregar banco de dados
  for(int i=2;i<numArqs;i++){
    std::string nome = nomeArq[i];
    saida = banco.ler_dados(nome);
    std::cout << saida << std::endl;
  }
}

void Processador::iniciar(std::istream &inputStream, std::ostream &outputStream) {
  std::string linha, saida;
  int ordem;
  std::vector<std::pair<long,std::string>> resultados;
	this->sair = false;

  //leitor da linha
	while (std::cin){
    menu.start();
		if (std::getline(inputStream, linha)) {
      resultados = banco.procurar(linha);
			menu.imprimir(resultados);
		}
  }
}