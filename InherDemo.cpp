#include<iostream>
using namespace std;

class A{
public:
    virtual void display(){
    cout<<"From Base";
        }
};

class B: public A{
public:
        void display(){
    cout<<"From Derived";
        }

};

int main(){
A ob1;
B ob2;
A *p;
p=&ob2;
p->display();
p=&ob1;
p->display();

return 0;
}
