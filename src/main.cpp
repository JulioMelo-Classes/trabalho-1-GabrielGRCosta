#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/format.h"
#include "../include/Kenobet.h"
using namespace std;

int main(int argc, char *argv[]){
  KenoBet Jogo = formatar(argv);
	Jogo.randoms_spots();
	Jogo.get_hits();
	Jogo.Interface();
  return 0;
}