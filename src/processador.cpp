#include "../include/processador.h"
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <queue>

void Processador::iniciar(std::istream &inputStream, std::ostream &outputStream) {
std::string linha, saida;
	this->sair = false;

  //carregar banco de dados
  saida = banco.ler_dados("cities.txt");
  outputStream << saida << std::endl;
  saida = banco.ler_dados("wiktionary.txt");
  outputStream << saida << std::endl;
  menu.start();

  //leitor da linha
	/*while (! this->sair){
    menu.start();
		if (std::getline(inputStream, linha)) {
			saida = processarLinha(linha);
			outputStream << saida << std::endl;
		}
  }
  */
}

/*std::string Processador::processarLinha(std::string linha){

}
*/