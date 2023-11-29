#include<iostream>
using namespace std;
class hello
{
    public:
    void fun();
    void gun();

};
class Demo
{
    public: int i;
    private: int j;
    protected: int k;
    Demo(){
        i=10;
        j=20;
        k=30;
    }

    friend class hello;
};
//return_value class_name scope_resolution function_name
void hello  :: fun()
{
    Demo obj;
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";
    cout<<"value of k :"<<obj.k<<"\n";
}

void hello  :: gun()
{
    Demo obj;
    cout<<"value of i :"<<obj.i<<"\n";
    cout<<"value of j :"<<obj.j<<"\n";
    cout<<"value of k :"<<obj.k<<"\n";
}
int main()
{
    hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}
