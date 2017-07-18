#include<iostream>
using namespace std;

class FriendDemo{
private:
    int count;

public:
   friend void func(FriendDemo ob);
void Assign(int x);

};

void FriendDemo::Assign(int c){
count=c;
}
 void func(FriendDemo ob){

cout<<"Accessing private"<<ob.count;
}


int main()
{
FriendDemo ob;
ob.Assign(34);
func(ob);
return 0;
}
