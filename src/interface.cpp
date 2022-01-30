#include "../include/interface.h"

void Interface::start(){
  std::cout << "Digite a palvrava que deseja buscar:" << std::endl << "(Aperte Ctrl + D para finalizar)"<< std::endl << "⮚ ";
}

void Interface::close(){
  std::cout << "Finalizando programa..." << std::endl;
}

void Interface::setOrdem(char num){
  if(num == '1'){
    this->Ord = true;
    std::cout << "Ordenação da lista ligada!" << std::endl;
  }else{
    std::cout << "Ordenação da lista desligada!" << std::endl;
  }
}

void Interface::imprimir(std::vector<std::pair<long,std::string>> resultados){
  std::vector<std::string> ordenado;

  if(Ord == true){
    ordenado = ordenar(resultados);
  }else{
    for(int g=0;g<resultados.size();g++){
      ordenado.push_back(resultados[g].second);
    }
  }

  //construção do menu
  clearScreen();
  std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
  std::cout << "🟆 Resultados encontrados:" << std::endl;
  //impressão dos resultados
  for(int i=0;i<resultados.size();i++){
    std::cout << "▸" << ordenado[i] << " (" << (i+1) << ")" <<std::endl;
  }
  std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
}

void Interface::clearScreen(){
    std::cout << std::string(100, '\n');
}

std::vector<std::string> Interface::ordenar(std::vector<std::pair<long,std::string>> x){
  std::vector<std::string> auxord;

  //ordenação
  for(int i=0; i<x.size(); i++){
    for(int k=0; k<x.size()-1; k++){
      if(x[k].first < x[k+1].first){
        std::pair<long,std::string> temp;
        temp = x[k];
        x[k] = x[k+1];
        x[k+1] = temp;
      }
    }
  } 

  //return do vetor
  for(int g=0;g<x.size();g++){
    auxord.push_back(x[g].second);
  }

  return auxord;

}