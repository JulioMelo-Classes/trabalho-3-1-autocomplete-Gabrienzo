#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <vector>

//interface concentra as ações de print do sistema.
class Interface{

  private:
  bool Ord = false;

  public:
  
  /*! imprime a mensagem inicial do sistema.
  */
  void start();
  
  /*! imprime a mensagem de finalização do programa.
  */
  void close();

  /*! imprime a mensagem indicando se a ordenação está ligada ou não.
    @param num valor que indicará se a lista será ordenada ou não
  */
  void setOrdem(char num);

  /*! imprime a mensagem de que os arquivos foram carregados por completo.
  */
  void bancoddmsg();

  /*! limpa a tela para mostrar os resultados.
  */
  void clearScreen();

  /*! imprime os resultados encontrados por banco de dados.
    @param resultados de palavras que batem com a que foi pesquisada
  */
  void imprimir(std::vector<std::pair<long,std::string>> resultados);

  /*! ordena os resultados encontrados por banco de dados para imprimi-los baseado no peso.
    @param resultados vector com os resultados encontrados por banco de dados.
    @return vector de strings com os resultados ordenados.
  */
  std::vector<std::string> ordenar(std::vector<std::pair<long,std::string>> resultados);

};

#endif