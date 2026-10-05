#include <iostream>

using namespace std;

int main()
{
	//4) Partage de pizzas

	int friends;
	int pizza;

	cout << "Combien de pizzas on ete commandees ? " << endl << "->";
	cin >> pizza;
	cout << "Combien d'amis sont presents ?" << endl << "->";
	cin >> friends;

	int parts_friands = pizza * 8 / friends;
	int parts_not_friands = pizza * 8 % friends;
	cout << parts_friands << " parts par personne, il reste " << parts_not_friands << "parts" << endl;
	return 0;
}