#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0,num[100],avg=0;
	cout<<"enter how many you want to average";
	cin>>n;
	cout<<"enter the numbers";
	for(i=0;i<n;i++){
		cin>>num[i];
	}
	for(i=0;i<n;i++){
		sum=sum+num[i];
    }
    avg=sum/n;
    cout<<"The average is"<<avg<<endl;
    return 0;
}
