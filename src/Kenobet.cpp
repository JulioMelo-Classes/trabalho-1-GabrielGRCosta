#include "../include/Kenobet.h"
#include <random>
#include <iostream>

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

  int KenoBet::money(void){
    return m_wage;
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
		
	void KenoBet::reset( void ){
		set_of_numbers_type new_vector;
			m_spots = new_vector;
	}

	cash_type KenoBet::get_wage(const set_of_numbers_type & vetor) const{
		cash_type x;
		x=m_wage;
		int spot,hit;
		spot=m_spots.size();
		hit=vetor.size();
		switch(spot){
      case 1:
        if(hit == 0){
          x = 0;
        }
      
        if(hit == 1){
          x = 3 * x;
        }

      case 2:
        if(hit == 0){
          x = 0;
        }

      if(hit == 2){
        x = 9 * x;
      }

      case 3:
        if(hit == 0){
          x = 0;
        }
        
        if(hit == 2){
          x = 2 * x;
        }

        if(hit == 3){
          x = 16 * x;
        }
      
      case 4:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 2){
          x = 2 * x;
        }

        if(hit == 3){
          x = 6 * x;
        }

        if(hit == 4){
          x = 12 * x;
        }

      case 5:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 3){
          x = 3 * x;
        }

        if(hit == 4){
          x = 15 * x;
        }

        if(hit == 5){
          x = 50 * x;
        }

      case 6:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 3){
          x = 2 * x;
        }

        if(hit == 4){
          x = 3 * x;
        }

        if(hit == 5){
          x = 30 * x;
        }

        if(hit == 6){
          x = 75 * x;
        }

      case 7:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 2){
          x =  x / 2;
        }

        if(hit == 4){
          x = 6 * x;
        }

        if(hit == 5){
          x = 12 * x;
        }

        if(hit == 6){
          x = 36 * x;
        }

        if(hit == 7){
          x = 100 * x;
        }

      case 8:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 2){
          x =  x / 2;
        }

        if(hit == 4){
          x = 3 * x;
        }

        if(hit == 5){
          x = 6 * x;
        }

        if(hit == 6){
          x = 19 * x;
        }

        if(hit == 7){
          x = 90 * x;
        }

        if(hit == 8){
          x = 720 * x;
        }
      
      case 9:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = x / 2;
        }

        if(hit == 2){
          x =  x / 2;
        }

        if(hit == 4){
          x = 2 * x;
        }

        if(hit == 5){
          x = 4 * x;
        }

        if(hit == 6){
          x = 8 * x;
        }

        if(hit == 7){
          x = 20 * x;
        }

        if(hit == 8){
          x = 80 * x;
        }

        if(hit == 9){
          x = 1200 * x;
        }

      case 10:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x =  x / 2;
        }

        if(hit == 4){
          x = 2 * x;
        }

        if(hit == 5){
          x = 3 * x;
        }

        if(hit == 6){
          x = 5 * x;
        }

        if(hit == 7){
          x = 10 * x;
        }

        if(hit == 8){
          x = 30 * x;
        }

        if(hit == 9){
          x = 600 * x;
        }

        if(hit == 10){
          x = 1800 * x;
        }

      case 11:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x =  x / 2;
        }

        if(hit == 5){
          x = 2 * x;
        }

        if(hit == 6){
          x = 6 * x;
        }

        if(hit == 7){
          x = 15 * x;
        }

        if(hit == 8){
          x = 25 * x;
        }

        if(hit == 9){
          x = 180 * x;
        }

        if(hit == 10){
          x = 1000 * x;
        }

        if(hit == 11){
          x = 3000 * x;
        }
      
      case 12:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x = 0;
        }

        if(hit == 3){
          x =  x / 2;
        }

        if(hit == 5){
          x = 2 * x;
        }

        if(hit == 6){
          x = 4 * x;
        }

        if(hit == 7){
          x = 24 * x;
        }

        if(hit == 8){
          x = 72 * x;
        }

        if(hit == 9){
          x = 250 * x;
        }

        if(hit == 10){
          x = 500 * x;
        }

        if(hit == 11){
          x = 2000 * x;
        }

        if(hit == 12){
          x = 4000 * x;
        }

      case 13:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x = 0;
        }

        if(hit == 3){
          x =  x / 2;
        }

        if(hit == 4){
          x = x / 2;
        }

        if(hit == 5){
          x = 3 * x;
        }

        if(hit == 6){
          x = 4 * x;
        }

        if(hit == 7){
          x = 5 * x;
        }

        if(hit == 8){
          x = 20 * x;
        }

        if(hit == 9){
          x = 80 * x;
        }

        if(hit == 10){
          x = 240 * x;
        }

        if(hit == 11){
          x = 500 * x;
        }

        if(hit == 12){
          x = 3000 * x;
        }

        if(hit == 13){
          x = 6000 * x;
        }

      case 14:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x = 0;
        }

        if(hit == 3){
          x =  x / 2;
        }

        if(hit == 4){
          x = x / 2;
        }

        if(hit == 5){
          x = 2 * x;
        }

        if(hit == 6){
          x = 3 * x;
        }

        if(hit == 7){
          x = 5 * x;
        }

        if(hit == 8){
          x = 12 * x;
        }

        if(hit == 9){
          x = 50 * x;
        }

        if(hit == 10){
          x = 150 * x;
        }

        if(hit == 11){
          x = 500 * x;
        }

        if(hit == 12){
          x = 1000 * x;
        }

        if(hit == 13){
          x = 2000 * x;
        }

        if(hit == 14){
          x = 7500 * x;
        }
      
      case 15:
        if(hit == 0){
          x = 0;
        }

        if(hit == 1){
          x = 0;
        }

        if(hit == 2){
          x = 0;
        }

        if(hit == 3){
          x =  x / 2;
        }

        if(hit == 4){
          x = x / 2;
        }

        if(hit == 6){
          x = 2 * x;
        }

        if(hit == 7){
          x = 5 * x;
        }

        if(hit == 8){
          x = 15 * x;
        }

        if(hit == 9){
          x = 50 * x;
        }

        if(hit == 10){
          x = 150 * x;
        }

        if(hit == 11){
          x = 300 * x;
        }

        if(hit == 12){
          x = 600 * x;
        }

        if(hit == 13){
          x = 1200 * x;
        }

        if(hit == 14){
          x = 2500 * x;
        }

        if(hit == 15){
          x = 10000 * x;
        }
      
		}
		std::cout<<"jogo do bixo:"<<x<<std::endl;
		return x;
	}
			
	std::size_t KenoBet::size( void )const{
		return m_spots.size();
	} 

	set_of_numbers_type
	KenoBet::get_hits( void ) const{
		set_of_numbers_type apostas;
		set_of_numbers_type hits;
    std::random_device rd;
    std::mt19937 mt(rd());
     std::uniform_int_distribution<unsigned> distrib(1, 80);
    for( unsigned long j = 0; j < 20; ++j ){ 
			apostas.push_back(distrib(mt));
		}
		for(unsigned short int i=0; i<m_spots.size(); i++){
			for(int b=0; b<20; b++ ){	
				if(m_spots[i]== apostas[b]){
					hits.push_back(m_spots[i]);
				}
			}	
		}
		return hits;	
	}

	set_of_numbers_type KenoBet::get_spots( void ) const{
		for(int i=0; i<15 ; i++){
			std::cout<<m_spots[i];
			std::cout<<",";
		}
		return m_spots;
  }