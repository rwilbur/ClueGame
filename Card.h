//
// Created by wilip on 5/5/2019.
//

#ifndef CLUEGAME_CARD_H
#define CLUEGAME_CARD_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class Card {
public:
    std::string title;

    /**
     * Default constructor
     */
    Card() = default;
    ~Card() = default;

    /**
     * Constructor with title
     * @param title
     */
    Card(std::string title);

    /**
     * Gets the name of the card as a string
     * @return string: The card title
     */
    std::string getTitle() const;

};

#endif //CLUEGAME_CARD_H
