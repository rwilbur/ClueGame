//
// Created by wilip on 4/25/2019.
//

#include "GameBoardSquare.h"


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