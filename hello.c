#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int amt;
	float bal;
	cin>>amt;
	cin>>bal;
	
	if ((amt%5==0)&&(amt+0.5<=bal)){
	    cout<<(bal - amt - 0.5)<<endl;
	}
	else {
	    cout<<bal<<endl;
	}
	return 0;
}
