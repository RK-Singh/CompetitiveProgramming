#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	const int s = 20;
	const int w = 4;
	int G[s][s];
	int max = 0, h, v, ld, rd;
	for(int r=0;r<s;r++){
		for(int c=0;c<s;c++){
			cin>>G[r][c];
		}
	}
	// process the matrix
	for(int r=0;r<=s-w;r++){
		for(int c=0;c<=s-w;c++){
			
			h = G[r][c]*G[r][c+1]*G[r][c+2]*G[r][c+3];
			v = G[r][c]*G[r+1][c]*G[r+2][c]*G[r+3][c];
			ld= G[r][c]*G[r+1][c+1]*G[r+2][c+2]*G[r+3][c+3];
			rd= G[r][c+3]*G[r+1][c+2]*G[r+2][c+1]*G[r+3][c];

			if(h>max) max = h;
			if(v>max) max = v;
			if(ld>max) max = ld;
			if(rd>max) max = rd;
		}
	}
	// corner case workaround
	// duplication if put inside loop
	int rv = G[16][19]*G[17][19]*G[18][19]*G[19][19];
	int dh = G[19][16]*G[19][17]*G[19][18]*G[19][19];
	if(rv > max) max = rv;
	if(dh > max) max = dh;

	cout << max << endl;
	return 0;
}