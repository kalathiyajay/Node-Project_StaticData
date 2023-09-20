#include<iostream>
using namespace std;
class large{
    
    friend large add(large,large,large);
    public:
    int a,b;
    void setData()
    {
        cout<<"enter number as you wish:";
        cin>>a>>b;
    }
    friend large find(large l);
    
};
void getdata(large l)
{
    if(l.a>l.b)
    {
        cout<<"This Number Is Large:"<<l.a;
    }
    else
    {
        cout<<"This Number Is Large:"<<l.b;
    }
}
int main()
{
    large l;
    l.setData();
    getdata(l);
    
}