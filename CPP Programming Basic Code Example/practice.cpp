/**pointer**/
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<p<<endl;
    int b = 104;
    p=&b;
    cout<<p<<endl;
    return 0;
}

*/
/**swapping of two numbers**/
/*
#include<iostream>
using namespace std;
int main()
{
 int a = 10;
 int b = 19;
 int *p1=&a;
 int *p2=&b;
 *p1=*p1+*p2;
 *p2=*p1-*p2;
 *p1=*p1-*p2;
 cout<<*p1<<" "<<*p2<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<p<<endl;
    int b = 104;
    p=&b;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}
*/
/**switch and case**/
/*&
#include<iostream>
using namespace std;
int main(){

int a;
cin>>a;
switch(a){
case 1:
    cout<<"This is one";

case 2:
    cout<<"This is second";
    break;

default:
    cout<<"This is blank";



}



return 0;

}
*/
/*
#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

int fact(int n)
{
    if(n<0)
    {
        return -1;
    }
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}
*//*
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    //return a+b;
    cout<<(a+b)<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
   // cout<<sum(a,b)<<endl;
   sum(a,b);
    return 0;
}
*/
/**static variable**/
/*
#include<iostream>
using namespace std;
int func()
{
    static int i =0;
    static int j = 0;
    i++;
    j++;
    cout<<i<<""<<j<<endl;

}
int main()
{
    func();
    func();
    func();
    return 0;

}
*/
/**Array**/
/***
#include<iostream>
using namespace std;
int main()
{
     int arr[4]={1,3,4,5};
     for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";
        cout<<"Another approach"<<endl;
        for(int i:arr)
            cout<<i<<" ";
cout<<"Another approach"<<endl;
for(int a:arr)
    cout<<a<<endl;0
     return 0;
}
**/
/**
#include<iostream>
using namespace std;
void print(int arr[])
{
    int min=arr[0];
    for(int i = 0;i<3;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
        cout<<min<<endl;
        int max=arr[0];
        for(int i=0;i<3;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        cout<<max<<endl;
}


int main()
{
    int arr[]={1,2,3};
    int arr1[]={3,433,34};
    print(arr);
    cout<<endl;
    print(arr1);
    return 0;
}
**/
/**
#include<iostream>
using namespace std;
int main()
{
int a[2][2];
     a[0][0]=1;
     a[0][1]=2;
     a[1][0]=3;
    a[1][1]=4;
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          cout<<a[i][j]<<" ";

  }
   cout<<endl;
  }
    return 0;
}
**/

/********************namespace*********************/
/**
#include<iostream>
using namespace std;
namespace first{

void say(){
int a,b;
cout<<"First example of namespace"<<endl;
cin>>a>>b;
cout<<(a+b)<<endl;

}


}

namespace second {

void say(){
cout<<"Second example of namespace"<<endl;
int a,b;
cin>>a>>b;
cout<<(a+b)<<endl;
}

}
int main()
{
    first::say();
    second::say();
    return 0;
}
***/
/*
#include<iostream>
using namespace std;
namespace first{

void say(){
int a,b;
cout<<"First example of namespace"<<endl;
cin>>a>>b;
cout<<(a+b)<<endl;

}


}

namespace second {

void say(){
cout<<"Second example of namespace"<<endl;
int a,b;
cin>>a>>b;
cout<<(a+b)<<endl;
}

}
int main()
{
    first::say();
    second::say();
    return 0;
}
*/
/**************Using keyword**********/
/*
#include<iostream>
using namespace std;
namespace first{

void say(){
cout<<"First"<<endl;
}


}

namespace second{
void say()
{

    cout<<"Second"<<endl;
}


}
//using namespace first;
using namespace second;

int main()
{

   say();



}

*/
/***Exceptiong handling***********/
/*
#include<iostream>
using namespace std;
int div(int a,int b)
{
    if(b==0)
    {
        throw "Attempted to divide by zero";
    }
    return (a/b);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        try{
        cout<<div(a,b)<<endl;

        }
        catch(const char *e){
        cerr<<e<<endl;
        }
    }
}
//Another example of exception handling

*/
/*
#include<iostream>
using  namespace std;
namespace first{
void say()
{
    cout<<"First namespace"<<endl;
}


}
namespace second{
void say(){
cout<<"Second namespace"<<endl;


}

}
int main(){

first::say();
second::say();
return 0;

}
*/
/**
#include<iostream>
using namespace std;
namespace first{

int sum(int a,int b)
{

    cout<<(a+b)<<endl;
}



}


namespace second {

int sum(int a,int b)
{

    cout<<(a+b)<<endl;
}



}


int main()
{
    int a,b;
    cin>>a>>b;
   first::sum(3,4);
   second::sum(a,b);
    return 0;
}
**/
/*
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
}

*/
/*****************string********/
/*
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char key[]="mango";
    char buf[50];
    do{
        cout<<"What is my favorite fruit?";
    cin>>buf;
    }
    while(strcmp(key,buf)!=0);
    cout<<"Correct Answer"<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()

{

   int i = 1;
   do {
    cout<<i<<endl;
    i++;
   }
   while(i<1);



}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n){
case 1:
    cout<<"This is the first case"<<endl;

    break;
case 2:
    cout<<"This is the second"<<endl;
    break;
default:
    cout<<"Blank statement"<<endl;


    }
    return 0;
}
*/
/*

#include<iostream>
using namespace std;
void func(){
int i=0;
static int j;
i++;
j++;
cout<<i<<" "<<j<<endl;


}
int main()
{
    func();
    func();
    return 0;
}
*/
/*

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(; ;)
    {
        cout<<"Infinite for loop"<<endl;
    }
    return 0;
}
*/

/**************************vector**************/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;



}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,23};

    cout<<v.at(0)<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4};
    for(int i = 0;i<4;i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<v.front()<<endl;
    cout<<endl;
    cout<<v.back();
    cout<<"Traversing"<<endl;

    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    vector<int>v1{4,3,2,1};
    v.swap(v1);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.pop_back();
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
*/
/****************empty****************/
/**
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    if(v.empty()){cout<<"Empty"<<endl;}
    else
    {
        cout<<"Not empty"<<endl;
    }
    vector<int>v1{12};

    if(v1.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int div(int a,int b){
if(b==0)
    {
        throw "Divide by zero is error";
    }

}
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        cout<<div(a,b);
    }
    catch(const char *e){
    cout<<e<<endl;}

}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4};
    if(v.empty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    cout<<"At opeartion"<<endl;
    cout<<v.at(2)<<endl;
    cout<<"Vector traversing"<<endl;
    for(int i = 0 ;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    cout<<"Push operation"<<endl;
    v.push_back(6);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    v.pop_back();
    cout<<"NOw the vector is"<<endl;
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }

    cout<<v.front()<<" "<<v.back()<<" "<<endl;
cout<<"Vector insert function"<<endl;
vector<string>v1{"java"};
string s="programs";
v1.insert(v1.begin()+1,s);
for(int i = 0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";

}






return 0;



}

*/

/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>v{"c","tutorial"};
    v.insert(v.begin()+1,2,"c");
    for(int i = 0;i<v.size();i++)

        cout<<v[i]<<" ";

    return 0;
}
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    vector<int>v1{6,7,8,9,10};
    v.insert(v.end(),v1.begin(),v1.begin()+3);
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
