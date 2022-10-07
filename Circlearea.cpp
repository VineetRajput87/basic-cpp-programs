#include <iostream>
using namespace std;
class circle
{
private:
    int radius;
    float area;
    float circumf;
public:
    void get();
    void calarea();
    void calcircumf();
    void show();
};   
void circle ::get()
{
        cout<<"Enter the Radius of the Circle : ";
        cin>>radius;
}
void circle::calarea()
{
    area=3.14*radius*radius;
}
void circle :: calcircumf()
{
    circumf=2*3.14*radius;
}
void circle :: show()
{
    cout<<"The area is : "<<area<<endl;
    cout<<"The circumfarence is : "<<circumf;
}
int main()
{
    circle obj;
    obj.get();
    obj.calarea();
    obj.calcircumf();
    obj.show();
    return 0;    
}

