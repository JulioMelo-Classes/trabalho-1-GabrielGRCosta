#ifndef KENOBET_H
#define KENOBET_H
#include <vector>
#include <iostream>
#include <sstream>


#define number_type  unsigned short int //<! tipo de dados para um keno hit.
#define cash_type  float //<! Define o tipo de créditos no jogo.
#define set_of_numbers_type  std::vector< number_type >

class KenoBet {
    public:
        //! Cria um Keno Bet vazio.
        KenoBet();

        /*! adiciona um numero na aposta do jogador somente se o número já não estiver lá.
            @param spot_ O número que desejamos incluir na aposta.
            @return T(true) se o número escolhido foi inserido com sucesso ; F(false) se não der certo. */
        bool add_number( number_type spot_ );
        /*! Define o montante de dinheiro que o jogador está apostando.
            @param wage_ Os créditos.
            @return True Se nós temos créditos acima de zero; false se for igual ou abaixo de zero. */
        bool set_wage( cash_type wage_ );	

				
        /*! Resete uma aposta num estado vazio.
         */
        void reset( void );
				/*! adiciona o número de rounds da aposta.
						@param a o número de rounds.
         */
				void add_rounds(int a);
				/*! Faz a interface do jogo.
         */
        void Interface(void);
				/*! armazena o primeiro nome do arquivo passado.
						@param *a o nome do arquivo1.
         */
				void arquivo1(char *a);
				/*!  armazena o segundo nome do arquivo passado.
						@param *a o nome do arquivo2.
         */
				void arquivo2(char *a);
				/*! armazena o número de rounds em uma váriavel que pode ser usada fora do KenoBet.h .
						@return o número de rounds. */
				int rounds(void);
				/*! Valida se o arquivo passado com os dados da aposta segue os parametros definidos.
						@return 1 se o arquivo está válido; 0 se o arquivo é inválido.
         */
				int validar(void);
        /*! Recupera os créditos que o jogador ganhou na aposta.
            @return Os créditos que o jogador ganhou. */
        cash_type get_wage( void ) ;
				
        /*! Retorna o tamanho do vetor/ a quantidade de números apostada pelo jogador.
            @return Quantidade de números apostada. */
        std::size_t size( void )const;

        /*! Determina quantos números apostados foram acertados.
            @param hits_ Lista de números randomicamente escolhida pelo computador.
            @return Um vetor com a lista dos números acertados. */
        set_of_numbers_type
        get_hits( void ) ;

        /*! Retorna um vector< spot_type > com os números apostados pelo jogador.
            @return O vector< spot_type > com os números apostados pelo jogador. */
        set_of_numbers_type get_spots(void ) const;
				/*! Cria e retorna um vector< spot_type > com números  aleatorios escolhidos pelo computador.
            @return O vector< spot_type > com os números escolhidos pelo computador. */
				set_of_numbers_type randoms_spots(void ) ;

    private:
        set_of_numbers_type m_spots;  //<! numeros da aposta
        cash_type m_wage;             //<! dinheiro da aposta
				int m_rounds;									//<! rounds da aposta
				char* name1;									//<! nome do arquivo1
				char* name2;									//<! nome do arquivo2
				set_of_numbers_type randomico;		//<! vetor de números randomicos
				set_of_numbers_type hits;     //<! vetor com números acertados
				cash_type aposta[15][16]={0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0.5,2,6,12,0,0,0,0,0,0,0,0,0,0,0,0,0.5,1,3,15,50,0,0,0,0,0,0,0,0,0,0,0,0.5,1,2,3,30,75,0,0,0,0,0,0,0,0,0,0,0.5,0.5,1,6,12,36,100,0,0,0,0,0,0,0,0,0,0.5,0.5,1,3,6,19,90,720,0,0,0,0,0,0,0,0,0.5,0.5,1,2,4,8,20,80,1200,0,0,0,0,0,0,0,0,0.5,1,2,3,5,10,30,600,1800,0,0,0,0,0,0,0,0.5,1,1,2,6,15,25,180,1000,3000,0,0,0,0,0,0,0,0.5,1,2,4,24,72,250,500,2000,4000,0,0,0,0,0,0,0.5,0.5,3,4,5,20,80,240,500,3000,6000,0,0,0,0,0,0.5,0.5,2,3,5,12,50,150,500,1000,2000,7500,0,0,0,0,0.5,0.5,1,2,5,15,50,150,300,600,1200,2500,10000};
				cash_type moneyf=0; //<! matriz da tabela de retorno
};

#endif