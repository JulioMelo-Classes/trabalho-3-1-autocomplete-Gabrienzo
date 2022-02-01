#include "../include/processador.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <queue>


void Processador::carregar_bancodd(char *nomeArq[], int numArqs){
  
  //setar ordenação
  menu.setOrdem(*nomeArq[1]);

  //carregar banco de dados
  for(int i=2;i<numArqs;i++){
    std::string nome = nomeArq[i];
    banco->ler_dados(nome);
    menu.bancoddmsg();
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
      resultados = banco->procurar(linha);
			menu.imprimir(resultados);
		}
  }

  menu.close();
  
}

void Processador::deletarBanco(){
  delete banco;
}