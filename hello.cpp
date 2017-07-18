#include<iostream>
using namespace std;

class hello{
int a;
int b;
public:
    hello(){
    a=23;
    b=45;
    }
void add(int a, int b){
int c=0;//local
this->a=a;
c=a+b;
cout<<c;
}
};

int main(){
    hello ob1;
    //hello ob2(2,3);


    //ob1.initialize(23,45);
    ob1.add(23,44);


cout<<"Hello";
return 0;
}
