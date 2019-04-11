# ClueGame

> CS 205 Final Project

> C++

# Classes

> 1.Room - Will
    
    - [x] study
    - [x] hall
    - [x] lounge
    - [x] library
    - [x] billard room
    - [x] conservatory
    - [x] dining room
    - [x] kitchen
    - [x] ballroom

> 2.Weapon

    - [ ] candlestick
    - [ ] knife
    - [ ] revolver
    - [ ] rope
    - [ ] wrench
  
> 3.Suspect - Will

    - [x] Colonel Mustard
    - [x] Ms. Scarlet
    - [x] Mrs. Peacock
    - [x] Mrs. White
    - [x] Professor Plum
    
    
> 4.Game Loop - Will

      - [x] Start game
      - [x] End game


> 5.Game Board


> 6.Game Board Square


# Gameplay

	1. Place character pawns in their corresponding boxes, place each weapon in a room then sort and shuffle rooms, weapons, and suspects
	
	2. Randomly select one room, weapon, and suspect and store in the "confidential" folder

	3. Shuffle together the remaining groups of cards and deal out the entire deck counter-clockwise to each player

	4. Play begins with Ms. Scarlet and proceeds clockwise

	5. On your turn, roll two six sided die, you can move any direction except diagonally

	6. You can't move onto a space you've already touched this turn

	7. Nor can you move onto another players space unless it is in a room

	8. When your pawn enters a room, you may make a suggestion by moving another pawn and a weapon into that room
	
	9. This suggests that this combination of room, weapon, and suspect is the crime

	10. Beginning clockwise from you, one at a time, a player that has a card included in your suggestion, must prove your suggestion false by secretly showing you one of the suggested cards from their hand

	12. Once one player does this, no other player needs to say or show anything about the suggestion

	11. You are only allowed to make room suggestions for the room you are currently in

	12. after you make a suggestion you may make a suggestion or end your turn

	13. if you start a turn in a room in a room another player moved you to for a suggestion on a previous turn you may skip rolling and moving if you like, and make a suggestion of your own

	14. once any player makes a suggestion in a room, that player must leave that room in order to make another suggestion

	15. if pawns block all doors to the room  you're currently in you're not allowed to leave

	16. the corner rooms on the board have secret passages, during your move instead of rolling dice you may simply travel to the opposite corner room

	17. during your turn you may make an accusation, tell everyone what your guess is and tell everyone what your guess is

	18. secretly look into the secret folder in the middle, if your guess is right, reveal the cards to everyone and you win

	19. if not, gameplay continues 

	20. move your pawn to the nearest room, you're not allowed to win and your turn is skipped

	21. you still reveal cards to suggestions, return the cards back to the secret folder
	
# freeGlut Graphics

> https://www.transmissionzero.co.uk/software/freeglut-devel/

* Merge bin, lib and include folders with folders of same name in MinGW(local machine)

[Requirements](https://docs.google.com/spreadsheets/d/1ti1WjbtKhvGzd9mszoxqClA6-e5JlTYFHJ9VQpGBHsY/edit?usp=sharing)
