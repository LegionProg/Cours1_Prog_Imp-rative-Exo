#include <iostream>

using namespace std;

int main()
{
	//6) Compte à rebours

	int n;
	cout << "n ?" << endl << "-> ";
	cin >> n;
	int a = n;
	for (int i = 0; i < n + 1; i++)
	{
		cout << a << " ";
		a--;
	}
	return 0;
}