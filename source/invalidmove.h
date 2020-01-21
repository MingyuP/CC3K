#ifndef _INVALIDMOVE_H_
#define _INVALIDMOVE_H_

#include  <string>

class InvalidMove {
    std::string message;
  public:
    InvalidMove(std::string message);
    ~InvalidMove();
    std::string what();
};

#endif
