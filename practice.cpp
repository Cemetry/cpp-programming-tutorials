#include<iostream>
using namespace std;
int main()
{
    int a,b,c=40,30,20;
    cout<<a<<endl;
    return 0;
}


/*Multiple variable can be assigned
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=b=c=20;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
class Animal
{
public:
   virtual void display()
    {
        cout<<"Base Class"<<endl;
    }
};
class Dog:public Animal
{
public:
    void display()
    {
        cout<<"Drived Class"<<endl;
    }
};
int main()
{
   Dog d;
    d.display();
    return 0;

}


/*#include<iostream>
using namespace std;
class student
{
private:
    int rr;
    int pp;
public:
    string name="Tanim Ahmed";
    int roll = 1507113;
    student()
    {
        cout<<"constructor is called"<<endl;
    }
    ~student()
    {
        cout<<"Destructor is called"<<endl;
    }
    void set(int r,int p)
    {
        rr=r;
        pp=p;


    }
    void display()
    {
        cout<<pp<<" "<<rr<<endl;
    }

};
int main()
{
    student d;
    //cout<<d.name<<" "<<d.roll<<endl;
    d.set(1,2);
    d.display();
    return 0;
}




/*#include<iostream>
using namespace std;
enum day {sat,sun,mon};

int main()
{
    day d;
    cout<<(sun+1)<<endl;
    return 9;

}


/*#include<iostream>
using namespace std;
template<class T>T add(T &a,T &b)
{
    T result = a+b;
    return result;
}
int main()
{
    int a = 3;
    int b = 4;
    cout<<add(a,b)<<endl;
    return 0;
}
/*#include<iostream>
using namespace std;
template<class T>T add(T &a,T &b)
{
    T result = a+b;
    return result;
}
int main()
{
    int i = 2;
    int j = 3;
    cout<<add(i,j)<<endl;
  //  cout<<add("tanim","ahmed")<<endl;
 float a = 4.4;
 float b = 45.3;
 cout<<add(a,b)<<endl;

    return 0;
}






/*#include<iostream>
using namespace std;
class sum
{
private:
    int x,y,z;
public:
    void add()
    {
          cout<<"Enter the numbre"<<endl;
  cin>>x>>y;
  z=x+y;
  cout<<z<<endl;

    }


};


int main()
{
    sum a;
    a.add();
    return 0;
}





/*#include<iostream>
using namespace std;
class sum
{
private:
    int x,y,z;
public:
    void add()
    {
        cout<<"Enter the number"<<endl;
        cin>>x>>y;
        z=x+y;
        cout<<z<<endl;
    }
};

int main()
{
    sum s;
    s.add();
    return 0;
}








/*#include<iostream>
using namespace std;
class Shape
{
    public:
        virtual void draw()=0;
};
class Rectangle:Shape
{
public:
    void draw()
    {
        cout<<"Drawing rectangle"<<endl;
    }
};
class Circle:Shape
{
public:
    void draw()
    {
        cout<<"Drawing circle.."<<endl;
    }
};
int main()
{
    Rectangle rec;
    Circle cir;
    rec.draw();
    cir.draw();
    return 0;

}



//virtual function implementation
/*#include<iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout<<"Base class is invoked"<<endl;
    }
};
class B:public A
{
public:
    void display()
    {
        cout<<"Derived class is invoked"<<endl;
    }
};
int main()
{
    A *a;
    A aa;
    a=&aa;
    a->display();
    B b;
    a=&b;
    a->display();
    return 0;
}








/*#include<iostream>
using namespace std;
class Animal
{
public:
virtual void eat()
    {
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal
{
public:
    void eat()
    {
        cout<<"Eating dog"<<endl;
    }
};
int main()
{
    Dog d = Dog();
    d.eat();
    return 0;
}








/*#include<iostream>
using namespace std;
class Test
{
private:
    int num;
public:
    Test()
    {
        num = 8;
    }
    void operator ++()
    {
        num+=2;
    }
    void print()
    {
        cout<<"The count is:"<<num<<endl;
    }
};

int main()
{
    Test tt;
    ++tt;
    tt.print();
    return 0;
}



/*#include<iostream>
using namespace std;
class Test
{
private:
    int num;
public:
    Test()
    {
        num = 8;
    }
    void operator++()
    {
        num+=2;
    }
    void print()
    {
        cout<<"The count is"<<num<<endl;
    }
};
int main()
{
    Test tt;
    ++tt;
    tt.print();
    return 0;
}



/*#include<iostream>
using namespace std;
class A
{
public:
    virtual void dis()
    {
        cout<<"A function"<<endl;

    }
};
class B:public A
{
public:
    void dis()
    {
        cout<<" B function"<<endl;
    }
};
int main()
{
    A *a;
    A aa;
    a=&aa;
    a->dis();
    B b;
    a=&b;
    a->dis();
    return 0;

}


/*#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Drawing.."<<endl;
    }
};

class Rectangle:public Shape
{
public:
    void draw()
    {
        cout<<"Rectangle drawing.."<<endl;
    }
};
class Circle:public Rectangle
{
public:
    void draw()
    {
        cout<<"Circle drawing.."<<endl;
    }
};
int main()
{
    Shape *s;
    Shape sh;
    Rectangle rec;
    Circle cr;
    s=&sh;
    s->draw();
    s=&rec;
    s->draw();
    s=&cr;
    s->draw();
    return 0;
}

/*#include<iostream>
using namespace std;
class cal
{
public:
    static int add(int a,int b)
    {
        return a+b;
    }
    static int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    cal c;
    cout<<c.add(1,2)<<endl;
    cout<<c.add(1,2,3)<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
class Cal
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
{
    return a+b+c;
}
};
int main()
{
    Cal c;
    cout<<c.add(1,2)<<endl;
    cout<<c.add(3,3,3)<<endl;
    return 0;
}


/*#include<iostream>
using namespace std;
class Cal
{
public:
     int add(int a,int b)
    {
        return a+b;
    }
   int add(int a,int b,int c)
   {
       return a+b+c;
   }
};
int main()
{
    Cal c;
    cout<<c.add(10,102)<<endl;
    cout<<c.add(101,23,23)<<endl;
}








/*#include<iostream>
using namespace std;
class Animal
{
public:
    string color = "Black";

};

class Dog:public Animal
{
public:
    string color="Grey";
};

int main()
{
    Animal d = Dog();
    cout<<d.color<<endl;
    return 0;
}



/*#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Drawing..."<<endl;
    }
};
class Rectangle:public Shape
{
public:
    void draw()
    {
        cout<<"Rec.. Drawing"<<endl;
    }
};

class Circle:public Rectangle
{
public:
    void draw()
    {
        cout<<"Cir.. drawing.."<<endl;
    }
};
int main()
{
    Shape *s;
    Shape sh;
    s=&sh
    ;
    s->draw();
    Rectangle rec;
    s=&rec;
    s->draw();
    Circle cr;
    s=&cr;
    s->draw();
    return 0;
}




/*#include<iostream>
using namespace std;
class Shape
{
public:
virtual void draw()
    {
        cout<<"Drawing.."<<endl;
    }
};
class Rectangle:public Shape
{
public:
    void draw()
    {
        cout<<"drawing rectangle.."<<endl;
    }
};
class Circle:public Shape
{
public:
    void draw()
    {
        cout<<"drawing circle.."<<endl;
    }
};
int main()
{
    Shape *s;
    Shape sh;
    s=&sh;
    Rectangle rec;
    Circle cr;
    s->draw();
    s=&rec;
    s->draw();
    s=&cr;
    s->draw();
    return 0;

}






/*#include<iostream>
using namespace std;
class Animal
{
public:
    void eat(){
    cout<<"Eating"<<endl;
    }
};
class Dog:public Animal
{
public:
    void eat()
    {
        cout<<"Barking"<<endl;
    }
};


int main()
{
    Dog d;//=Dog();
    d.eat();
    return 0;

}

/*
#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};
class Dog:public Animal{
public:
    void eat()
    {
        cout<<"Dog is eating"<<endl;
    }


    };
    int main()
    {

        Dog d2=Animal();
        d2.eat();
        return 0;
    }
/*#include<iostream>
using namespace std;
class student
{
private:
    void eat()const
    {
        cout<<"Eating"<<endl;
    }
public:
    void set()const
    {
        eat();
    }
};

int main()
{
    student().set();
    return 0;

}


/*#include<iostream>
using namespace std;
namespace first
{
    void first()
    {
        cout<<"This is first namespace"<<endl;
    }
}

namespace second
{
    void first()
    {
        cout<<"This is second"<<endl;
    }
}
int main()
{
   first::first();
    return 0;
}



/*#include<iostream>
using namespace std;
void fun()
{
    int i = 0;
    static int j  = 0;
    cout<<i<<" "<<j<<endl;
    i++;
    j++;
}
int main()
{
    fun();

    fun();
    fun();


    return 0;
    }




/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("t.txt");

 if(file.is_open())
 {
     file<<"This  is is my first file"<<endl;
 }
 else
 {
     cout<<"File opened failed"<<endl;
 }
 ifstream f("t.txt");
 string s;
 while(getline(f,s))
 {
     cout<<s<<" "<<endl;
 }

 return 0;


}












/*#include<iostream>
using namespace std;
//friend function
class Box
{
private:
    int len;
public:
    Box()
    {
        len = 0;
    }
    friend int print(Box);
};
int print(Box b)
{
    b.len+=19;
    return b.len;
}

int main()
{
    Box b;
    cout<<print(b)<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
class animal
{
public:
    void eat()
    {
        cout<<"Eating..."<<endl;
    }
};
class Dog:public animal
{
public:
    void bark()
    {
        cout<<"Barking..."<<endl;
    }
};

class BabyDog:public Dog
{
public:
    void sleep()
    {
        cout<<"Sleeping..."<<endl;
    }
};

int main()
{
    BabyDog d;
    d.eat();
    d.bark();
    d.sleep();
    return 0;
}





/*#include<iostream>
using namespace std;
//method inheritence
class animal
{
public:
    void eat()
    {
        cout<<"Eating.."<<endl;
    }
};

class Dog:public animal

{

public:
    void bark()
    {
        cout<<"Barking..."<<endl;
    }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}




/*#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    student(int i,string n)
    {
        id = i;
        name = n;


    }

    void display()
    {
        cout<<id<<" "<<name<<endl;
    }


};
int main()
{
    student s=student(1,"Tanim");
    s.display();
    return 0;
}



/*#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void set(int i,string n)
    {
        id = i;
        name = n;    }
        void display()
        {
            cout<<id<<" "<<name<<endl;
        }
};
int main()
{
  student s;
  s.set(1,"Tanim");
  s.display();
    return 0;
}

/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    student()
    {
        cout<<"Constructor invoked"<<endl;
    }
    ~student()
    {
        cout<<"Destructor invoked"<<endl;
    }
};
int main()
{
    student s1;
    return 0;
}


/*
#include<iostream>
using namespace std;
class account
{
public:
    int bonus = 100;
};

class programmer:public account
{

public:
    int sal = 1994;
};

int main()
{
    programmer p1;
    cout<<p1.bonus<<endl;
    cout<<p1.sal<<endl;
    return 0;
}



/********Multiple Level Inheritence**/
/*
#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal
{
public:
    void Bark()
    {
        cout<<"Barking.."<<endl;
    }

};
class BabyDog:public Dog{
public:
    void weep()
    {
        cout<<"Weeping"<<endl;
    }

};
int main()
{

    BabyDog d;
    d.eat();
    d.Bark();
    d.weep();
    Dog d2;
    d2.eat();
    d2.Bark();
    return 0;
}


/*
#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal
{
public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};
int main()

{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}




/*#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};

class Dog:public Animal {

public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }

};
int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}



/*#include<iostream>
using namespace std;
class Account
{
public:
    int bonus =1000;
};
class Programmer:public Account
{
public:
    int salary = 12342;

};
int main()
{
    Programmer p;
    cout<<p.salary<<endl;
    cout<<p.bonus<<endl;
    return 0;
}

/***Inheritence***/
/*#include<iostream>
using namespace std;
class Account
{
public:
    int salary = 100;
};
class Programmer:public Account
{

public:
    int bonus = 200;
};
int main()
{
    Programmer p;
    cout<<p.salary<<endl;
    cout<<p.bonus<<endl;
    Account p1;
    cout<<p1.salary<<endl;

    return 0;
}


/*

#include<iostream>
using namespace std;

class Box
{
private:
    int len;
public:
    Box()
    {
        len = 0;
    }
    friend int print(Box);
};

int print(Box b)
{
    b.len+=20;
    return b.len;
}

int main()
{
     Box b;
     cout<<print(b)<<endl;
     return 0;
}


/*#include<iostream>
using namespace std;
class Box
{
private:
    int len;
public:
    //Box()::len(0){}
    //Box()::len(0){}
  friend  int print(Box);

};
int print(Box b)
{
    b.len+=10;
    return b.len;
}
int main()
{
    Box b;
    cout<<print(b)<<endl;
    return 0;
}



/*
#include<iostream>
using namespace std;
class rec
{
 int h;
 int w;
 public:
     void set(int a,int b){ h = a;w = b;}
     int area(){return h*w;}


};

int main()
{
    rec r;
    r.set(4,44);
    cout<<r.area()<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
public:
    void set(int r,string n)
    {
        roll = r;
        name = n;
    }
    void display()
    {
        cout<<roll<<" "<<name<<endl;
    }
};
int main()
{
    student s;
    s.set(1,"Tanim Ahmed");
    s.display();
    return 0;
}

/*
#include<iostream>
using namespace std;
class rec
{
 int h;
 int w;
 public:
     void set(int a,int b){ h = a;w = b;}
     int area(){return h*w;}


};

int main()
{
    rec r;
    r.set(4,44);
    cout<<r.area()<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;
enum digit{one,two,three,four};

int main()
{
    digit d;
    d=two;
    cout<<d<<endl;
    return 0;

}


/*
#include<iostream>
using namespace std;
enum month{Jan,Feb,Mar,APr,May,June};
int main()
{
    month m;
    m = Feb;
    cout<<m<<" "<<m+3<<endl;
    return 0;
}




/***Enumeration*****/
/*#include<iostream>
using namespace std;
enum week{Sat,Sun,Mon,Thues,Wednes,Fri};
int main()
{
    week day;
    day = Sun;
    cout<<day +1<<endl;
    return 0;
};



/*
#include<iostream>
using namespace std;
struct rec
{
    int wid;
    int hei;
    rec(int w,int h)
    {
        wid = w;
        hei = h;
    }
    void display()
    {
        cout<<"Area of rectangle:"<<(wid*hei)<<endl;
    }
};
int main()
{
    struct rec r = rec(2,33);
    r.display();
    return 0;
}




/*
#include<iostream>
using namespace std;
struct rec
{
    int w,h;

};
int main()
{
    struct rec r;
    r.w = 4;
    r.h = 45;
    cout<<(r.w*r.h)<<endl;
    struct rec r1;
    cin>>r1.w>>r1.h;
    cout<<(r1.w*r1.h)<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;
struct rec
{
    int w,h;
};
int main()
{
    struct rec r;
    r.w = 4;
    r.h = 34;
    cout<<"Area of Rectangle:"<<(r.w*r.h)<<endl;
    return 0;
}



/*#include<iostream>
using namespace std;
class student
{
public:
    int id;
    int roll;
    static string dept;
    student(int i,int r)
    {
        id = i;
        roll = r;
    }
    void display()
    {
        cout<<id<<" "<<roll<<" "<<dept<<endl;
    }

};

string student::dept="CSE";

int main()
{
    student s = student(1,1507113);
    s.display();
    student s1=student(2,1507114);
    s1.display();
    return 0;

}

/*#include<iostream>
using namespace std;
class em
{
public:
    int id;
    int sal;
    em()
    {
        cout<<"This is a constructor"<<endl;
    }
    ~em()
    {
        cout<<"This is a destructor"<<endl;
    }
};

int main()
{
    em e;
    em e2;
    return 0;
}




/*
#include<iostream>
using namespace std;
class em
{
public:
    int id;
    int sal;
    em(int i,int s)
    {
        id = i;
        sal = s;
    }
    void display()
    {
        cout<<id<<" "<<sal<<endl;
    }
};
int main()
{
    em e = em(1,1000);
    e.display();
    //cout<<id<<" "<<sal<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void insert(int i,string n)
{

    id = i;
    name = n;
}
void display()
{
    cout<<id<<" "<<name<<endl;
}

};
int main()
{
    student s1;
    s1.insert(1,"Tanim");
    s1.display();
    return 0;
}

/*
#include<iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    Employee(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
{
    cout<<id<<" "<<name<<endl;
}


};

int main()
{
    Employee e1=Employee(1,"Tanim Ahmed");
    e1.display();
    return 0;
}


/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    student(int i,string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    student s1=student(1,"Tanim");
    s1.display();
    return 0;
}
/*
#include<iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout<<"Constructor involved"<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor involved"<<endl;
    }
};
int main()
{
    Employee e1;
    Employee e2;
    return 0;
}


/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void insert(int i,string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.insert(12,"Tanim");
    s1.display();
}



/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;

    void insert(int i,string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    student s1;
    s1.insert(201,"Tanim");
    s1.display();
    return 0;
}











/**class and objects***/
/*
#include<iostream>
using namespace std;
class student
{
public:
    int id;
    int sal;
};

int main()
{
    student s1;
   cin>>s1.id;
   cin>>s1.sal;
   cout<<s1.id<<" "<<s1.sal<<endl;
    return 0;
}


/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file ("test.txt");
    if(file.is_open())
    {
       file<<"This first file"<<endl;
    }
    else
    {
        cout<<"Failed"<<endl;
    }
    ifstream f("test.txt");
    string s;
    while(getline(f,s))
    {
        cout<<s<<endl;
    }
    return 0;


}
/*
#include<iostream>
using namespace std;
int main()
{
   int *a;
   a=&10;
    cout<<&a<<endl;
    cout<<a<<" "<<*a<<endl;
    return 0;

}
/*
#include<iostream>
using namespace std;
int main()
{
    auto  i=9;
    cout<<i<<endl;
    register int j  = 3;
    cout<<j<<endl;

    return 0;
}

/********call by reference ********/

