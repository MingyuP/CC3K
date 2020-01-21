#ifndef _DIRECTION_H_
#define _DIRECTION_H_

#include <string>

enum class Direction {
    NO,
    SO,
    EA,
    WE,
    NE,
    NW,
    SE,
    SW
};

bool isDirection(const std::string &s);

Direction toDirection(const std::string &s);

std::string toString(Direction d);


#endif /*_DIRECTION_H_ */
