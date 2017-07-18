#include<iostream>
#include<cstring>
using namespace std;
#include<conio.h>


int main()
{
int i;
char pwd[5];
for(int i=0;i<4;i++)
{
    pwd[i]=getch();
cout<<"*";
}
if(strcmp(pwd,"kaya")==0)
    cout<<"correct";
else
    cout<<"wrong";
return 0;
}

