#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    int T,n, t, k = 1;
    while(cin>>T && T!= 0){
        n = 0;
        for(int i = 0; i < T; i++){
            cin>>t;
            if(t == 0){
                n--;
            }else{
                n++;
            }
        }
        cout<<"Case "<<k<<": "<<n<<"\n";
        k++;
    }

	return 0;
}

