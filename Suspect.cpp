//
// Created by wilip on 4/5/2019.
//

#include "Suspect.h"


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
    } catch(exception& e) {
//        printf("An error occurred: %s\n", e);
    }
};

string Suspect::getTitle() const{
    return title;
}

void Suspect::setTitle(string newTitle){
    title = newTitle;
}

bool Suspect::operator<(const Suspect& other) const
{
    return this->getTitle() < other.getTitle();
}