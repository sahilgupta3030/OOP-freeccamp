#include <iostream>
using namespace std;

// Encapsulation – Calculate area of rectanglee

class rectangle
{
public:
    int len, br;

    rectangle(int Lenn, int Brr) : len(Lenn), br(Brr) {}

    int getArea()
    {
        return len * br;
    }
};
int main()
{
    rectangle rectangle1(8, 6);

    cout << "Thiss is the areaaa: " << rectangle1.getArea() << endl;

    return 0;
}
