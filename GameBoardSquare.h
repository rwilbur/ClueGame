//
// Created by wilip on 4/25/2019.
//

#ifndef CLUEGAME_GAMEBOARDSQUARE_H
#define CLUEGAME_GAMEBOARDSQUARE_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class GameBoardSquare{
public:

    /**
     * Default Constructor
     */
    GameBoardSquare() = default;
    ~GameBoardSquare() = default;

    /**
     * Non-Default Constructor
     * @param containsPlayer
     * @param isRoom
     */
    GameBoardSquare(bool containsPlayer, bool isRoom, std::string playerNameVar, std::string roomNameVar);

    /**
     * True if a player is currently on this square
     */
    bool containsPlayer = false;


    /**
     * If containsPlayer is true, this is the player's name that is on this square
     */
    std::string playerName = "";

    /**
     * True if this squre is within a room on the board
     */
    bool isRoom = false;

    /**
     * If this square is within a room on the gameboard, this is the name of the room
     */
    std::string roomName = "";

    /**
     * Get containsPlayer
     * @return
     */
    bool getContainsPlayer();

    /**
     * Set containsPlayer
     * @param playerNameVar
     */
    void setContainsPlayer(std::string playerNameVar);

    /**
     * Get isRoom
     * @return
     */
    bool getIsRoom();

    /**
     * Set isRoom
     * @param roomNameVal
     */
    void setIsRoom(std::string roomNameVal);

    /**
     * Get name of the room this square is within
     * @return
     */
    std::string getRoomName();

    /**
     * Set name of the room this square is within
     * @param name
     */
    void setRoomName(std::string name);

    /**
     * Get the current player name
     * @return
     */
    std::string getPlayerName();

    /**
     * Set the current player name
     * @param name
     */
    void setPlayerName(std::string name);

};

#endif //CLUEGAME_GAMEBOARDSQUARE_H
