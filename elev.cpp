#include <iostream>
using namespace std;
class Add
{
    private:
    //int a,b;
    int num[2];
    public:
   void setnum(int n1,int n2)
    {
        num1[0]=n1;
        num2[1]=n2;
    }
    int sum()
    {
        int Add::return num1[0] + num2[1];
    }
};
int main()
{
    int num1,num2;
    Add x;
   int n1,n2;
    std::cout<<"enter the value of a and b:"<<endl;
    cin>>n1>>n2;
    x.setnum(n1,n2);
    cout<<"sum:"<<x.sum()<<endl;
return 0;
}
