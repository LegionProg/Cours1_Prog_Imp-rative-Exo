#include <iostream>

using namespace std;

int main()
{
	/*int mod = 27 % 10; // = 7  (reviser);
	cout << mod;*/
	/*
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
			*/


			/*
						//2) Aire et périmètre d’un terrain de sport
			int a;
			int b;

			cout << "Quelle est la longueur du terrain ?" << endl << "->";
			cin >> a;
			cout << endl << "Quelle est la largeur ?" << endl << "->";
			cin >> b;

			cout << "Surface : " << a * b << "m2, perimetre : " << a * 2 + b * 2 << "m." << endl;
			*/



			/*				//3) Moyenne de notes
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
				*/

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


							/*
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

							*/


							/*
										// 5) Temps de jeu en heures, minutes, secondes

											int time;
				cout << "Combien de secondes de jeu au total ? " << endl << "-> ";
				cin >> time;

				int timeM = time / 60;

				int timeH = timeM / 60;

				// recalcule la bonne valeurde time M
				timeM = time / 60 - timeH * 60;


				int timeS = time - (timeH *60 + timeM)*60;
				cout << timeS << endl;
				cout << "Temps total : " << timeH << "h " << timeM << "min " << timeS << "s." << endl;


							*/
							/*

											//6) Compte à rebours

							int n;
						cout << "n ?" << endl << "-> ";
						cin >> n;
						int a = n;
						for (int i = 0; i < n+1; i++)
						{
							cout << a << " ";
							a--;
						}
							*/

							/*
										// 7) Afficher les entiers pairs

				int n;
				cout << "n ?" << endl << "-> ";
				cin >> n;
				int a = 0;

				if (n < 0)
					return 1;

				cout << "nombres pairs : ";
				for (int i = 0; i < n+1; i++)
				{
					if (i == a)
					{
						cout << i << " ";
						a = a + 2;
					}

				}


							*/

							/*
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


							*/

							/*
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



				for (int i = 1; i < number_Everyon_Article+1; i++)
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

				cout << "Total a payer : " << everyon_Price << " $"<< endl;

							*/

	return 0;
}