#include <iostream>
#include <string>
using namespace std;

class point
{
public:
    point()
    {
        this->x=0;
        this->y=0;

    }
    point(float x, float y)
    {
        this->x=x;
        this->y=y;
    }
    point (point& clone)
    {
        this->x=clone.x;
        this->y=clone.y;
    }

    float getx()
    {
        return this->x;

    }

    float gety()
    {
        return this->y;
    }

    void setx(float x)
    {
        this->x=x;
    }
    void sety(float y)
    {
        this->y=y;
    }

    void display()
    {
        cout<<"X : "<<this->x<<endl;
        cout<<"Y : "<<this->y<<endl;
    }
point                      //OPERATOR OVERLO BS :P





private:
    float x;
    float y;

};
ostream& operator <<(ostream& o ,point p)
{
    return o <<"("<<p.getx()<<","<<p.gety()<<")";
}
