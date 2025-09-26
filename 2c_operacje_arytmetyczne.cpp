#include <iostream>
using namespace std;

int main()
{
    //Zadanie 1. Kalkulator
    cout << "Zadanie 1" << endl;
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Roznica: " << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;
    cout << a << ":" << b << "=" << a / b << " r. " << a % b; //dodatkowo

    //Zadanie 2. Pole trójkąta 
    cout << endl << endl << "Zadanie 2" << endl;
    int podstawa, wysokosc;
    cout << "Podaj podstawe: ";
    cin >> podstawa;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    cout << "Pole: " << podstawa * wysokosc / 2;

    //Zadanie 3. Zamiana temperatur
    cout << endl << endl << "Zadanie 3" << endl;
    int cel, f;
    cout << "Podaj temperature w C: ";
    cin >> cel;

    cout << "Temperatura w F: " << 9 / 5 * cel + 32;

    //Zadanie 4. Podział czasu
    cout << endl << endl << "Zadanie 4" << endl;
    int t, h, m, s;
    cout << "Podaj czas: ";
    cin >> t;
    h = t / 3600;
    m = (t - h * 3600) / 60;
    s = t - h * 3600 - m * 60;

    cout << "Twoj czas to: " << h << "h " << m << "min " << s << "s";
        

        return 0;
}
