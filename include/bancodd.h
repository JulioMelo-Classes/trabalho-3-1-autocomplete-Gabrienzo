#ifndef BANCODD_H
#define BANCODD_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdlib.h>



class BancoDeDados {

  private:
    std::vector<std::pair<long,std::string>> palavras;

  public:

    void setOrd(char num);

    std::string ler_dados(std::string nomeArq);

    std::vector<std::pair<long,std::string>> procurar(std::string palavra);
    
};

#endif