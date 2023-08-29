#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMMING\\in_and_out\\input.txt","r",stdin);
    freopen("E:\\PROGRAMMING\\in_and_out\\output.txt","w",stdout);
    #endif
}
//scope resolution
class humabeing{
    public:
    string name;
    void introduce();
};
void humabeing::introduce(){
    cout<<"hii i am "<<humabeing::name<<endl;
}
//private access specifiers
class humaabeing{
    private:
    int age;
    string namee;
    //here the varibles are private so we cant access them outside the class
    //so we have use them in class only
    public:
    void setdata(int ag ,string name){
        namee=name;
        age=ag;
    }
    void getdata(){
        cout<<"i  am "<<namee<<" with age "<<age<<endl;
    }


};
int main()
{
    takeinput();
   //your code goes here
   //for the class humabeing and for scope
   humabeing kowshik;
   kowshik.name="kowshik";
   kowshik.introduce();
   //for the private access specifiers
   humaabeing kowshika;
   kowshika.setdata(18,"kowshik");
   kowshika.getdata();


   return 0;
}