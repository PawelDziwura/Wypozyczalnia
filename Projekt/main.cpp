#include "Sprzet.h"
#include "Wypozyczalnia.h"
#include "Uzytkownik.h"
#include "Rakieta.h"
#include "Pilka.h"
#include "Error.h"
#include <string>
#include <iostream>
#include <exception>
#include <stdlib.h>
using namespace std;

int main() {
	bool check(string TakNie, bool exit);

	Wypozyczalnia wypozyczalnia;
	string _wybor;
	char wybor;
	bool exit = false;
	string TakNie;

	cout << "Witamy w wypozyczalni." << endl;
	cout << "Co chcesz zrobic?" << endl << endl;

	while (exit == false) {
		system("cls");
		cout << "[1] Dodaj nowego uzytkownika." << endl;
		cout << "[2] Wyswietl liste uzytkownikow." << endl;
		cout << "[3] Zapisz liste uzyrkownikow do pliku." << endl;
		cout << "[4] Wypozycz sprzet uzytkownikowi." << endl;
		cout << "[5] Wyswielt liste sprzetu." << endl;
		cout << "[6] Dadaj nowy sprzet do wypozyczalni." << endl;
		cout << "--------------------------------------" << endl;
		cout << "[0] Wyjœcie z programu." << endl << endl;
		cout << "Decyzja: ";
		try {
			cin >> _wybor;
			if (_wybor.length() == 1) {
				wybor = _wybor[0];
				if (wybor < 48 || wybor > 54)
				{
					throw new Error("Niewprawidlowy wybor! Sproboj pomownie.");
				}
				else {
					system("cls");
					switch (wybor)
					{
					case '1':
					{
						wypozyczalnia.dodajUzytkownika();
						exit = check(TakNie, exit);
						break;
					}
					case '2':
					{
						wypozyczalnia.pokazUzytkownikow();
						exit = check(TakNie, exit);
						break;
					}
					case '3':
					{
						try {
							wypozyczalnia.zapiszUzytkownikow();
						}
						catch (Error* e) {
							cout << endl << e->getMessage() << endl;
							system("pause");
						}
						exit = check(TakNie, exit);
						break;
					}
					case '4':
					{
						try {
							if (wypozyczalnia.getLength() > 0)
								wypozyczalnia.wypozycz();
						}
						catch (Error* e) {
							cout << endl << e->getMessage() << endl;
							system("pause");
						}
						
						exit = check(TakNie, exit);
						break;
					}
					case '5':
					{
						try {
							wypozyczalnia.pokazListeSprzetu();
						}
						catch (Error* e) {
							cout << endl << e->getMessage() << endl;
							system("pause");
						}
						exit = check(TakNie, exit);
						break;
					}
					case '6':
					{
						wypozyczalnia.dodajSprzet();
						exit = check(TakNie, exit);
						break;
					}
					case '0':
					{
						cout << "Dziekujemy za skorzystanie z programu.";
						exit = true;
						break;
					}
					default:
					{
						break;
					}
					}
				}
			}
			else
				throw new Error("Niewprawidlowy wybor! Sproboj pomownie.");
		}
		catch (Error* e) {
			cout << endl << e->getMessage() << endl;
			system("pause");
		}
	}

	cin.get();
	cin.get();
}

bool check(string TakNie, bool exit) {
	for (;;) {
		cout << "Czy chcesz kontynuowac? (tak/nie)" << endl;
		cin >> TakNie;
		if (TakNie == "Tak" || TakNie == "tak" || TakNie == "TAK") {
			cout << endl;
			break;
		}
		else if (TakNie == "Nie" || TakNie == "nie" || TakNie == "NIE") {
			cout << "Dziekujemy za skorzystanie z programu.";
			exit = true;
			break;
		}
		else {
			cout << "Nie prawid³owy wybor! Sprobuj ponownie." << endl;
		}
	}
	return exit;
}