/*
#include<iostream>
using namespace std;
void func(int *n)
{
    *n = 20;
}
int main()
{
    int n = 211;
    func(&n);
    cout<<n<<endl;
    return 0;
}









/******call by value********/
/*
#include<iostream>
using namespace std;
void func(int n)
{
    n = 20;
}
int main()
{
    int n = 21;
    func(n);
    cout<<n<<endl;
    return 0;
}












/*

#include<iostream>
using namespace std;

void fun(int *n)
{

    *n = 20;
}
int main()
{
    int n = 21;
    fun(&n);
    cout<<n<<endl;
    return 0;
}



/*#include<iostream>
using namespace std;
void func()
{
    static int i = 0;
    int j = 0;
    cout<<"i="<<" "<<i<<"J"<<" "<<j<<endl;

i+=2;
j+=2;

}
int main()
{
    func();
    func();
    func();


}








/*function*/
/*
#include<iostream>
using namespace std;

void func(){
static int  i =0;
int j = 0;
cout<<"i="<<i<<" "<<"J="<<j<<endl;

i++;
j++;


}


int main()
{
    func();
    func();
    func();
    return 0;

}

/*
#include<iostream>
using namespace std;
namespace first{
void say()
{
    cout<<"This is first namespace"<<endl;
}

}
namespace second{
void say(){
cout<<"This is second namespace"<<endl;
}

}

int main()
{
    first::say();
    second::say();
    return 0;

}

/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    if(file.is_open()){
        file<<"Welcome to my file"<<endl;
        string ss;
        cin>>ss;
        file<<ss<<endl;

        file.close();
    }
    else
    {
        cout<<"Filed"<<endl;
    }
    ifstream fi("test.txt");
    string s;
    while(getline(fi,s))
    {
        cout<<s<<endl;
    }
    return 0;
}


/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("test.txt");
    if(file.is_open())
    {
        file<<"WELOME TO NEW LIFE"<<endl;
        file.close();
    }
    else
    {
        cout<<"Failed to open new file"<<endl;
    }
    string srg;
    ifstream filee("test.txt");
    if(filee.is_open())
    {
        while(getline(filee,srg))
        {
            cout<<srg<<endl;
        }

    }
    else
    {
        cout<<"Failed"<<endl;
    }
    return 0;
}












/*****file read and write******/





