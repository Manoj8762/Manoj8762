#include<iostream>
using namespace std;
class Add           
{
    public:
    float sum(float a,float b);
};
float Add::sum(float a,float b)     //scope resolution operator
{
    return a+b;
}
int main()
{
    Add s;
    cout<<"sum of a+b is:"<<s.sum(5.9,6.6);
}