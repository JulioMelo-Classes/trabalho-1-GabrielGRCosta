#include <iostream>
#include <iomanip>
#include <fstream>
#include "../include/format.h"
#include "../include/Kenobet.h"
using namespace std;

int main(int argc, char *argv[]){
  KenoBet Jogo = formatar(argv);
	Jogo.get_wage(Jogo.get_hits());
	Jogo.get_spots();
  /*for(int i=0; i<argc; i++)
    cout<<"Argumento["<<i<<"]: "<<argv[i]<<endl;*/
  //while(a!=NR){
	
  
  return 0;
}