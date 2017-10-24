#ifndef BEBIDA_H_
#define BEBIDA_H_

#include "../include/q1/produto.h"
#include <ostream>
#include <string>
using std::string;
using std::ostream;

class Bebida : public Produto
{
	public:
		Bebida();
		Bebida(string _codigo, string _descricao, float _preco, float _teor);
		~Bebida();

	private:
		float teor;

	public:
		float getTeor();
		void setTeor(float _teor);
	
	private:
		ostream& print(ostream &o) const;

};

#endif
