/* Napisz zgodnie z zasadami programowania obiektowego program, który oblicza pierwsiatki równania kwadratowego ax^2 + bx + c = 0 z wykorzystaniem instrukcji wyboru switch ... case. Klasa powinna zawieraæ trzy metody:
czytaj_dane() - jest odpowiedzialna za wczytranie danych do programu oraz obs³u¿enie sytuacji, kiedy a = 0. Zmienne a, b oraz c to liczby rzeczywiste wprowadzane z klawiatury.
Przetworz_dane() - odpowiada za wykonnanie niezbêdnych obliczeñ.
wyswietl_wynik() - jest odpowiedzialna za pokazanie wyników na ekranie monitora. Dla zmiennych a, b, c , x1 oraz x2 nale¿y przyj¹æ format wyœwietlania ich z dwoma miejscami po kropce. */

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class trojmian {
	public : float a, b, c, delta, x1, x2;
	public : char liczba_pierwiastkow;
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
};

trojmian::czytaj_dane() {
	cout << "Program oblicza pierwiastki rownania kwadratowego" << endl;
	cout << "dla dowolnych wspolczynnikow a, b, c" << endl;
	cout << "Podaj a." << endl;
	cin >> a;
	
	if ( a == 0) {
		cout << "Niedozwolona wartosc wspolczynnika. Nacisnij dowolny klawisz." << endl;
		getch();
		exit(1);
	} else {
		cout << "Podaj b." << endl;
		cin >> b;
		cout << "Podaj c." << endl;
		cin >> c;
	}
}
trojmian::przetworz_dane() {
	delta = b*b-4*a*c;
	if (delta < 0) liczba_pierwiastkow = 0;
	if (delta == 0) liczba_pierwiastkow = 1;
	if (delta > 0) liczba_pierwiastkow = 2;
	
	switch (liczba_pierwiastkow) {
		case 1: x1 = -b/(2*a); break;
		case 2: {
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			break;
		}
	}
}
trojmian::wyswietl_wynik() {
	cout << "Dla wprowadzonych liczb:" << endl;
	cout << "a = " << a << " , " << endl;
	cout << "b = " << b << " , " << endl;
	cout << "c = " << c << " , " << endl;
	
	switch(liczba_pierwiastkow) {
		case 0: cout << "brak pierwiastkow rzeczywistych." << endl;
		case 1: cout << "trojmian ma jeden pierwiastek podwojny x1 = " << x1 << " . " << endl;
		case 2: {
			cout << "trojmian ma dwa pierwiastki : " << endl;
			cout << "x1 = " << x1 << " , " << endl;
			cout << "x2 = " << x2 << " . " << endl;
			break;
		}
	}
	
}

int main(int argc, char** argv) {
	trojmian trojmian1;
	cout << fixed << setprecision(2);
	trojmian1.czytaj_dane();
	trojmian1.przetworz_dane();
	trojmian1.wyswietl_wynik();
	getch();
}
