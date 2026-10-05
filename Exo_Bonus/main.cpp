#include <iostream>

using namespace std;

int main()
{

	// Bonus 1


	int lifeMax;
	int lifeActualy;
	cout << "Hp maximum ?" << endl << "-> ";
	cin >> lifeMax;

	cout << "HP actuel ? " << endl << "-> ";
	cin >> lifeActualy;
	int printLife = lifeMax / 10;
	cout << "[";
	for (int i = 0; i < lifeMax; i = i + printLife)
	{
		if (i <= lifeActualy)
			cout << "#";
		if (i > lifeActualy)
			cout << "-";
	}
	cout << "]";

	return 0;
}