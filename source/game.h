#ifndef _GAME_H_
#define _GAME_H_
#include <string>
#include <iostream>
#include "dungeon.h"
#include "textdisplay.h"

enum class Direction;
enum class PCType;

class Game {
    Dungeon *dungeon;
    TextDisplay *display;
    std::string filename;

public:
    Game(std::string filename);
    ~Game();
    void play();
};

#endif
