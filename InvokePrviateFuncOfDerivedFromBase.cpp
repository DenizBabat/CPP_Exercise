/******************************************************************************
 *                  babatman
*******************************************************************************/

#include <iostream>
#include <memory>

using namespace std;

class A {
   // protected:
    public:
     virtual void foo(){}
};

class B: public A{
    private:
    virtual void foo() override {std::cout << "Hello deniz";}
};

class C: public B{
    public:
    virtual void foo() override {
        A *a = new B;
        a->foo();
    }
};

int main()
{
    C c;
    
    c.foo();

    return 0;
}
