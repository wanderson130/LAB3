#include "../include/q1/bebida.h"

#include <string>
#include <iomanip>
using std::setfill;
using std::setw;
using std::string;

/** Construtor para Classe Bebida */ 
Bebida::Bebida(){
//const padrao
}

/** Definição dos atributos de bebida */ 
Bebida::Bebida(string _codigo, string _descricao, float _preco, float _teor){
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	teor = _teor;
}

/** Destrutor para Classe Bebida */ 
Bebida::~Bebida(){
//destrutor
}

/** Getter para teor alcolico das bebidas */ 
float Bebida::getTeor(){
	return teor;
}

/** Setter para teor alcolico das bebidas */ 
void Bebida::setTeor(float _teor){
	teor = _teor;
}
  
/** Sobrecarga de operador em bebida */
ostream& Bebida::print(ostream &o) const{
	  o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (' ') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << teor;

	return o;
}
