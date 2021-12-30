#include<iostream>
using namespace std;
struct data
{
	int roll_no;
	char name[100];
	int age;
	char address[100];
	int marks;
};
int main()
{
	data pt[15];
	cout<<"enter your following data:rollno, name, age, address, marks";
	cout<<endl;
	for(int i=1;i<=15;i++)
	{
		cout<<"enter your rollno:";
		cin>>pt[15].roll_no;
		cout<<"enter your name:";
		cin>>pt[15].name;
		cout<<"enter your age:";
		cin>>pt[15].age;
		cout<<"enter your address:";
		cin>>pt[15].address;
		cout<<"enter your marks:";
		cin>>pt[15].marks;
		cout<<endl;
	}
	cout<<"display 15 students using structure:";
	for(int i=1;i<=15;i++)
	{
		cout<<"your roll no is:"<<pt[15].roll_no<<endl;
		cout<<"your name is:"<<pt[15].name<<endl;
		cout<<"your age is:"<<pt[15].age<<endl;
		cout<<"your address is:"<<pt[15].address<<endl;
		cout<<"your marks is:"<<pt[15].marks<<endl;
	}
	return 0;
}
