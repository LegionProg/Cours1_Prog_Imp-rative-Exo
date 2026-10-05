#include <iostream>

using namespace std;

int main()
{

	// 5) Temps de jeu en heures, minutes, secondes

	int time;
	cout << "Combien de secondes de jeu au total ? " << endl << "-> ";
	cin >> time;

	int timeM = time / 60;

	int timeH = timeM / 60;

	// recalcule la bonne valeurde time M
	timeM = time / 60 - timeH * 60;


	int timeS = time - (timeH * 60 + timeM) * 60;
	cout << timeS << endl;
	cout << "Temps total : " << timeH << "h " << timeM << "min " << timeS << "s." << endl;

	return 0;
}