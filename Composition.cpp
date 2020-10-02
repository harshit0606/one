#include <iostream>
using namespace std;

class center                            //subclass
{
    int x,y;

    public:
        center(int a, int b)
        {
            x = a;
            y = b;
        }

        void printCenter()
        {
            cout<<x<<" "<<y<<endl;
        }
};

class circle                            //owner class
{
    int rad;
    center c;

    public:
        circle(int x, int y, int z):c(x,y)
        {
            rad = z;
        }

        void printCircle()
        {
            c.printCenter();
            cout<<rad<<endl;
        }
};

int main()
{
    circle c1(10,15,5);
    c1.printCircle();
}