#include "../include/format.h"
#include <fstream>
#include <string>
using namespace std;
#include <iostream>
#include "../include/Kenobet.h"
#include <sstream>
#include <cstddef>

KenoBet formatar(char *argv[]){ 
	KenoBet format;
	int j=0;
	set_of_numbers_type vetor;
	format.arquivo1(argv[0]);
	format.arquivo2(argv[1]);
	ifstream text;
	stringstream text3;
	cash_type x;
	int h;
	text.open(argv[1]);
	if (!text.is_open()){
		cout<<">>>Lendo arquivo de apostas, por favor aguarde "<<endl;
		cout<<"--------------------------------------------"<<endl;
    cout<<"Arquivo não encontrado"<<endl;
		exit(1);
  }
	string text1;
	for(int i=0; i<3; i++){
		getline(text,text1);
		if(i==0){
			text3<<text1;
			text3>>x;
			format.set_wage(x);
		}
		else if(i==1){
			stringstream text4;
			text4<<text1;
			text4>>h;
			format.add_rounds(h);	
		}
		else{
			stringstream text5;
			text5<<text1;
  		int y;
			while(text5>>y){ 
				format.add_number(y);
        vetor.push_back(y);
				j++;
				if(j>15){
					cout<<">>>Lendo arquivo de apostas, por favor aguarde "<<endl;
					cout<<"--------------------------------------------"<<endl;
					cout<<"Quantidade de números na aposta superior a 15 números."<<endl;
          exit(1);
				}
			}
		}
		for(number_type i = 0; i < vetor.size(); i++){
      for(number_type k = 0; k < vetor.size(); k++){
        if(i != k){
          if(vetor[i] == vetor[k]){
					cout<<">>>Lendo arquivo de apostas, por favor aguarde "<<endl;
					cout<<"--------------------------------------------"<<endl;
					cout<<"números repetidos na aposta."<<endl;
          exit(1);
          }
        }
      }
    }
	}
	return format;
}
