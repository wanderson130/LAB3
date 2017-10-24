#include "../include/q1/bebida.h"

#include <string>
#include <iomanip>
using std::setfill;
using std::setw;
using std::string;

Bebida::Bebida(){
//const padrao
}

Bebida::Bebida(string _codigo, string _descricao, float _preco, float _teor)
{
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	teor = _teor;
}

Bebida::~Bebida(){
//destrutor
}

float Bebida::getTeor()
{
	return teor;
}

void Bebida::setTeor(float _teor)
{
	teor = _teor;
}
 
ostream& Bebida::print(ostream &o) const
{
	o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (',') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << teor;

	return o;
}
