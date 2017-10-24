#include<iostream>
#include "conta.hpp"

int main (){
	CadastroConta nova;
	int opc;
	std::string nome;
	nova.carregarDados();
	
	do
	{
  		cout << "Sistema de " << endl;
  		cout << "(1) Criar Conta" << endl;
  		cout << "(2) Carregar dados existentes" << endl;
  		cout << "(3) Exibir Conta" << endl;
		cout << "(4) Buscar e remover funcionario por numero" << endl;
  		cout << "(0) Sair" << endl;
		cin >> opc;

 	    while(opc > 5 or opc < 0) 
		{
			cout << "Informe uma opção valida: ";
			cin >> opc;
		}
			system("clear");
			  switch (opc){
				case 1:
					nova.criarConta();
					cout << "\nVoltando ao Menu Funcionarios, Pressione Enter para continuar.\n";
					cin.ignore().get();
				  break;
				case 2:
				  	nova.carregarDados();
					cout << "\nDados Carregados\n";
					cout << "\nVoltando ao Menu Funcionarios, Pressione Enter para continuar.\n";
					cin.ignore().get();
				  break;
				case 3:
					nova.imprimirConta();
					cout << "\nVoltando ao Menu Funcionarios, Pressione Enter para continuar.\n";
					cin.ignore().get();
				  break;
				case 4:	
					cout << "\nBuscar conta por numero.\n";
					cin >> nome;
					nova.buscaConta(nome);
					cin.ignore().get();	
				  break;				
				case 0:
					exit(EXIT_SUCCESS);
				default:
					cout << "Valor invalido!" << endl;	
				}
	}while(opc != 0);	
}
