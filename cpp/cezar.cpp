#include <iostream>
using namespace std;

int main()
{
    
    int klucz = 3;  // klucz - o ile będziemy przesuwać litery w alfabecie
    
    string napis;   //napis który szyfrujemy (WIELKIE LITERY)
    cout<<"Podaj napis: ";
    cin>>napis;
    
    //pętla przechodząca po każdej literce napisu
    int i = 0;
    while (i<napis.size()){
        
        if (char(napis[i] + klucz) > 'Z'){      //sprawdzamy czy szyfr nie wychodzi poza alfabet (np. z + 3 = c)
            cout<<char(napis[i] + klucz - 26);  //zapetlamy alfabet czyli cofamy sie na pocztaek (alfabet ma 26 znakow)
        }else{
            cout<< char(napis[i] + klucz) ;     // przesuwamy litere o "klucz" miejsc
        }
         
        i++; // licznik pętli
    }
    
    
    
    
    return 0;
}
