#ifndef FRUTA_H_
#define FRUTA_H_

#include "../include/q1/produto.h"
#include <ostream>
#include <string>
using std::string;
using std::ostream;

class Fruta : public Produto
{
	public:
		Fruta();
		Fruta(string _codigo, string _descricao, float _preco, string _data, short _validade);
		~Fruta();
	
	private:
		string data_lote;
		short validade;

	public:
		// getters
		string getDataLote();
		short getValidade();
		// setters
		void setDataLote(string _data);
		void setValidade(short _validade);
	
	private:
		ostream& print(ostream &o) const;	
};

#endif
