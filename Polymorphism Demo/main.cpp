#include <iostream>

using namespace std;

class Car
{
public:
   virtual void start() = 0;      //Pure Virtual Function

    virtual void stop() = 0;      //Pure Virtual Function

};

class Innova : public Car
{
public:
    void start()
    {
        cout<<"-------Innova is Started--------"<<endl;
    }

    void stop()
    {
        cout<<"-------Innova is Stopped--------"<<endl;
    }
};

class Ford : public Car
{
    void start()
    {
        cout<<"-------Ford is Started----------"<<endl;
    }

    void stop()
    {
        cout<<"--------Ford is Stopped---------"<<endl;
    }
};

int main()
{
     Car *p = new Innova();
     p->start();
     p->stop();

     Car *q = new Ford();
     p->start();
     p->stop();

    return 0;
}
