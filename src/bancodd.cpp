#include "../include/bancodd.h"
#include <string>

using namespace std;

std::string BancoDeDados::ler_dados(std::string nomeArq){
  fstream arq;
  string linha, palavra;
  long numero;
  std::string caminho = "../data/";
  std::string::size_type sz;
  
  caminho += nomeArq;

  arq.open(caminho, ios::in);

  while (getline(arq, linha)){
    numero = std::stol(linha,&sz);
    palavra=linha.substr(sz+1);
    palavras.push_back(make_pair(numero,palavra));
  }
  arq.close();

  return "Arquivo lido com sucesso!";

}

std::vector<std::pair<long,std::string>> BancoDeDados::procurar(std::string palavra){
  std::vector<std::pair<long,std::string>> resultados;
  int tamP=palavra.length();

  for(int i=0; i<palavras.size(); i++){
    int verif = 0;
    std::string aux;
    aux = palavras[i].second;

    //verificador de letras
    for(int j=0; j<tamP+1;j++){
      char letra1 = tolower(palavra[j]);
      char letra2 = tolower(aux[j]);
      
      if(j==tamP){
        verif = 1;
        break;
      }else if(letra1 != letra2){
        break;
      }
    }
    //colocar palavra encontrada no vector de resultados
    if(verif == 1){
      resultados.push_back(palavras[i]);
    }
  }


  return resultados;
}