#include <iostream>
using namespace std;

int main() {
    int a[10], i;
	cout<<"Enter elements \n";
	for(i=0; i<10; i++)
	{
	    cin>>a[i];
	}
	cout<<"Entered elements \n";
	for(i=0; i<10; i++)
	{
	    cout<<a[i]<<"\n";
	}
	return 0;
}
