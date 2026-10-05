#include <iostream>

using namespace std;

int main()
{

	// 7) Afficher les entiers pairs

	int n;
	cout << "n ?" << endl << "-> ";
	cin >> n;
	int a = 0;

	if (n < 0)
		return 1;

	cout << "nombres pairs : ";
	for (int i = 0; i < n + 1; i++)
	{
		if (i == a)
		{
			cout << i << " ";
			a = a + 2;
		}

	}
	return 0;
}