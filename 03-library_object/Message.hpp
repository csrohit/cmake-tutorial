#pragma once

#include <cstdio>
#include <string>
#include <iosfwd>

using namespace std;

class Message
{

private:
    string message_;

public:
    Message(const std::string &m) : message_(m) {}
    ~Message();

    friend ostream &operator<<(ostream &os, Message &m)
    {
        return m.printMessage(os);
    }

    ostream &printMessage(ostream &os);
};
