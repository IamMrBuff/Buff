#include <iostream>
using namespace std;

int main() {	
   int x, y, n, a, b;
   
   cout<<"Enter n: ";
   cin>>n;
   for (x=1; x<=n; x++) {
    for (a=0; a<=(n-x); a++) cout<<" ";
    for (b=1; b<=x; b++) {
	  cout<<"* ";
    }
    cout<<"\n";
   }
   return 0;
} 
