#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <vector>


class Interface{

  private:
  bool Ord = false;

  public:
  
  void start();
  
  void close();

  void setOrdem(char num);

  void clearScreen();

  void imprimir(std::vector<std::pair<long,std::string>> resultados);

  std::vector<std::string> ordenar(std::vector<std::pair<long,std::string>> resultados);

};

#endif