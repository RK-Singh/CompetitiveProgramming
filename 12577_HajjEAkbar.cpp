#include<iostream>
#include<string>
#include<map>

int main(){
	using namespace std;
	map<string, string> mapper;
	mapper["Hajj"] = "Hajj-e-Akbar";
	mapper["Umrah"] = "Hajj-e-Asghar";
	int i = 1;
	string input;
	while(cin>>input && input != "*"){
		cout<<"Case "<<i<<": "<<mapper[input]<<"\n";
		i++;
	}
	return 0;
}
