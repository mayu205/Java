#include<iostream>
using namespace std;
class hello
{
    public:
    void Display();
    
};
class Demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public :
      Demo()
       {
          i = 10;
          j = 20;
          k = 30;
       }

friend void hello::Display();
};
void hello::Display()
{
    Demo obj;
    cout<<"value of i: "<<obj.i<<"\n";
    cout<<"value of j: "<<obj.j<<"\n";
    cout<<"value of k: "<<obj.k<<"\n";

}

int main()
{
   hello hobj;
   hobj.Display();

    return 0;
}