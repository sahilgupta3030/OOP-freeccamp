#include <iostream>
using namespace std;

// Default Constructor...

class wall
{
private:
    int len, br, area;

public:
    wall()
    {
        len = 5;
        br = 6;
        area = len * br;
        cout << "Length is: " << len << " and the Braedth is: " << br << " & the Area is: " << area << endl;
    }
};

int main()
{
    wall wall1, wall2, falana, dimakana;

    return 0;
}