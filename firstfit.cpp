#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter number of memory blocks available\n";
	int m;
	cin>>m;
	int mblock[m]={0};
	for(int i=0;i<m;i++)
	{
		cout<<"Enter size of "<<i+1<<"th memory block\t";
		cin>>mblock[i];
	}

	return 0;
}