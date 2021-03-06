# include <iostream>
# include <cstdlib>
# include <math.h>  // funkcje pow, M_PI, M_E, exp, log,
using namespace std;

enum { dodawanie, odejmowanie, mnozenie, dzielenie, kwadrat, szescian, potega, pierwiastek, pi, e, exponenta,  logarytm, tworca }; 
// enum - typ wyliczeniowy (przyporządkowuje od 0 i kolejno 1, 2, 3 itd- nie musi miec nazwy

int main() 
{
double liczba1; // float - liczba rzeczywista (z przecinkami)
double liczba2; 
int rodzaj_dzialania;// int - integer - liczba calkowita (bez przecinków)

cout << "\nWitaj w kalkulatorze, ktory pozwoli Ci wykonac kilka dzialan na 2 liczbach: \n\n";
cout << "Podaj 1 liczbe: ";
cin >> liczba1;
cout << endl; // endl i "\n" to ENTER (end line) - wpisujemy w sekcji z cout (wyjscia danych)

cout << "Podaj 2 liczbe: ";
cin >> liczba2;
cout << endl << endl;

cout << "Jakie dzialanie wykonac?  : [0]  - DODAWANIE" << endl;
cout << "                          : [1]  - ODEJMOWANIE" << endl;
cout << "                          : [2]  - MNOZENIE" << endl;
cout << "                          : [3]  - DZIELENIE" << endl;
cout << "                          : [4]  - KWADRAT LICZB" << endl;  
cout << "                          : [5]  - SZESCIAN LICZB" << endl; 
cout << "                          : [6]  - LICZBA 1 PODNIESIONA DO POTEGI LICZBY 2" << endl;
cout << "                          : [7]  - PIERWIASTEK KWADRATOWY OBU LICZB" << endl;
cout << "                          : [8]  - LICZBY POMNOZONE PRZEZ LICZBE Pi" << endl;
cout << "                          : [9]  - LICZBY POMNOZONE PRZEZ LICZBE e (EULERA)" << endl;
cout << "                          : [10]  - exp OBU LICZB (EXPONENTA - exp(x)=e^x)" << endl;
cout << "                          : [11] - LOGARYTM NATURALNY OBU LICZB" << endl;
cout << "_________________________________________________" << endl; 
cout << "                          : [12] - Autor programu" << endl; 
cout << endl << endl;

cin >> rodzaj_dzialania;
cout << endl << endl;
	
switch (rodzaj_dzialania) 
{
// ponizsze podstawowe dzialania na liczbach nie wymagają biblioteki math.h (#include <math.h>)
	case dodawanie: 	cout << "Suma liczb wynosi: " << liczba1 + liczba2 << endl; break;
	case odejmowanie: 	cout << "Roznica liczb wynosi: " << liczba1 - liczba2 << endl; break;
	case mnozenie: 		cout << "Iloczyn liczb wynosi: " << liczba1 * liczba2 << endl; break;
	case dzielenie: 	cout << "Iloraz liczb wynosi: " << liczba1 / liczba2 << endl; break;
// case dzielenie: cout << "Iloraz liczb wynosi: " << liczba1 / liczba2 << "," << liczba1 % liczba2 << endl; break;
// tak zapisal bym kod dla dzielenia gdybym uzyl liczb calkowitych int -  % - reszta dzielenia liczb calkowitych
	case kwadrat: 		cout << "Kwadrat 1 liczby (" << liczba1 << ") wynosi: " << liczba1 * liczba1<< endl;
				  		cout << "Kwadrat 2 liczby (" << liczba2 << ") wynosi: " << liczba2 * liczba2 << endl; break;
	case szescian: 		cout << "Szescian 1 liczby (" << liczba1 << ") wynosi: " << liczba1 * liczba1 * liczba1<< endl;
				   		cout << "Szescian 2 liczby (" << liczba2 << ") wynosi: " << liczba2 * liczba2 * liczba2<< endl; break;
// ponizsze dzialania na liczbach wymagają biblioteki math.h (#include <math.h>)
	case potega:	cout << "Liczba 1 (" << liczba1 << ") do potegi liczby 2 (" << liczba2 << ") wynosi: " << pow (liczba1, liczba2) << endl;
					cout << liczba1 << " do potegi " << liczba2 << " = " << pow (liczba1, liczba2) << endl; break;
	case pierwiastek: 	cout << "Pierwiastek kwadratowy 1 liczby (" << liczba1 << ") wynosi: " << sqrt (liczba1) << endl;
						cout << "Pierwiastek kwadratowy 2 liczby (" << liczba2 << ") wynosi: " << sqrt (liczba2) << endl; break;
/*	
Jeśli mamy potrzebę podnieść jakąkolwiek liczbę do dowolnej potęgi możemy to zrobić używając funkcji pow. 
Funkcja ta przyjmuje dwa parametry i zwraca wynik potęgowania. 
Pierwszym parametrem jest liczba, którą chcemy potęgować, drugim natomiast potęga do której chcemy wybraną liczbę podnieść.
pow( liczba, potega ). 
Jesli podasz np. liczby z duza iloscia miejsc po przecinku moze wyskoczyc w wyniku "#INF" - oznacza "infinite" - to ze
przekroczyles dokladnosc tych liczb i dla programu osiagnales nieskonczonosc.
*/
	case pi: 	cout << "Pierwsza liczba (" << liczba1 << ") razy Pi (" << M_PI << ") wynosi: " << liczba1 * M_PI << endl; // M_PI - stala obliczajac Pi
			 	cout << "Druga liczba (" << liczba2 << ") razy Pi (" << M_PI << ") wynosi: " << liczba2 * M_PI << endl; break;
	case e: 	cout << "Pierwsza liczba (" << liczba1 << ") razy e (" << M_E << ") wynosi: " << liczba1 * M_E << endl; // M_E - stala obliczajaca e
			 	cout << "Druga liczba (" << liczba2 << ") razy e (" << M_E << ") wynosi: " << liczba2 * M_E << endl; break;
	case exponenta: 	cout << "exp 1 liczby (" << liczba1 << ") wynosi: " << exp (liczba1) << endl;
						cout << "exp 2 liczby (" << liczba2<< ") wynosi: " << pow (M_E, liczba2) << endl; break;
/* 
Funkcje ekspotencjalna exp mozna obliczyc na dwa sposoby: exp (liczba1) oraz pow (M_E, liczba2) - czyli e do potegi liczba2 poniewaz exp(x)=e^x
funkcja wykładnicza exp(x) = e^x= pochodna d(e^x)/dx = całka (e^x) dx 
*/
	case logarytm: 	cout << "Logarytm naturalny 1 liczby (" << liczba1 << ") wynosi: " << log (liczba1) << endl;
					cout << "Logarytm naturalny 2 liczby (" << liczba2<< ") wynosi: " << log (liczba2) << endl; break;
	case tworca: 
			cout << "       _______ __ _______ _______ _______"<< endl;
			cout << "      /__  __// // _____// _____// ___  /"<< endl;
			cout << "        / /  / // /____ / /____ / /__/ /"<< endl;
			cout << "       / /  / // //_  // _____//   ___/"<< endl;
			cout << "      / /  / // /__/ // /____ / /\\ \\"<< endl;
			cout << "     /_/  /_//______//______//_/  \\_\\SOFT"<< endl;	  
}	
cout << endl << endl;	
	
	system ("pause");
	return 0;
}
