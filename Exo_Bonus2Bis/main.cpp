#include <iostream>

using namespace std;

int main()
{
	// Bonus 2


	int premium;
	int number_Everyon_Article;
	int everyon_Price = 0;
	int price_Article;
	int number_Article;

	cout << "Premium ?" << endl << "->";
	cin >> premium;

	cout << "Nombre d'article ? " << endl << "-> ";
	cin >> number_Everyon_Article;



	for (int i = 1; i < number_Everyon_Article + 1; i++)
	{
		cout << "Prix de l'article " << i << " ?" << endl << "-> ";
		cin >> price_Article;
		cout << "Quantite de l'article " << i << " ?" << endl << "-> ";
		cin >> number_Article;

		everyon_Price = everyon_Price + (price_Article * number_Article);

	}

	if (premium == true && everyon_Price >= 50)
	{
		everyon_Price = everyon_Price * 0.90;
	}
	else if (everyon_Price >= 100)
	{
		everyon_Price = everyon_Price * 0.90;
	}

	cout << "Total a payer : " << everyon_Price << " $" << endl;
	return 0;
}