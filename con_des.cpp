#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMMING\\in_and_out\\input.txt","r",stdin);
    freopen("E:\\PROGRAMMING\\in_and_out\\output.txt","w",stdout);
    #endif
}
//constructor
class humabeing{
    private:
    int age;
    string name;
    public:
    //1st
    //here there are no arguments
    humabeing(){
        name="no name";
        age=0;
    }
    //2nd
    //this is having both the arguments
    humabeing(string nam,int ag){
        name=nam;
        age=ag;

    }
    
    void display(){
        cout<<name<<" "<<age<<endl;
    }
    //3rd
    //here there is only name and age is default
     humabeing(string nam){
        name=nam;
        age=0;

    }
    //4th
    //here there is only age and name is default
     humabeing(int ag){
        name="no name";
        age=ag;

    }

};
int main()
{
    takeinput();
   //your code goes here
   //here we are declaring the two names so this will go to the secound counstructor
   humabeing kowshik("kowshik",18);
   kowshik.display();
   //here there are no arguments so this will go to first constructor
   humabeing karthik;
   karthik.display();
   //here we are givinng name so this will go to 3rd
   humabeing kowshika("kowshik");
   kowshika.display();
   //here we are giving age so this will go to 4th
   humabeing kowshikaa(18);
   kowshikaa.display();

   return 0;
}