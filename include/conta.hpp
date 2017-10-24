#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cstdlib> 

using namespace std;
class Conta
{
private:
	string titular;	
	string cpf;
	string agencia;
	string numero;
	string status;
	float saldo;
	float limite;
	
public:
	Conta() = default;
	//~Conta();

	void setTitular(string titular){this->titular = titular;}
	string getTitular(){return this->titular;}

	void setCPF(string cpf){this->cpf = cpf;}
	string getCPF(){return this->cpf;}	
	
	void setAgencia(string agencia){this->agencia = agencia;}
	string getAgencia(){return this->agencia;}

	void setNumero(string numero){this->numero = numero;}
	string getNumero(){return this->numero;}

	void setStatus(string status){this->status = status;}
	string getStatus(){return this->status;}

	void setSaldo(float saldo){this->saldo = saldo;}
	float getSaldo(){return this->saldo;}

	void setLimite(float limite){this->limite = limite;}
	float getLimite(){return this->limite;}
};

class CadastroConta {
private:
  vector<Conta*> lista;

public:
  CadastroConta();
  //~CadastroConta();
  void criarConta(); //inserir func
  void buscaConta(std::string numero);
  //void transferencia(string::numero); //saque, deposito, contas
  void imprimirConta();
  //void escrever(ostream& out) const;
 
  void salvarDados();
  void atualizarDados();
  void carregarDados();
};

//ostream& operator<<(ostream& out, const CadastroConta& a);

#endif /* CONTA_HPP */
