#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y){
	        cout<<"First"<<"\n";
	    }
	    else if(x==y){
	        cout<<"Any"<<"\n";
	    }
	    else{
	        cout<<"Second"<<"\n";
	    }
	}
	return 0;
}
