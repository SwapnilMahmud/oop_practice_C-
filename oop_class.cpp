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
