#include <iostream>

using namespace std;

int main()
{
	/*int mod = 27 % 10; // = 7  (reviser);
	cout << mod;*/
	
			// 1) Catégorie selon l’âge
			int age = 0;
			cout << "Machine -> rentrer votre age : " << endl << "Humain -> ";
			cin >> age;
			if (age >= 18)
			{
				cout << endl << "Machine -> Adulte" << endl << endl;
			}
			else if (age >= 12)
			{
				cout << endl << "Machine -> Adolecent" << endl << endl;
			}
			else if (age >= 3)
			{
				cout << endl << "Machine -> Enfant" << endl << endl;
			}
			else
			{
				cout << endl << "Machine -> Bebe" << endl << endl;
			}


	return 0;
}