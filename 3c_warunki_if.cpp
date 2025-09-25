#include <iostream>
using namespace std;

int main()
{
    //ZADANIE Stypendium 
    int a, b, c, sr;
    cout << "Podaj ocene1: ";
    cin >> a;
    cout << "Podaj ocene2: ";
    cin >> b;
    cout << "Podaj ocene3: ";
    cin >> c;

    sr = (a + b + c) / 3;
    if (sr >= 5) {
        cout << "Masz stypendium";
    }
    else {
        cout << "UCZ się więcej";
    }

    
    //ZADANIE Zakupy
    int s;
    cout << "Podaj cene soku: ";
    cin >> s;
    if (10 >= s) {
        cout << "Stac Cie";
    }
    else {
        cout << "Brakuje Ci: " << s - 10;
    }


    //ZADANIE Kahoot
    int p;
    cout << "Ile uzyskałeś procent z Kahoota: ";
    cin >> p;

    if (p < 50) {
        cout << "Minus";
    }
    else if (p > 80) {
        cout << "Plus";
    }
    else {
        cout << "Usmiech nauczyciela";
    }


    //ZADANIE PKP
    int cb, w, l;
    cout << "Podaj cene biletu: ";
    cin >> cb;
    cout << "Podaj wiek: ";
    cin >> w;
    cout << "Czy posiadasz legitymacje (1 - tak, 0 - nie): ";
    cin >> l;

    if (w < 26 and l == 1) {
        cout << "Cena: " << cb / 2;
    }
    else {
        cout << "Cena: " << cb;
    }


    return 0;
}
