#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/format.h"
#include "../include/Kenobet.h"
using namespace std;

/*
Avaliação
Processamento do Arquivo de Entrada: 0,6 (faltou o processamento de caracteres estranhos, formatação (menos de 3 linhas))
Execução correta: 1
Interfcace Textual: 1
Documentação: 0.8 (faltou documentar Format.cpp)
Compilação automatizada: 1
Organização em src, include, build, data: 1

Comentários
- Não entendi muito bem a ideia de indentação na classe Kenobet.cpp, atentem a isso
na próxima vez. Em contrapartida a indentação da KenoBet.h está pior ainda! Vou tirar pontos da parte de código! (20%)
- Corrigi um erro no makefile, depois deem uma olhada de como ficou.
- Vocês poderiam ter dividido melhor o sistema em classes/objetos. Por exemplo, "formatar" poderia ser um objeto que é
responsável por abrir e processar o arquivo. KenoBet ficaria mais responsável por guardar as informações do arquivo, enquanto
outra classe (kenogame ou algo do tipo) ficaria responsável por executar o jogo e imprimir a interface.
*/

int main(int argc, char *argv[]){
  KenoBet Jogo = formatar(argv);
	Jogo.randoms_spots();
	Jogo.get_hits();
	Jogo.Interface();
  return 0;
}