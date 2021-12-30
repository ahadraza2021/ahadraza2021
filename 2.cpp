#include<iostream>
using namespace std;
struct data
{
	int rollno;
	char name[100];
	int chen_marks;
	int maths_marks;
	int phy_marks;
	int sum;
	int percentage;
	sum = chen_marks+maths_marks+phy_marks;
	percentage=sum*100/300;
};
int main()
{
	data pt[5];
	cout<<"enter your data:";
	for(int i=1;i<=5;i++)
	{
		cout<<"enter your roll no:";
		cin>>pt[5].rollno;
		cout<<"enter your name:";
		cin>>pt[5].name;
		cout<<"enter your chemistry marks:";
		cin>>pt[5].chen_marks;
		cout<<"enter your physics marks:";
		cin>>pt[5].phy_marks;
		cout<<"enter your maths marks:";
		cin>>pt[5].maths_marks;
		cout<<endl;
	}
	for(int i=1;i<=5;i++)
	{
		cout<<"roll no:"<<pt[5].rollno<<endl;
		cout<<"name:"<<pt[5].name<<endl;
		cout<<"chemistry marks:"<<pt[5].chen_marks<<endl;
		cout<<"physics marks:"<<pt[5].phy_marks<<endl;
		cout<<"mathmatics marks:"<<pt[5].maths_marks<<endl;
		cout<<"your percentage is:"<<pt[5].percentage<<endl;
	}
}
