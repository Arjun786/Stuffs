#include<iostream>
using namespace std;
class A{
private:


public:
    static int b;
int a;

A(){
a=25;
b=45;
cout<<"b"<<b<<endl;
}
A(int a){
this->a=a;
}
void add(){
int c;
c=a+a;
}

void add(int a){
int c=this->a+a;
b=b+a;
cout<<"value of b is"<<b<<endl;
cout<<"value of a is"<<a<<endl;

}

 display(const *ob2){
    a=ob2->a;
cout<<"Called via copy"<<endl<<endl;
cout<<"a is"<<a<<endl;
}

static void stat_display()
{
cout<<"b in stat method"<<b<<endl;
}

~A(){
cout<<"I am called";
}
};

int A::b=0;
//int A::a=67;

int main()
{
A ob1,ob2;
ob1.add(200);
//cout<<ob1.add(200);

ob2.add(300);
A ob3=ob2;
ob3.display();

return 0;
}

