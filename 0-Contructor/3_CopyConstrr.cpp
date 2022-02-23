#include <iostream>
using namespace std;

// Copy Constructor.....

class wall
{
private:
    float len, br, area;

public:
    wall(float lennn, float brrr)
    {
        len = lennn;
        br = brrr;
    }

    wall(wall &objektt)
    {
        len = objektt.len;
        br = objektt.br;
    }

    int CalArea()
    {
        return len * br;
    }
};

int main()
{
    wall PehliWall(6.2, 7.5);
    wall DusriWall = PehliWall;

    cout << "Areaaa of 1st wall: " << PehliWall.CalArea() << endl;
    cout << "Areaaa of 2nd wall: " << DusriWall.CalArea() << endl;
    return 0;
}
