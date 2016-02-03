#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	string input, output;
	int first = true;
	while (getline(cin , input)) {

		output.clear();
		for (unsigned int i = 0; i < input.length(); i++) {
			char ch = input[i];
			if(ch == '\"'){
				if(first){
					output.append("``");
					first = false;
				}else{
					output.append("\'\'");
					first = true;
				}
			}else{
				output.push_back(ch);
			}
		}
		cout<<output<<"\n";
	}
	return 0;
}

