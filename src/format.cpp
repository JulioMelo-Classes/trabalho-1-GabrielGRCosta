#include "../include/format.h"
#include <fstream>
#include <string>
using namespace std;
#include <iostream>
#include "../include/Kenobet.h"
#include <sstream>

KenoBet formatar(char *argv[]){ 
	KenoBet format;
	ifstream text; 
	stringstream text3;//
	cash_type x;
	int h;
	text.open(argv[1]);
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
			std::cout<<"rounds:"<<h<<std::endl;	
		}
		else{
			stringstream text5;
			text5<<text1;
  		int y;
			while(text5>>y){ 
				format.add_number(y);
			}
		}
	}
	return format;
}