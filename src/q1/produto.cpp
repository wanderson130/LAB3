#include "../include/q1/produto.h"

#include <iostream>
#include <string>
using std::string;


Produto::Produto(){
//construtor padrao
}

Produto::Produto(string _cod_barras, string _descricao, float _preco){
	cod_barras = _cod_barras;
	descricao = _descricao;
	preco = _preco; 
}

Produto::~Produto(){
//destrutor
}

string Produto::getCodBarras(){
	return cod_barras;
}
	
string Produto::getDescricao(){
	return descricao;
}

double Produto::getPreco(){
	return preco;
}
	
void Produto::setCodBarras(string _codigo){
	cod_barras = _codigo;
}

void Produto::setDescricao(std::string _descricao){
	descricao = _descricao;
}

void Produto::setPreco(double _preco){
	preco = _preco;
}

std::ostream& operator<< (std::ostream &o, Produto const &p){
	return p.print(o);
}
