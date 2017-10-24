#include "../include/q1/roupa.h"

#include <iomanip>
#include <string>
using std::setfill;
using std::setw;
using std::string;

Roupa::Roupa(){
//const padrao
}

Roupa::Roupa(string _codigo, string _descricao, float _preco, string _marca, string _sexo, string _tamanho){
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	marca = _marca;
	sexo = _sexo;
	tamanho = _tamanho;
}

Roupa::~Roupa(){
//destrutor
}

string Roupa::getMarca(){
	return marca;
}

string Roupa::getSexo(){
	return sexo;
}

string Roupa::getTamanho(){
	return tamanho;
}

void Roupa::setMarca(string _marca){
	marca = _marca;
}

void Roupa::setSexo(string _sexo){
	sexo = _sexo;
}

void Roupa::setTamanho(string _tamanho){
	tamanho = _tamanho;
}

ostream& Roupa::print(ostream &o) const{
	  o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (',') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << marca << " | " 
		<< setfill (' ') << setw (10) << sexo << " | "
		<< setfill(' ') << setw (10) << tamanho;

	return o;
}
