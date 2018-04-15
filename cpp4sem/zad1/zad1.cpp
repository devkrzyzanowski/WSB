/* Napisz zgodnie z zasadami programowania obiektowego program, kt�ry oblicza pole prostok�ta. Klasa powinna zawiera� trzy metody:
	czytaj_date() - umo�liwia wprowadzenie do programu warto�ci bok�w a i b z klawiatury. W programie nale�y przyj��, �e boki oraz zmienna pole s� typu float (rzeczywistego).
	przetworz_dane() - oblicza pole prostok�ta wed�ug wzoru pole = a*b.
	wyswietl_wynik - wy�wietla warto�ci bok�w ai b oraz zmiennej pole w okre�lonym formacie. Dla tych trzech zmiennych nale�y przyj�� format wy�wietlania ich na ekranie z dwoma miejscami po kropce.
*/

#include <iostream>
#include <iomanip>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class pole_prostokata {
	public : float a, b, pole;
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
};

pole_prostokata::czytaj_dane() {
	cout << "Program oblicza pole prostokata." << endl;
	cout << "Podaj bok a." << endl;
	cin >> a;
	cout << "Podaj bok b." << endl;
	cin >> b;
}
pole_prostokata::przetworz_dane() {
	pole = a*b;
}
pole_prostokata::wyswietl_wynik() {
	cout << "Pole prostokata o boku a = ";
	cout << fixed;
	cout << setprecision(2);
	cout << a << " i boku b = " << b;
	cout << " wynosi " << pole << " . " << endl;
}

int main(int argc, char** argv) {
	pole_prostokata pole;
	pole.czytaj_dane();
	pole.przetworz_dane();
	pole.wyswietl_wynik();
	getch();
}
