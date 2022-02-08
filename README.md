# Projeto III - Linguaguem de Programação
Repositório contendo as especificações do Trabalho 3.1 da disciplina de LP1, funcionalidades e executaveis.
especificações dos autores do codigo em [author.md](author.md)

***

# Documento de Especificação
Leia o documento de especificação contido em [Especificação do Trabalho 2](https://github.com/JulioMelo-Classes/LP1-2021.2-Autocomplete/blob/main/README.md).

***

## Como compilar o projeto;
Cmake (Criando, entrando e buildando os arquivos da pasta build):
```console
mkdir build
cd build
cmake ..
cmake --build .
```

***

## Como executar o projeto;
Comandos para dar inicio ao programa:
```console
cd build
./completer <desativar/ligar ordem> <repositorio com palavras>...
```
<ativar/desativar ordem> = escolha se deseja ligar ou não a ordenação dos resultados baseado no peso da palavra, do maior para o menor. (0 para desligar / 1 para ligar)
<repositorio com palavras> = nome do repositorio onde esta armazenado as palavras para o banco de dados, digite quantos forem necessarios separando-os por espaço.

Ou pode ultilizar o script de testes e executar o sistema redirecionando esse arquivo como entrada padrão:
```console
cd build
./completer <desativar/ligar ordem> <repositorio com palavras>... < <../data/script.txt>
```
fique a vontade para altera-lo para usar outros repositorios ou testar com outras palavras.

***
  
## Como executar o conjunto dos testes planejados por você (ou grupo).
Deixamos alguns comandos basicos prefeitos em [script_de_teste.txt](/data/script_de_teste.txt)

para executa-los basta iniciar o programa desta forma:
```console
cd build
./completer <1 ou 0> teste.txt < ../data/script_de_teste.txt
```

## Limitações ou funcionalidades não implementadas no programa.

### 1. Limitação: Não foi utilizado uma busca binária para encontrar os complementos para a palavra pesquisada.

# Avaliação

## Ler e validar os argumentos da linha de comando | 0 / 10

- Voces não fizeram qualquer validação, alguns erros que eu esperava tratamento: quantidade de argumentos da linha de comando, arquivo inexistente, arquivo inválido.

## Ler os dados da base de dados e armazená-los em uma classe apropriada | 10 / 10

- Vou considerar, mas o método "procurar" não deveria retornar um container, como já discutimos.

## Separar a interface textual das demais classes do sistema concentrando os couts e cins em um único objeto | 10 / 10

- ok

## Implementação de uma classe para conter o resultado da requisição do usuário | 0 / 10

- Acho que vocês não chegaram a entender o motivo desta classe. Espero que tenha ficado claro na aula.

## Implementação eficiente através de referencias e algoritmos de busca binária | 3 / 10

- Embora vocês não tenham implementado busca binária vou dar alguns pontos pelo uso de referencias à clase "BancoDeDados".

## Organização do código em src, include, data | 5 / 5

- ok

## Documentação do código usando o padrão doxygen | 5 / 5 

- ok

## Implementação e documentação de arquivos de teste | 8 / 10

- Boa ideia deixar alguns comandos no arquivo de teste, aqui faltou apenas a saida esperada dos testes.