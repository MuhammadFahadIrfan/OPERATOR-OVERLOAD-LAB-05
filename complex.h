#include <iostream>
#include <string>
using namespace std;

class complex
{
public:
    complex()
    {
        this->real=0;
        this->imag=0;
    }
    complex(float real, float imag)
    {
        this->real=real;
        this->imag=imag;
    }
    complex(complex& clone)
    {
        this->real=clone.real;
        this->imag=clone.imag;
    }

    float getreal()
    {
        return this->real;
    }
    float getimag()
    {
        return this->imag;
    }

    void setreal(float real)
    {
        this->real=real;
    }
    void setimag(float imag)
    {
        this->imag=imag;
    }

    void display()
    {
        cout<<"R E A L:"<<this->real<<endl;
        cout<<"I M A G I N A R Y:"<<this->imag<<endl;
    }
    void operator =(const complex& z)
    {
        this->real=z.real;
        this->imag=z.imag;
    }

    complex operator + (complex z)
    {
        complex temp;
        temp.real=this->real+z.real;
        temp.imag=this->imag+z.imag;
        return temp;
    }

    complex operator - (complex z)
    {
        complex temp;
        temp.real=this->real-z.real;
        temp.imag=this->imag-z.imag;
        return temp;
    }

    bool operator >(complex& z)
    {
        if(this->real-z.real > 0 && this->imag-z.imag >0)
        {
            return true;
        }
        else
        { return false;
        }
    }

     bool operator <(complex& z)
    {
        if(this->real-z.real > 0 && this->imag-z.imag >0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
   /* complex(point& p)
    {
        this->real=p.getx();
        this->imag=p.gety();
    }*/




private:
    float real;
    float imag;



};

ostream& operator << (ostream& o,complex z)
{
    return o <<"("<<z.getreal()<<","<<z.getimag()<<")";
    }


