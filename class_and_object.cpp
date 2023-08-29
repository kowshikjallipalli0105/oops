#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMMING\\in_and_out\\input.txt","r",stdin);
    freopen("E:\\PROGRAMMING\\in_and_out\\output.txt","w",stdout);
    #endif
}
class humabeing{
    public:
    string name;
    void introduce(){
        cout<<"hi i am "<<name<<endl;
    }
};
int main()
{
    takeinput();
   //your code goes here
   //here in this we are declaring this one statically 
   humabeing kowshik;
   kowshik.name="kowshik";
   kowshik.introduce();
   //here in  this is created by using pointer
   humabeing *karthik=new humabeing();
   karthik->name="karthik";
   karthik->introduce();
   //here by using address
   humabeing *teja=&kowshik;
   (*teja).introduce();

   return 0;
}