/*
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<4>b;
    bitset<4>mask("1111");
    b|=mask;
    if(b.all()){
        cout<<"All bits are set"<<endl;
    }

    if(!b.all())
    {
        cout<<"Sets"<<endl;
    }
    return 0;
}















/*
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>em;
    em[1]="Tanim";
    em[2]="Manik";
    em[3]="Jabir";
    for(map<int,string>::iterator it=em.begin();it!=em.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Size:"<<em.size()<<endl;

    if(em.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    cout<<"Max size"<<" "<<em.max_size()<<endl;
    return 0;

}
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1="Tanim thmed";
    string str2="Tanim ahmed";
    int k =str1.compare(str2);
    if(k==0){
        cout<<"Equal"<<endl;
    }
    else if(k<0)
    {
        cout<<"second is big"<<endl;
    }
    else
    {
        cout<<"First is bigger"<<endl;
    }
    int kk =str1.length();
    cout<<kk<<" "<<endl;
    int kk2=str2.length();
    cout<<kk2<<" "<<endl;

    str2.swap(str1);
    cout<<str2<<" "<<endl;
    int kk3=str2.size();
    cout<<kk3<<" "<<endl;
    return 0;
}

/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{

char ss[100];
cin.getline(ss,14);
cout<<ss<<endl;
cout<<strlen(ss)<<" "<<endl;

char ss1[100];
strcpy(ss1,ss);
cout<<ss1<<""<<endl;
strcat(ss1,ss);
cout<<ss1<<" "<<endl;

    return 0;

}




/********Copy,concat,strlen,strcmp,strlen***/


