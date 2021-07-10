#include "../include/Kenobet.h"
#include <random>
#include <iostream>
#include <sstream>
#include <string>

 KenoBet::KenoBet( ) : m_wage(0)
  { };
	
  bool KenoBet::add_number( number_type spot_ ){
		for(unsigned int i=0; i<m_spots.size(); i++){
			if(spot_ == m_spots[i]){
				return false;
			}
		}
		m_spots.push_back(spot_);
		return true;
	}

	void KenoBet::add_rounds(int a){
		m_rounds=a;
	}

	int KenoBet::rounds(void){
		int a;
		a=m_rounds;
		return a;
	}

	bool KenoBet::set_wage( cash_type wage_ ){ 
		if(wage_>0){
			m_wage = wage_;
			return true;
		}
		else{
			return false;
		}
	}

	/*void estranho(std::string caracter){
		std::stringstream p;
		getline(caracter,p);
		
	}*/


	void KenoBet::arquivo1(char *a){
		using namespace std;
		name1=a;
	}

	void KenoBet::arquivo2(char *a){
		using namespace std;
		name2=a;
	}
	
	void KenoBet::reset( void ){
		set_of_numbers_type new_vector1;
		set_of_numbers_type new_vector2;
		randomico = new_vector1;
		hits = new_vector2;
	}

	cash_type KenoBet::get_wage( void){
		cash_type x,l;
		x=m_wage/m_rounds;
		l = aposta[(m_spots.size())-1][hits.size()];
		x=x*l;
		moneyf+=x;
		return x;
	}
			
	std::size_t KenoBet::size( void )const{
		return m_spots.size();
	}

	set_of_numbers_type
	KenoBet::randoms_spots( void ) {
		
    int x = 0;
    int vdc = 0;
		number_type num;
		std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<unsigned> distrib(1, 80); 
		for(int i = 0; i < 100; i++){
      vdc = 0;
      num=distrib(mt);
			for(number_type k = 0; k < randomico.size(); k++){
        if(randomico[k] == num){
          vdc = 1;
          break;
        }
      }
      if(vdc == 0){
        randomico.push_back(num);
        x++;
      }
      if(x == 20){
        return randomico;
      }

    }
    return randomico;
	}	

	set_of_numbers_type
	KenoBet::get_hits( void ) {
		for(number_type i=0; i<m_spots.size(); i++){
			for(int b=0; b<20; b++ ){	
				if(m_spots[i]== randomico[b]){
					hits.push_back(m_spots[i]);
				}
			}	
		}
		/*for(number_type u=0; u<hits.size(); u++){
			std::cout<<hits[u];
			std::cout<<" ";
		}*/
		return hits;	
	}

		void KenoBet::Interface(void){
		using namespace std;
		cout<<">>>Lendo arquivo de apostas ["<<name1<<name2;
		cout<<"]";
		cout<<",por favor aguarde..."<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<">>>Aposta lida com sucesso!"<<endl;
		cout<<"Você apostará um total de $"<<m_wage;
		cout<<" créditos."<<endl;
		cout<<"Jogará um total de "<<m_rounds;
		cout<<" rodadas, apostando $"<<m_wage/m_rounds;
		cout<<" créditos por rodada"<<endl;
		cout<<"\n"<<endl;
		cout<<"Sua aposta tem "<<m_spots.size();
		cout<<" números eles são:";
		cout<<"[";
    int n = 1;
		for(unsigned short int i=0; i<m_spots.size(); i++){
			cout<<m_spots[i];
			cout<<" ";
		}
		cout<<"]"<<endl;
		cout<<"        ---------+----------"<<endl;
		cout<<"		Hits   |  Retorno "<<endl;
		for(number_type b=0; b<m_spots.size()+1; b++){
			cout<<"        ";
			cout<<b;
			cout<<"      |  ";
			cout<<aposta[m_spots.size()-1][b];
			cout<<"\n";
		}
		cout<<"		-----------------------------------------"<<endl;
		for(int c=1; c<m_rounds+1; c++){
			if(c!=1){
				randoms_spots();
				get_hits();
			}
			cout<<"		Esta é a rodada #"<<c;
			cout<<" de "<<m_rounds;
			cout<<" sua aposta é "<<m_wage/m_rounds;
			cout<<". Boa sorte!"<<endl;
			cout<<"		Os números sorteados são: [";
			for(number_type m=0; m<randomico.size(); m++){
				cout<<randomico[m];
				cout<<" ";
			}
			cout<<"]"<<endl;;
			cout<<"\n";
			cout<<"\n";
			cout<<"		Você acertou os números [";
			//cout<<c;
			//cout<<" ";
			for(number_type g=0; g<hits.size(); g++){
				cout<<hits[g];
				cout<<" ";
			}
			cout<<"], um total de "<<hits.size();
			cout<<" hit(s) de "<<m_spots.size()<<endl;
			cout<<"		Sua taxa de retorno é "<<aposta[(m_spots.size())-1][hits.size()];
			cout<<", assim você sai com: $"<<get_wage()<<endl;
			cout<<"		Você possui um total de: $"<< m_wage + moneyf - n*(m_wage / m_rounds);
      n++;
			cout<<" créditos."<<endl;
			cout<<"		----------------------------------------"<<endl;
			reset();
		}
		cout<<">>> Fim das rodadas!"<<endl;
		cout<<"-------------------------------------------------"<<endl;
		cout<<"\n";
		cout<<"\n";
		cout<<"======= Súmario ======="<<endl;
		cout<<">>>Você gastou um total de $"<<m_wage<<endl;
		cout<<"créditos"<<endl;
		if(m_wage<moneyf){
			cout<<">>>Hooray! você ganhou $"<<moneyf-m_wage;
			cout<<" créditos!"<<endl;
		}
		else{
			cout<<">>>uma pena! você perdeu $"<<moneyf-m_wage;
			cout<<" créditos!"<<endl;
		}
		cout<<">>>Você está saindo do jogo com um total de $"<<moneyf;
			cout<<" créditos!"<<endl;
	}

	set_of_numbers_type KenoBet::get_spots( void )const{
		return m_spots;
  }
