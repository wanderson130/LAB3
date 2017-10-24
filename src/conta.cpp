#include "conta.hpp"

/** Funcao que e responsavel pelo cadastro de contas nos sistema */
void CadastroConta::carregarDados() {

	lista.clear(); // Limpando o vector
	
	fstream myfile("contas.txt");
    
    std::string line, nome;
	int pos, conv, div, tam, i;
	//float saldo;	
	int cont{0};

	if(!myfile)	// Verifica se já existe um arquivo chamado contas
		return;
	
  	// Faz a contagem do numero de linhas de um aquivo
    while (!myfile.eof()) {
		getline (myfile, line);
		cont++;
  	}
  	cont--;
  	myfile.close();
  	div = cont / 5;
  	
  	myfile.open("contas.txt");

		for (i = 0; i < div ; i++) {
			
			Conta* informacoes = new Conta();

			//--- NOME DO TITULAR ---
			getline (myfile,line);
			pos =  line.find(":", 0);
			tam = pos + 1;
			nome = line.substr(tam, pos - tam);
			informacoes->setTitular(nome);
			
			// --- CPF ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos+1;
			nome = line.substr(tam,pos-tam);
			informacoes->setCPF(nome);

			// --- AGENCIA ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos+1;
			nome = line.substr(tam,pos-tam);
			informacoes->setAgencia(nome);

			//--- NUMERO DA CONTA ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos + 1;
			nome = line.substr(tam,pos-tam);
			conv = stoi(nome);
			informacoes->setNumero(nome);

			// --- STATUS ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos+1;
			nome = line.substr(tam,pos-tam);
			informacoes->setStatus(nome);

			// --- SALDO ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos+1;
			nome = line.substr(tam,pos-tam);
			conv = stoi(nome);
			informacoes->setSaldo(conv);

			// --- LIMITE ---
			getline (myfile,line);
			pos =  line.find(":",0);
			tam = pos+1;
			nome = line.substr(tam,pos-tam);
			conv = stoi(nome);
			informacoes->setLimite(conv);
			
			lista.push_back(informacoes);
	    }

	myfile.close(); 
}

/** Funcao que e carrega dados armazenados no arquivo.txt das contas */
void CadastroConta::atualizarDados() 
{
	ofstream myfile;
	myfile.open ("contas.txt", ios::out | ios::app | ios::binary);

	for( unsigned i = 0; i < lista.size(); i++ )
	{
	        myfile << "Nome:"  				  << lista[i]->getTitular() << endl;
	        myfile << "CPF:" 				  << lista[i]->getCPF() << endl;
		    myfile << "Agencia:" 				  << lista[i]->getAgencia() << endl;
	        myfile << "Numero:"	  << lista[i]->getNumero() << endl;
		    myfile << "Status:" 				  << lista[i]->getStatus() << endl;
	        myfile << "Saldo:" 			  << lista[i]->getSaldo() << endl;
			myfile << "Limite:" 			  << lista[i]->getLimite() << endl;
	}
	myfile.close();
}

/** Funcao que salva os dados das contas em um arquivo.txt */
void CadastroConta::salvarDados() 
{
	ofstream myfile ("contas.txt");
	if (myfile.is_open())
	{
		for( unsigned i = 0; i < lista.size(); i++ )
		{
	        myfile << "Nome:"  				  << lista[i]->getTitular() << endl;
	        myfile << "CPF:" 				  << lista[i]->getCPF() << endl;
		    myfile << "Agencia:" 				  << lista[i]->getAgencia() << endl;
	        myfile << "Numero:"	  << lista[i]->getNumero() << endl;
		    myfile << "Status:" 				  << lista[i]->getStatus() << endl;
	        myfile << "Saldo:" 			  << lista[i]->getSaldo() << endl;
			myfile << "Limite:" 			  << lista[i]->getLimite() << endl;
		}
	}
	myfile.close();
}

CadastroConta::CadastroConta() {
	//ofstream myfile ("contas.txt");

}