/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s="Tanim";
    string s1="Tanim";
    int k = s.compare(s1);
    if(k==0)
    {
        cout<<"E"<<endl;
    }
}



/***Strlen*****/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main()

{
    char s[100];
    cin.getline(s,100);
    cin>>s;
    cout<<strlen(s)<<endl;

}

/*********strcpy*******/
/*
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char s[10];
    char s1[10];
    cout<<"Enter the first string"<<endl;
    cin.getline(s,10);
    cout<<"Enter the second string"<<endl;
    cin.getline(s1,10);
    strcpy(s,s1);
    cout<<s1<<endl;
    cout<<s1<<endl;
}




/*#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char s[10];
    char s1[10];
    cout<<"Enter the first string"<<endl;
    cin.getline(s,10);
    cout<<"Enter the second string"<<endl;
    cin.getline(s1,10);
    strcat(s,s1);
    cout<<s<<endl;

    return 0;
}



/********String concatenation*********/
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    char s1[100];
    cout<<"Enter the first string"<<endl;
    cin.getline(s,40);
    cout<<"Enter the second string"<<endl;
    cin.getline(s1,40);
    strcat(s,s1);
    cout<<s<<endl;
    cout<<s1<<endl;
    return 0;


}


/*******String comparison********/

/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[]="mango";
    char buffer[44];
    do
    {
        cout<<"What is your favorite fruit?";
        cout<<endl;
        cin>>buffer;

    }while(strcmp(key,buffer)!=0);
    cout<<"Answer is correct"<<endl;
    return 0;
}









