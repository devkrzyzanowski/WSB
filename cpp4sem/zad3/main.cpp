/* Napisz zgodnie z zasadami programowania obiektowego program, który w tablicy 10x10 umieszcza losowo na przek¹tnej liczby od 0 do 0, a poza ni¹ zera. Dodatkowo oblicza on sumê liczb znajduj¹cych siê na przek¹tnej. Klasa powinna zawieraæ trzy metody:
czytaj_dane() - umieszcza dane w tablicy;
przetworz_dane() - oblicza i wyswietla sume liczb znajdujacych sie na przekatnej;
wyswietl_wynik() - pokazuje zawartosc tablicy na ekranie monitora. */

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int rozmiar = 10;
int macierz[rozmiar][rozmiar];
class matrix {
	public : czytaj_dane(int macierz[rozmiar][rozmiar], int rozmiar);
	public : przetworz_dane(int macierz[rozmiar][rozmiar], int rozmiar);
	public : wyswietl_wynik(int macierz[rozmiar][rozmiar], int rozmiar);
};
matrix::czytaj_dane(int tablica[rozmiar][rozmiar], int rozmiar) {
	int i, j;
	
	srand(10);
	for (i = 0; i < rozmiar; i++){
		for (j = 0; j < rozmiar; j++){
			if (i == j){
				tablica[i][j] = rand() % 10;
			} else {
				tablica[i][j] = 0;
			}
		}
	}
}
matrix::przetworz_dane(int tablica[rozmiar][rozmiar], int rozmiar) {
	int i, suma = 0;
	for (i = 0; i < rozmiar; i++) {
		suma = suma + tablica[i][i];
	}
	cout << "Suma elementow na przekatnej wynosi " << suma << " . " << endl;
}
matrix:: wyswietl_wynik(int tablica[rozmiar][rozmiar], int rozmiar) {
	int i, j;
	cout << endl;
	cout << "Zawartosc tablicy: " << endl;
	cout << endl;
	for (i = 0; i < rozmiar; i++) {
		for (j = 0; j < rozmiar; j++) {
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char** argv) {
	int tablica[rozmiar][rozmiar];
	matrix matrix1;
	matrix1.czytaj_dane(tablica, rozmiar);
	matrix1.przetworz_dane(tablica, rozmiar);
	matrix1.wyswietl_wynik(tablica, rozmiar);
	getch();
}
