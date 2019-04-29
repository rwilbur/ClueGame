//
// Created by wilip on 4/5/2019.
//

#include "Suspect.h"

Suspect::Suspect(){}

Suspect::Suspect(SuspectType type){
    try{
        switch(type) {
            case Mustard:
                title = "Mustard";
                break;
            case Scarlet:
                title = "Scarlet";
                break;
            case Peacock:
                title = "Peacock";
                break;
            case White:
                title = "White";
                break;
            case Plum:
                title = "Plum";
                break;
        }
    } catch(const std::exception &exc) {
        std::cerr << exc.what();
    }
};

string Suspect::getTitle(){
    return title;
}

void Suspect::setTitle(string newTitle){
    title = newTitle;
}