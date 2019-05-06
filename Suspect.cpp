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
    } catch (int &e) {
        cout << "An exception occurred in Suspect constructor. Exception: " << e << '\n';
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