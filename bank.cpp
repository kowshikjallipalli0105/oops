#include<iostream>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("E:\\PROGRAMMING\\in_and_out\\input.txt","r",stdin);
    freopen("E:\\PROGRAMMING\\in_and_out\\output.txt","w",stdout);
    #endif
}
class Bank{
	private:
	string head="RBI";
	int a=10;
	public:
		long long int acc;
		static string ifsc,bank_name;
		string name,address,phno;
		Bank(int ac,string n,string a,string p);
		void display();
		void modify();
				
			

};
string Bank::ifsc="UBIN0823554";
string Bank::bank_name="UBIN";
Bank :: Bank(int ac,string n,string a,string p){
	acc=ac;
	name=n;
	address=a;
	phno=p;
}
 void Bank::display(){
	cout<<acc<<" "<<name<<" "<<address<<" "<<phno<<" "<<ifsc<<" "<<bank_name<<" "<<head<<" "<<a<<endl;
	
}
void Bank::modify(){
	head="rbi";
	a=a+a;
}

int main(){
	takeinput();
	Bank h1(1012003,"kowshik","elr","0653981220");
	h1.display();
	h1.modify();
	h1.display();

	Bank h2(1012004,"karthik","kd","94294257");
	h2.display();
	h2.modify();
	h2.display();
	return 0;
}	