#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int N, B, H, W, p, v;
	while (cin >> N) {
		cin >> B >> H >> W;
		int min_cost = 10000000, cost;
		/* for each hotel */
		for (int h = 0; h < H; h++) {
			/* read price of a room */
			cin >> p;
			p = p * N;
			/* for each weekend */
			for (int w = 0; w < W; w++) {
				/* read and process each vacancy, v */
				cin >> v;
				if (v >= N) {
					if( p < min_cost){
						min_cost = p;
					}
				}
			}
		}
		if(min_cost > B){
			cout<<"stay home\n";
		}else{
			cout<<min_cost<<"\n";
		}
	}
	return 0;
}
