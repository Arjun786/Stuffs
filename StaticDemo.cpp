#include<iostream>
using namespace std;

class StaticDemo{
private:
    int count;
    static int scount;
public:

StaticDemo(){
    count=0;
count++;
scount++;
}

void Display()
{
cout<<"Non-static variable"<<count<<"\n";
cout<<"Static variable"<<scount<<"\n";
}
static void statmeth();
};

void StaticDemo::statmeth(){
cout<<"Count From stat method"<<scount<<endl;
}

int StaticDemo:: scount=0;

int main()
{
StaticDemo ob[3],k;
for(int i=0;i<3;i++)
{
ob[i].Display();
}

StaticDemo::statmeth();
ob[1].statmeth();
ob[2].statmeth();
ob[2].Display();
return 0;
}
