
#include<iostream>
using namespace std;
class Point{
public:
    int x;
    int y;
    /*Point(){
    cout<<"Point called";
    }*/
    /*Point(int a, int b){
    x=a;
    y=b;
    }
    Point(Point& p1){
    x=p1.x;
    y=p1.y;
    }
    void display(){
    cout<<"x is"<<x;
    cout<<"y is"<<y;
    }
    ~Point(){
    cout<<"Destructor called"<<endl;
    }*/

};

class Derived:public Point{
    public:
    /*Derived(int a,int b){
    x=a;
    y=b;
    }*/
    Derived(){
    cout<<"derived";
    }

};

int main()
{
//Derived ob(2,5);
Derived ob1;
//ob1.display();
}
