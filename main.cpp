#include <iostream>
#include "complex.h"
#include "point.h"
using namespace std;


int main()
{ complex c1(2,3);
complex c2(3,4);
complex c3;
complex c4;
point p(3,2);
p.display();
/*c4=(complex)p;
c4.display();*/

c3=c1+c2;
cout<<"A D D  B Y  O V E R L O A D I N G  O P E R A T O R :"<<endl<<c3<<endl;

c4=c1-c2;
cout<<"S U B T R A C T   B Y  O V E R L O A D I N G   O P E R A T O R : "<<endl<<c4<<endl;

if (c1>c2)
{
    cout<<"(>)C1 IS GREATER"<<endl;
}
else
{
    cout<<"(>)C1 IS LESSER"<<endl;
}

if (c1<c2)
{
    cout<<"(<)C1 IS lesser"<<endl;
}
else
{
    cout<<"(<)C2 IS greater"<<endl;
}

system ("pause");

}
