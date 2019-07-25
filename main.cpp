#include <iostream>
#include <fstream>
using namespace std;
#include "textToMorse.h"

/*
    . = dot
    - = dash
*/

void pressEnter();
void spacing();

int main() // https://morsecode.scphillips.com/translator.html - decrypt morse code to audio
{
    string test;
    cout << "Please enter the string you want to convert, no special characters\n>>>    ";
    getline(cin, test);
    cout << TextToMorseCode(test) << endl;
    cout << endl << endl << endl;
    pressEnter();
    return 0;
}

void pressEnter(){
    cout << "press enter to continue.." << endl;
    cin.get();
}
void spacing(){
    for(int x = 0; x < 100; x++){
        cout << endl;
    }
}
