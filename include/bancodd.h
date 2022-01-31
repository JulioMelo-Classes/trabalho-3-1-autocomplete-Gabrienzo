#ifndef BANCODD_H
#define BANCODD_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdlib.h>


// Bancodd concentra todas as operações realizacadas a partir do banco de dados de palavras
class BancoDeDados {

  private:
    std::vector<std::pair<long,std::string>> palavras;

  public:

    /*! Realiza o carregamento das palavras que está dentro do arquivo e as formata colocando-as dentro do vetor de palavras
      @param nomeArq nome do arquivo que será carregado e lido
    */
    void ler_dados(std::string nomeArq);

    /*! Realiza a procura das palavras que complementam a palavra digitada pelo usuário
      @param palavra que será pesquisada no banco de dados
      @return retorna um vector de palavras que complementam a palavra de busca
    */
    std::vector<std::pair<long,std::string>> procurar(std::string palavra);
    
};

#endif