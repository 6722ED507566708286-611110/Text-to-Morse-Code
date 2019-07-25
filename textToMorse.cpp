#include "textToMorse.h"

string ToLower(string x){
    string newSentence = "";
    for(int y = 0; y < x.size(); y++){
        newSentence += tolower(x[y]);
    }
    return newSentence;
}



string TextToMorseCode(string var){
    int SIZE = var.size();
    var = ToLower(var);

    string letter = "";
    string MorseRep = "";


    for(int y = 0; y < SIZE; y++){
        letter = var[y];
        for(int h = 0; h < tableSIZE; h++){
            if(letter == table[h]){
                MorseRep += tableToMorse[h] + " ";
                break;
            }
            else if(letter == " "){
                MorseRep += "|";
                break;
            }
        }
    }
    return MorseRep;
}
