//
// Created by wilip on 4/5/2019.
//

#include "Suspect.h"

Suspect::Suspect(){}

Suspect::Suspect(SuspectType type){
    try{
        switch(type) {
            case Mustard:
                title = "Ballroom";
                break;
            case Scarlet:
                title = "Study";
                break;
            case Peacock:
                title = "Hall";
                break;
            case White:
                title = "Lounge";
                break;
            case Plum:
                title = "Library";
                break;
        }
    } catch(exception& e) {
        printf("An error occurred: %s\n", e);
    }
};

string Suspect::getTitle(){
    return title;
}

void Suspect::setTitle(string newTitle){
    title = newTitle;
}