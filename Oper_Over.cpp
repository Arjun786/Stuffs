#include<iostream>
using namespace std;

class Weight{
int kg,gms;
public:
    Weight()
    {
    kg=0;
    gms=0;
     }
    Weight(int k,int g)
    {
        kg=k;
        gms=g;
        }
        void display();

        Weight operator+(Weight x){
        Weight temp;
        temp.gms=gms+x.gms;
        temp.kg=temp.gms/1000;
        temp.gms=temp.gms%1000;
        temp.kg=temp.kg+kg+x.kg;
        return temp;
        }
        Weight operator++();// preincre
        Weight operator++(int a);
};
Weight Weight::operator++(){
kg+=2;
gms+=2;
return Weight(kg,gms);
}

Weight Weight::operator++(int a){
 int k=kg;
const int g=gms;
if(a==0){
        k++;
    kg++;
    gms++;
}
else{
    kg=kg+a;
    gms=gms+a;

}
return Weight(k,g);

}


void Weight::display(){

cout<<"In kgs: "<<kg<<"In gms: "<<gms<<endl;
}

int main(){

Weight ob;
ob.display();
Weight ob1(13,500);
Weight ob2(14,900),ob3;
ob3=ob1+ob2;
ob1.operator+(ob2);
ob3.display();
Weight ob4;
ob4=++ob1;
ob1.display();
ob4.display();
Weight ob5;
ob5=ob1++(ob5);
ob5.operator++(ob5);
ob1.display();
ob5.display();
return 0;
}
