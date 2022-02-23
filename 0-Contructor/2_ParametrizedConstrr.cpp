#include <iostream>
using namespace std;

// Parametrized Constructor....

class wall
{
private:
    float len, br, area;

public:
    wall(float Length, float Brdth)
    {
        len = Length, br = Brdth;
        cout << "The length and braedth respectively are: " << Length << " , " << Brdth << endl;
    }

    float CalArea()
    {
        return len*br;
    }
};

int main()
{
    wall PehliWall(6, 7);
    wall DusriWall = wall(4, 8);

    cout << "The areas respectively: " << endl;
    PehliWall.CalArea();
    cout << endl;
    DusriWall.CalArea();
    cout << endl;

    return 0;
}