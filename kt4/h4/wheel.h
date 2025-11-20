#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class wheel {
private:
    int size;
    string type;

public:
    wheel(int s = 0, string t = "");

    int getSize() const;
    string getType() const;

    void setSize(int s);
    void setType(const string& t);

};

#endif // WHEEL_H
