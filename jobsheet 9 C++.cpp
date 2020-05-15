#include<iostream>
using namespace std;

int main(){
	int i;
	char
	nama[5]={'A','Z','A','M','\0'};
	char nama2 [5]="AZAM";
	cout<<"Array per karakter = ";
	for(i=0;i<=4;i++)
	{
		cout<<nama[i];
	}
	cout<<endl
	cout<<"Array string  = "<<nama2<<endl<<endl;
	return 0;
}