/*
#include<iostream>
using namespace std;
int main()
{
      char ch[]={'c','+','+'};
      string s1=string(ch);
      cout<<s1<<endl;
    return 0;
}


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
    cin>>a>>b;
    try{
    cout<<div(a,b);

    }
    catch(const char *e)
    {
        cerr<<e<<endl;
    }
    return 0;
}


/*
#include<iostream>
using namespace std;
namespace first{

void say(){
cout<<"Tanim Ahmed"<<endl;
}

}
namespace second{
void say(){
cout<<"This is second function"<<endl;
}


}
int main()
{

    first::say();
    return 0;


}



/**max_size()**/
/*
#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int>v{1,3,4};
for(vector<int>::const_iterator it = v.cbegin();it!=v.cend();it++)
    cout<<*it<<" ";
    v.shrink_to_fit();
    int *k=v.data();
    for(int i = 0;i<v.size();i++)
        cout<<*k++<<" ";

return 0 ;



}


/********rbegin and rend*****/
/*#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>v{1,2,3};
    for(vector<int>::reverse_iterator it=v.rbegin();it!=v.rend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
/**emplace()**************/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>v{1,2,3};
    v.emplace(v.begin()+1,4);
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
    v.insert(v.begin(),5);
  //  v.emplace(v.begin(),5);
      for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";

  //     v.assign(v.begin(),454);
  v.erase(v.begin()+1);
        for(int i = 0;i<v.size();i++)
            cout<<v[i]<<" ";

    return 0;
}

