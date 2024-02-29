
#include <iostream>   //HEADER FILES
using namespace std;
int main()
{ 
    int a,  b,  c;        //DECLARING THREE LOCAL VARIABLES
    cout<<"ENTER THREE VALUES:";  
    cin>>a>>b>>c;      //READS THREE VALUES SIMULTANEOUSLY
          if (a>b && a>c)      //ENTERS THE IF STATEMENT
                   cout<<"THE GREATEST IS :"<<a;
           if (b>a && b>c)
                   cout<<"THE GREATEST IS :"<<b;
            else
                    cout<<"THE GREATEST IS :"<<c;
    return 0;
}
