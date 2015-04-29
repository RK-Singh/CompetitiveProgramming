// https://www.hackerrank.com/challenges/two-arrays
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
    {
    int T,k, n, flag  = 0;
    vector<int> A, B;
    cin>>T;
    while(T--){
        cin>>n>>k;
        int t;
        for(int i = 0; i< n; i++)
        {
            cin>>t; A.push_back(t);
        }
        for(int i = 0; i< n; i++)
        {
            cin>>t;
            B.push_back(t);
        }
        
            sort(A.begin(),A.end());
        sort(B.begin(),B.end());
               
        for(int i = 0; i< n; i++)
        {
            
            if((A[i]+B[n-1- i]) < k){
                cout<<"NO"<<endl;
                flag = 0;
                break;
            }
            else
                flag++;
        }
        if(flag>0){
            cout<<"YES"<<endl;
        }
        A.clear(); B.clear();
    }
    return 0;
}
