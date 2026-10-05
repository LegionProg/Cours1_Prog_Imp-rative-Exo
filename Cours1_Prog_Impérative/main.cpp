#include <iostream>
using namespace std;


int main()
{
	int answer = 5;
	cout << "Machine -> hello world" << endl;
	while (true)
	{
		 cout << "Machine -> What s'up ? " << endl << "Aide_Reponse -> 1 = Yes  || 0 = No" << endl;

		
		cin >> answer;
		if (answer == 1)
		{
			cout << "Utilisateur -> Yes" << endl;
			break;
		}
		else if (answer == 0)
		{
			cout << "Utilisateur -> No" << endl;
			break;
		}
		else
		{
			cout << "Machine -> La reponse n'est pas compris" << endl;
		}		
	}
	cout << "Machine -> Bye !!" << endl;

	return 0;
}
