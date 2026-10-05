#include <iostream>

using namespace std;

int main()
{


	//2) Aire et périmètre d’un terrain de sport
	int a;
	int b;

	cout << "Quelle est la longueur du terrain ?" << endl << "->";
	cin >> a;
	cout << endl << "Quelle est la largeur ?" << endl << "->";
	cin >> b;

	cout << "Surface : " << a * b << "m2, perimetre : " << a * 2 + b * 2 << "m." << endl;
	return 0;
}