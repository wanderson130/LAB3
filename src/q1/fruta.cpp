#include "../include/q1/fruta.h"

#include <string>
#include <iomanip>
using std::setfill;
using std::setw;
using std::string;

Fruta::Fruta(){
//const padrao
}

Fruta::Fruta(string _codigo, string _descricao, float _preco, string _data, short _validade){
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	data_lote = _data;
	validade = _validade;
}

Fruta::~Fruta(){
//destrutor
}

string Fruta::getDataLote(){
	return data_lote;
}

short Fruta::getValidade(){
	return validade;
}

void Fruta::setDataLote(string _data){
	data_lote = _data;
}

void Fruta::setValidade(short _validade){
	validade = _validade;
}
 
ostream& Fruta::print(ostream &o) const{
	  o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (' ') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << data_lote << " | " 
		<< setfill (' ') << setw (10) << validade;

	return o;
}
