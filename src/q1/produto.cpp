#include "../include/q1/produto.h"

#include <iostream>
#include <string>
using std::string;

/** Construtor para Classe produto */ 
Produto::Produto(){
//construtor padrao
} 

/** Definição dos atributos de produto */ 
Produto::Produto(string _cod_barras, string _descricao, float _preco){
	cod_barras = _cod_barras;
	descricao = _descricao;
	preco = _preco; 
}

/** Destrutor para Classe produto */ 
Produto::~Produto(){
//destrutor
}

/** Getter para o codigo de barras */ 
string Produto::getCodBarras(){
	return cod_barras;
}
	
/** Getter para a descricao do produto */ 
string Produto::getDescricao(){
	return descricao;
}

/** Getter para o preço do produto */ 
double Produto::getPreco(){
	return preco;
}
	
/** Setter para o codigo de barras */ 
void Produto::setCodBarras(string _codigo){
	cod_barras = _codigo;
}

/** Setter para a descriçao do produto */ 
void Produto::setDescricao(std::string _descricao){
	descricao = _descricao;
}

/** Setter para o preço do produto */ 
void Produto::setPreco(double _preco){
	preco = _preco;
}

/** Sobrecarga do oporador << para main*/ 
std::ostream& operator<< (std::ostream &o, Produto const &p){
	return p.print(o);
}
