//
// Created by wilip on 4/5/2019.
//

#include "Room.h"

Room::Room(){};

Room::Room(Type type){
    try{
        switch(type) {
            case ballroom:
                title = "Ballroom";
                break;
            case study:
                title = "Study";
                break;
            case hall:
                title = "Hall";
                break;
            case lounge:
                title = "Lounge";
                break;
            case library:
                title = "Library";
                break;
            case billard:
                title = "Billard Room";
                break;
            case conservatory:
                title = "Conservatory";
                break;
            case dining:
                title = "Dining Room";
                break;
            case kitchen:
                title = "Kitchen";
                break;
        }
    } catch(exception& e) {
        printf("An error occurred: %s\n", e);
    }
};

string Room::getTitle(){
    return title;
}

void Room::setTitle(string newTitle) {
    title = newTitle;
}