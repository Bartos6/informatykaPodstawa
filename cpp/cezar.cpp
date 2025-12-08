#include <iostream>

using namespace std;

int main()
{
    int klucz = 3;  // klucz - o ile będziemy przesuwać litery w alfabecie
    char szyfr;     // będzie przechowywać zaszyfrowaną literke (zmienna pomocnicza na później)  
    
    string napis;   //napis który szyfrujemy (małe litery)
    cout<<"Podaj napis: ";
    cin>>napis;
    
    //pętla przechodząca po każdej literce napisu
    int i = 0;
    while (i<napis.size()){
        
        szyfr = napis[i] + klucz; // przesuwamy litere o "klucz" miejsc
        
        if(szyfr > 'z'){
            szyfr -= 26;  // jeśli skończy nam sie alfabet musimy go zapętlić, czyli cofnąć się do początku (alfabet ma 26 liter)
        }
        
        cout<<szyfr;   // wypisujemy zaszyfrowaną literę
        
        i++;    // licznik pętli
    }


    return 0;
}
