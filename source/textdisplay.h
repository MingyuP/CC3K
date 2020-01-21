#ifndef _TEXTDISPLAY_H_
#define _TEXTDISPLAY_H_

#include "observer.h"
#include <string>
#include <vector>
#include <iostream>

class Dungeon;

class TextDisplay : public Observer {
    Dungeon *dungeon;
    // only store current level
    std::vector<std::vector<char>> display;
    std::string actions = " ";

    std::vector<std::string> welcome;
    std::vector<std::string> won;
    std::vector<std::string> lost;
    
    void updateDisplay();
    
    void printDisplay(std::ostream &out) const;
    
    void printWelcome(std::ostream &out) const;
    void printGame(std::ostream &out) const;
    void printSummary(std::ostream &out) const;
public:
    TextDisplay();
    void notify(const std::string &action) override;
    void setDungeon(Dungeon *dungeon);
    
    friend std::ostream &operator<<(std::ostream &out, TextDisplay &td);
};

#endif
