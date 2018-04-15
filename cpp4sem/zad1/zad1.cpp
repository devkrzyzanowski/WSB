/* Napisz zgodnie z zasadami programowania obiektowego program, który oblicza pole prostok¹ta. Klasa powinna zawieraæ trzy metody:
	czytaj_date() - umo¿liwia wprowadzenie do programu wartoœci boków a i b z klawiatury. W programie nale¿y przyj¹æ, ¿e boki oraz zmienna pole s¹ typu float (rzeczywistego).
	przetworz_dane() - oblicza pole prostok¹ta wed³ug wzoru pole = a*b.
	wyswietl_wynik - wyœwietla wartoœci boków ai b oraz zmiennej pole w okreœlonym formacie. Dla tych trzech zmiennych nale¿y przyj¹æ format wyœwietlania ich na ekranie z dwoma miejscami po kropce.
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
