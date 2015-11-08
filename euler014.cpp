// euler014.cpp
#include <cstdio>
using namespace std;
int main(){
	const int size = 5000001;
	int look_up[size];
	for (int i = 0; i < size; i++){
		int count = 1;
		long long int k = i;
		while (k > 1){
			if (k < i){
				count = look_up[k] + count - 1;
				k = 1;
			}
			else{
				++count;
				if (k % 2){
					k = 3 * k + 1;
				}
				else{
					k = k / 2;
				}
			}
		}
		look_up[i] = count;
	}
	// cache
	int max = 1, max_at = 0;
	for (int i = 0; i <size; i++){
		if (look_up[i] >= max){
			max = look_up[i];
			max_at = i;
		}
		look_up[i] = max_at;
	}
	int T, N;
	scanf("%d", &T);
	while (T--){
		scanf("%d", &N);
		printf("%d\n", look_up[N]);
	}
	return 0;
}