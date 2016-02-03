#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int p, a, b, c, ans;
	while(true){
	    cin>>p>>a>>b>>c;
	    ans = 0;
		if (p==0 && a==0 && b==0 && c==0)
		    break;
        ans = 40*2;
        ans = ans + (a>p?(40-a)+p:(p-a));
        ans = ans + 40;
        ans = ans + (b<a?(40-a)+b:(b-a));
        ans = ans + (c>b?(40-c)+b:(b-c));
        cout<<ans * 9<<"\n";
	}
	return 0;
}
