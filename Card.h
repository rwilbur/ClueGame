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

    /**
     * Default constructor
     */
    Card() = default;
    ~Card() = default;

    /**
     * Gets the name of the card as a string
     * @return string: The card title
     */
    std::string getTitle() const;

    /**
     * Used for debugging
     * @param other
     * @return
     */
    bool operator<(const Card& other) const;

private:
    std::string title;
};

#endif //CLUEGAME_CARD_H
