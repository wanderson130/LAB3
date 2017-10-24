#ifndef PRODUTO_H_
#define PRODUTO_H_

#include <iostream>
#include <ostream>
#include <string>
using std::string;
using std::ostream;

class Produto
{
	public:
		Produto();
		Produto(string _cod_barras, string _descricao, float _preco);
		virtual ~Produto();
	
	protected:
		string cod_barras;	
		string descricao;
		double preco;

	private:
		virtual ostream& print(ostream&) const = 0;

	public:
		// getters
		string getCodBarras();
		string getDescricao();
		double getPreco();
		// setters
		void setCodBarras(string _cod_barras);
		void setDescricao(string _descricao);
		void setPreco(double _preco);
		//
		friend ostream& operator<< (ostream &o, Produto const &t);
};
 
#endif
