//
// Created by wilip on 4/25/2019.
//

#include "GameBoardSquare.h"
#include "Shape.h"


GameBoardSquare::GameBoardSquare(bool containsPlayerVar, bool isRoomVar, std::string playerNameVar, std::string roomNameVar){
    containsPlayer = containsPlayerVar;
    isRoom = isRoomVar;
    playerName = playerNameVar;
    roomName = roomNameVar;
};

bool GameBoardSquare::getContainsPlayer(){
    return containsPlayer;
}

void GameBoardSquare::setContainsPlayer(std::string playerNameVar){
    containsPlayer = true;
    playerName = playerNameVar;
}

bool GameBoardSquare::getIsRoom(){
    return isRoom;
}

void GameBoardSquare::setIsRoom(std::string roomNameVal){
    isRoom = true;
    roomName = roomNameVal;
}

std::string GameBoardSquare::getRoomName(){
    return roomName;
};

void GameBoardSquare::setRoomName(std::string name){
    roomName = name;
};

std::string GameBoardSquare::getPlayerName(){
    return playerName;
};

void GameBoardSquare::setPlayerName(std::string name){
    playerName = name;
};

void GameBoardSquare::draw(int x, int y){

    Rectangles square;
    square.set_position(x,y);
    square.set_dimensions(26,26);
    if(roomName == "Study"){
        square.set_fill(1,0,0);
    }
    else if(roomName == "Library"){
        square.set_fill(0,1,0);
    }
    else if(roomName == "Billiard Room"){
        square.set_fill(0,0,1);
    }
    else if(roomName == "Conservatory"){
        square.set_fill(1,1,0);
    }
    else if(roomName == "Hall"){
        square.set_fill(1,0,1);
    }
    else if(roomName == "Ballroom"){
        square.set_fill(0,1,1);
    }
    else if(roomName == "Lounge"){
        square.set_fill(1,.5,.5);
    }
    else if(roomName == "Kitchen"){
        square.set_fill(.5,0,0);
    }
    else if(roomName == "Dining Room"){
        square.set_fill(.5,.2,.5);
    }else{
        square.set_fill(.2,.2,.2);
    }

    square.draw();

    //draw player on square.
    if(containsPlayer == true){
        Circle player;
        player.set_position(x+13,y+13);
        player.set_radius(12);
        if(playerName == "Mustard"){
            player.set_fill(.9,.7,.1);
        }
        else if(playerName == "Scarlet"){
            player.set_fill(.58,.05,.37);
        }
        else if(playerName == "Peacock"){
            player.set_fill(.04,.47,.36);
        }
        else if(playerName == "White"){
            player.set_fill(1,1,1);
        }
        else if(playerName == "Plum"){
            player.set_fill(.18,.1,.5);
        }
        player.draw();
    }

}