/** Funcao que permite a criacao de uma conta */
void CadastroConta::criarConta() {
  	//int b;
  	int i, quant;
	float n;
	cout << "Informe o número de contas que quer cadastrar:";
	cin >> quant;
	string nome;
    
    for(i = 0; i < quant; i++)
    {
  		Conta *informacoes = new Conta();
    		
    	cout << "Informe o nome do Titular: ";
    	cin.ignore();
    	getline(cin, nome);
    	informacoes->setTitular(nome);
    	
    	cout << "Infome o CPF do Titular: ";
    	cin.ignore();
    	getline(cin, nome);
    	informacoes->setCPF(nome);

		cout << "Infome a agencia: ";
    	cin.ignore();
    	getline(cin, nome);
    	informacoes->setAgencia(nome);		
				
		cout << "Infome o numero da conta: ";
    	cin.ignore();
    	getline(cin, nome);
    	informacoes->setNumero(nome);
		
		cout << "Infome se a conta e especial (1)Sim, (2)Não: ";
    	cin.ignore();
		/*cin >> b;
		if (b == 1){
    	nome = especial;
		else{
		nome = normal;
		} */	
		getline(cin, nome);
		informacoes->setStatus(nome);		

    	cout << "Infome o saldo inicial do Titular: ";
    	cin >> n;
    	informacoes->setSaldo(n);

		cout << "Infome o limite inicial do Titular: ";
    	cin >> n;
    	informacoes->setLimite(n);

    	cout << "\n";  	

		lista.push_back(informacoes);
		
	  }
	salvarDados();
}

/** Funcao que imprime vetor de conta */
void CadastroConta::imprimirConta() {	
	for(unsigned i = 0; i < lista.size(); i++)
		{
	        cout << setw(20) << left << "Nome:"  		<< "\t" << lista[i]->getTitular() << endl;
	        cout << setw(20) << left << "CPF:" 			<< "\t"	<< lista[i]->getCPF() << endl;
		    cout << setw(20) << left << "Agencia:" 		<< "\t" << lista[i]->getAgencia() << endl;
	        cout << setw(20) << left << "Numero:"	  	<< "\t"	<< lista[i]->getNumero() << endl;
		    cout << setw(20) << left << "Status:" 		<< "\t" << lista[i]->getStatus() << endl;
	        cout << setw(20) << left << "Saldo:" 		<< "\t" << lista[i]->getSaldo() << endl;
			cout << setw(20) << left << "Limite:" 		<< "\t" << lista[i]->getLimite() << endl;
			cout << setw(20) << left <<  "-----------------------------" << endl;  
		}
}

/** Funcao que busca conta pelo numero */
void CadastroConta::buscaConta(std::string numero)
{
	for(unsigned i = 0; i < lista.size(); i++)
	{
		if(numero == lista[i]->getNumero())
		{
			cout << "		 ------------------\n";
			cout << "		| Conta Encontrada |\n";
			cout << " 		 ------------------\n\n";
	        cout << setw(20) << left << "Nome:"  		<< "\t" << lista[i]->getTitular() << endl;
	        cout << setw(20) << left << "CPF:" 			<< "\t"	<< lista[i]->getCPF() << endl;
		    cout << setw(20) << left << "Agencia:" 		<< "\t" << lista[i]->getAgencia() << endl;
	        cout << setw(20) << left << "Numero:"	  	<< "\t"	<< lista[i]->getNumero() << endl;
		    cout << setw(20) << left << "Status:" 		<< "\t" << lista[i]->getStatus() << endl;
	        cout << setw(20) << left << "Saldo:" 		<< "\t" << lista[i]->getSaldo() << endl;
			cout << setw(20) << left << "Limite:" 		<< "\t" << lista[i]->getLimite() << endl;
			cout << setw(20) << left <<  "-----------------------------" << endl;  
			
			lista.erase(lista.begin()+i);
			atualizarDados();
			salvarDados();
			
			/* remove uma conta encontrado na posicao i */	
			cout << setw(20) << left <<  "Conta removida com sucesso" << endl;  
			break;

		}
	}
}