/*#include<vector>
#include<iostream>
using namespace std;
int main()
{

    vector<int>v{1,2,3};
    for(int i = 0;i<v.size();i++)
        cout<<v[i];
        if(v.empty()){
            cout<<"Empty"<<endl;
        }
        else
        {
            cout<<"Not empty"<<endl;
        }

        cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
        cout<<v.at(0)<<endl;
        cout<<v.front()<<endl;

        cout<<v.back()<<endl;
       // cout<<v.push_back(5)<<endl;
        //cout<<v.pop_back()<<endl;
v.pop_back();
for(int i = 0;i<v.size();i++)
    cout<<v[i]<<" "<<endl;;
vector<int>v1;
cout<<"operator"<<endl;
v1.operator=(v);
for(int i = 0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<"Another operator function"<<endl;
for(int i = 0;i<v.size();i++)
{
    cout<<v.operator[](i)<<" ";
}
cout<<"Specific element"<<endl;
cout<<v.operator[](0)<<endl;

cout<<"iterator function"<<endl;
vector<int>v11{1,2,3};
for(vector<int>::iterator it = v11.begin();it!=v11.end();it++){
    cout<<*it<<endl;
}

    return 0;




}


/*#include<iostream>
using namespace std;
int main()
{
  int sum = 0;
  int prod=1;

  int i ;
  for(int i = 1;i<=10;i++)
  {
      if(i%3==0){
        goto pro;
      }
      sum+=i;
  }
  pro:
      prod*=i;
      cout<<prod<<endl;
      return 0;




        return 0;
}






/*
#include<iostream>
using namespace std;
int main()
{
    ineligible:
        cout<<"You are not eligible"<<endl;
        cout<<"Enter your age"<<endl;
        int age;
        cin>>age;
        if(age<18)
        {
            goto ineligible;
        }
        else
        {
            cout<<"You are eligible"<<endl;
        }
        return 0;
}




//switch and case
/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a)
    {
    case 1:
        cout<<"this is one"<<endl;
        break;
    case 2:
        cout<<"This is two"<<endl;
        break;
        case 3:cout<<"This is three"<<endl;
        break;
        default:
            cout<<"This is default statement"<<endl;
    }
    return 0;
}











/********Continue*********/
/*#include<iostream>
using namespace std;
int main()
{
    for(int i = 1;i<10;i++){
        if(i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

*/
//This is a single line comment
/*This
is multi line comment*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(int i = 1;i<=3;i++){
            for(int j=1;j<=3;j++)
            {

                if(i==2&&j==2)
                {
                    continue;
                }
 cout<<i<<" "<<j<<endl;
            }
    }
    return 0;
}




/*#include<iostream>
using namespace std;
int main()
{
    for(int i = 0;i<10;i++)
    {
        if(i==5)
      {
          break;
      }
      cout<<i<<endl;

    }

    int a;
    while(cin>>a)
    {
        if(a==10)
        {
            break;
        }
        cout<<a<<endl;
    }
    return 0;
}

*
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(int i = 1;i<=3;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            if(i==2&j==2)

                break;

             cout<<i<<" "<<j<<endl;
        }

    }
    return 0;
}



*/










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
/*
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
*/
/**vector insert()**********************************/
/*

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4};
    vector<int>v1{5,6,7,8};
    v.insert(v.begin()+1,2);
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
//multiple value add
 v.insert(v.begin()+1,2,3);
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    v.insert(v.end(),v1.begin(),v1.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}
*/
/*******************vector erase()**********************/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
    v.erase(v.begin());
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
        cout<<"Some elements removing"<<endl;
        v.erase(v.begin()+1);
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<endl;
        cout<<"Some elements removing"<<endl;
        v.erase(v.begin(),v.begin()+2);
        for(int i =0;i<v.size();i++)
            cout<<v[i]<<" ";
            cout<<endl;
        cout<<"Full elements removing"<<endl;
        v.erase(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
            if(v.empty())
            {
                cout<<"vector is empty"<<endl;
            }
            else
            {
                cout<<"Vector is not empty"<<endl;
            }
            cout<<v.size()<<endl;


        v.resize(10);
        for(int i = 0;i<10;i++)
        {
            v.push_back(i);
        }
        for(int i = 0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
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
    vector<string>v{"c","c++","java"};
    for(int i = 0;i<v.size();i++)
        cout<<v[i]<<" ";
    v.resize(5,".net");
cout<<endl;
for(int i = 0;i<v.size();i++)
    cout<<v[i]<<" ";
cout<<endl;
 int n = v.size();
    cout<<n<<endl;
    int c = v.capacity();
    cout<<c<<endl;
cout<<"Clear function"<<endl;
v.clear();
for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

if(v.empty())
{
    cout<<"empty"<<endl;
}
else

{
    cout<<"not empty"<<endl;
}
return 0;



}
*/
/*
#include<iostream>>
#include<vector>
using namespace std;
int main()
{
    vector<char>v{'j','a','v','a'};

    cout<<v.size()<<endl;
    v.resize(10);
    cout<<v.capacity()<<endl;
    return 0;
}
*/
/**************asign**************/
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4};
    vector<int>v1;
    v1.assign(v.begin(),v.end());
    for(int i = 0;i<v1.size();i++)
        cout<<v1[i]<<" ";

        vector<int>v3;
        v3.assign(v.begin(),v.end());
        for(int i = 0;i<v3.size();i++)
            cout<<v3[i]<<" ";
        cout<<endl;

        vector<int>vv;
        vv.assign(5,3);
        for(int i = 0;i<vv.size();i++)
            cout<<vv[i]<<" ";
    return 0;
}
*/
