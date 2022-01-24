#ifndef BANCODD_H
#define BANCODD_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


class BancoDeDados {

  private:
    std::vector<std::pair<int,std::string>> palavras;

  public:

    std::string ler_dados(std::string nomeArq);

    
};

#endif