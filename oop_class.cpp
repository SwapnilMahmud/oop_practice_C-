#include<iostream>
using namespace std;
class myclass{
    //private
    int a;
    public:
    void set_a(int num);
    int get_a();
};
void myclass::set_a(int num){
    a=num;
}
int myclass::get_a(){
    return a;
}
int main(){
    myclass ob1,ob2;
    ob1.set_a(10);
    ob2.set_a(22);
    cout<<ob1.get_a()<<"\n";
    cout<<ob2.get_a()<<"\n";
    return 0;
}
// take a variable as a public
#include<iostream>
using namespace std;
 class myclass{
     public:
     int a;
 };
 int main(){
     myclass ob1,ob2;
     ob1.a=10;
     ob2.a=20;
     cout<<ob1.a<<"\n";
     cout<<ob2.a<<"\n";
 }
 ///////////
 #include<iostream>
using namespace std;
#define SIZE 10
class stack{
    char stck[SIZE];
    int tos;
    public:
    void init();
    void push(char ch);
    char pop();
    
};

void stack::init(){
    tos=0;
}
void stack::push(char ch){
    if(tos==SIZE){
        cout<<"stack is full";
        return ;
    }
    stck[tos]=ch;
    tos++;
}
char stack::pop(){
    if(tos==0){
        cout<<"stack is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}


int main(){
    stack s1,s2;
    int i;
    s1.init();
    s2.init();
    s1.push('a');
    s1.push('x');
    s1.push('v');
    s1.push('d');
    s2.push('q');
    s2.push('w');
    s2.push('e');
    s2.push('o');
    for(i=0;i<4;i++)cout<<"pop s1"<<s1.pop()<<"\n";
    for(i=0;i<4;i++)cout<<"pop s2"<<s2.pop()<<"\n";
}
