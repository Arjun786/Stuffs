#include<iostream>
using namespace std;
class ItemList{
static int total; //Class variable
public:
int count;
void count()
{
//count=0; //local variable
count=total++;
cout<<"localcount"<<count<<endl;
}
void show(){
cout<<total<<endl;
}
};
int ItemList::total;
int main(){
    ItemList l1,l2;
    l1.count();
    l2.count();
    l1.show();
    l2.show();

    }
