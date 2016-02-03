#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T, Q, pos;
    vector<int> queries;
    string query;
    cin>>T;
    while(T--){
    	cin>>Q;
    	pos = 0;
    	queries.clear();
    	int i;
    	while(Q--){
    		cin>>query;
    		if(query == "SAME"){
    			cin>>query;
    			cin>>i;
    			pos += queries.at(i-1);
    			queries.push_back(queries.at(i-1));
    		}else{
    			if(query == "LEFT"){
    				pos--;
    				queries.push_back(-1);
    			}else{
    				pos++;
    				queries.push_back(1);
    			}
    		}
    	}
    	cout<<pos<<"\n";
    }
    return 0;
}
