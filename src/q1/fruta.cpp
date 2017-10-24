#include "../include/q1/fruta.h"

#include <string>
#include <iomanip>
using std::setfill;
using std::setw;
using std::string;

/** Construtor para Classe Fruta */ 
Fruta::Fruta(){
//const padrao
}

/** Definição dos atributos de fruta */ 
Fruta::Fruta(string _codigo, string _descricao, float _preco, string _data, short _validade){
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	data_lote = _data;
	validade = _validade;
}

/** Destrutor para Classe Fruta */ 
Fruta::~Fruta(){
//destrutor
}

/** Getter para data de lote */ 
string Fruta::getDataLote(){
	return data_lote;
}

/** Getter para data de validade */ 
short Fruta::getValidade(){
	return validade;
}

/** Setter para data de lote */ 
void Fruta::setDataLote(string _data){
	data_lote = _data;
}

/** Setter para data de validade */ 
void Fruta::setValidade(short _validade){
	validade = _validade;
}
 
/** Sobrecarga de operador em fruta */
ostream& Fruta::print(ostream &o) const{
	  o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (' ') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << data_lote << " | " 
		<< setfill (' ') << setw (10) << validade;

	return o;
}
