#ifndef ROUPA_H_
#define ROUPA_H_

#include "../include/q1/produto.h"
#include <ostream>
#include <string>
using std::string;
using std::ostream;

class Roupa : public Produto
{
	private:
		string marca;
		string sexo;
		string tamanho;

	public:
		Roupa();
		Roupa(string _codigo, string _descricao, float _preco, string _marca, string _sexo, string _tamanho);
		~Roupa();

	private:
		ostream& print(ostream &o) const;

	public:
		string getMarca();
		string getSexo();
		string getTamanho();

		void setMarca(string _marca);
		void setSexo(string _sexo);
		void setTamanho(string _tamanho);
};

#endif
