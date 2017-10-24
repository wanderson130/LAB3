#include "../include/q1/roupa.h"

#include <iomanip>
#include <string>
using std::setfill;
using std::setw;
using std::string;

/** Construtor para Classe roupa */ 
Roupa::Roupa(){
//const padrao
}

/** Definição dos atributos de roupa */ 
Roupa::Roupa(string _codigo, string _descricao, float _preco, string _marca, string _sexo, string _tamanho){
	cod_barras = _codigo;
	descricao = _descricao;
	preco = _preco;
	marca = _marca;
	sexo = _sexo;
	tamanho = _tamanho;
}

/** Destrutor para Classe roupa */ 
Roupa::~Roupa(){
//destrutor
}

/** Getter para a marca de roupa */ 
string Roupa::getMarca(){
	return marca;
}

/** Getter para sexo da roupa */ 
string Roupa::getSexo(){
	return sexo;
}

/** Getter para tamanho da roupa */ 
string Roupa::getTamanho(){
	return tamanho;
}

/** Setter para marca da roupa */ 
void Roupa::setMarca(string _marca){
	marca = _marca;
}

/** Setter para sexo da roupa */ 
void Roupa::setSexo(string _sexo){
	sexo = _sexo;
}

/** Setter para tamanho da roupa */ 
void Roupa::setTamanho(string _tamanho){
	tamanho = _tamanho;
}

/** Sobrecarga de operador em roupa */
ostream& Roupa::print(ostream &o) const{
	  o << setfill (' ') << setw (10) << cod_barras << " | " 
		<< setfill (' ') << setw (10) << descricao << " | " 
		<< setfill (' ') << setw (10) << preco << " | "
		<< setfill (' ') << setw (10) << marca << " | " 
		<< setfill (' ') << setw (10) << sexo << " | "
		<< setfill(' ') << setw (10) << tamanho;

	return o;
}
