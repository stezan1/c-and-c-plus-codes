#include<iostream>
using namespace std;
class counter
{
    static int count;
public:
    counter()
        {
            count++;
            cout<<"object number is : "<<count<<endl;
        }
};
int counter::count;
int main()
{

    cout <<"we are creating c1 object: "<<endl;
    counter c1;
    cout <<"we are creating c2 object: "<<endl;
    counter c2;
    return 0;
}
