#include <iostream>
using namespace std;

int main (){
	
	float h,j,i,r;
	h = 1;
	j = 0;
	cout<<"Mau ngulang berapa kali ? ";
	cin>>j;

	while (h <= j){
		
		cout<<h<<",";
		i+=h;
		h++;
			
	}	
		
		r = i / j;
		cout<<endl;
		cout<<"Hasil :"<<i<<endl;
		cout<<"Rata Rata :"<<r<<endl ;
	
}
