#include <iostream>
using namespace std;

int main (){
	
	int h,j;
	h = 1;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>j;

	do {
		cout<<h<<",";
		h++;
	}	
		while (h <= j);
	
}
