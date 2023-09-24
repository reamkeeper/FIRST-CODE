#include<iostream>
using namespace std;
void show(int,int);
int main(){
	int hour,minutes;
	cin>>hour;
	cin>>minutes;
	show(hour,minutes);
	return 0;
}
void show(int h,int m ){
	cout<<"Enter the number of hours:"<< h<<endl;
	cout<<"Enter the number of minutes:"<< m<<endl;
	cout<<"Time:"<<h<<":"<<m<<endl; 
	return ;	
}
