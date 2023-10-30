#include "Message.h"
#include <iostream>
#include <string>
using namespace std;



std::ostream &Message::printMessage(std::ostream &os) {
  os << "This is my very nice message: " << message_ <<  std::endl;
  return os;
}


Message::~Message()
{
}
