//
// Created by wilip on 4/5/2019.
//

#include "Room.h"


Room::Room(RoomType type){
    try{
        switch(type) {
            case Ballroom:
                title = "Ballroom";
                break;
            case Study:
                title = "Study";
                break;
            case Hall:
                title = "Hall";
                break;
            case Lounge:
                title = "Lounge";
                break;
            case Library:
                title = "Library";
                break;
            case Billiard:
                title = "Billard Room";
                break;
            case Conservatory:
                title = "Conservatory";
                break;
            case Dining:
                title = "Dining Room";
                break;
            case Kitchen:
                title = "Kitchen";
                break;
        }
    } catch(exception& e) {
//        printf("An error occurred: %s\n", e);
    }
};

string Room::getTitle() const{
    return title;
}

void Room::setTitle(string newTitle) {
    title = newTitle;
}

bool Room::operator<(const Room& other) const
{
    return this->getTitle() < other.getTitle();
}