#include <iostream>

using namespace std;

int main()
{

	//3) Moyenne de notes
	float a;
	float b;
	float c;

	cout << "note 1 ?" << endl << "-> ";
	cin >> a;
	cout << "note 2 ?" << endl << "-> ";
	cin >> b;
	cout << "note 3 ?" << endl << "-> ";
	cin >> c;


	float d = a + b + c;
	cout << "Moyenne : " << d / 3;
	return 0;


	/*				//3) Moyenne de notes UP GRADE
	int number_Note;
	float note;
	float everyone_Note =0;

	cout << "entrer le nombre de note " << endl;
	cin >> number_Note;

	for (int i = 1; i < number_Note + 1; i++)
	{
		cout << "entrer la note " << i << endl;
		cin >> note;

		everyone_Note = everyone_Note + note;
	}

	float moyene = everyone_Note / number_Note;
	cout << "voici votre moyenne : " << moyene;
							*/
}