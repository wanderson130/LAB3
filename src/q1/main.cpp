#include "../include/q1/produto.h"
#include "../include/q1/fruta.h"
#include "../include/q1/roupa.h"
#include "../include/q1/bebida.h"

#include <memory>
#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;

int main(int argc, char const *argv[])
{
	vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45", "Maca verde", 8.70, "01/10/2017", 18));
	lista.push_back(make_shared<Fruta>("001002004-44", "Laranja", 4.75, "23/09/2017", 15));
	lista.push_back(make_shared<Fruta>("001002005-11", "Limao verde", 2.30, "01/10/2017", 25));

	lista.push_back(make_shared<Roupa>("001983703-01", "Blusa", 10.00, "P", "M", "GG"));
	lista.push_back(make_shared<Roupa>("001662004-02", "Bermuda", 15.00, "P", "M", "G"));
	lista.push_back(make_shared<Roupa>("001782005-03", "Jeans", 35.00, "P", "M", "M"));
	
	lista.push_back(make_shared<Bebida>("001332323-01", "Vinho", 15.20, 22.00));
	lista.push_back(make_shared<Bebida>("001333233-02", "Saque", 20.00, 34.25));
	lista.push_back(make_shared<Bebida>("001334507-03", "Rum", 35.20, 50.35));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		cout << (**i) << endl;
	}

	return 0;
}
