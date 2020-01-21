#ifndef _PCTYPE_H_
#define _PCTYPE_H_

#include <string>

enum class PCType {
    ORC,
    ELVES,
    DWARF,
    HUMAN
};

bool isPCType(const std::string &s);

PCType toPCType(const std::string &s);

#endif /*_PCTYPE_H_ */
