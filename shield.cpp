/* Lang : c++ */
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int n; cin >> c >> n;
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(i==j || i+j==n*2 || i==n || j==n) cout << "+" ; else
            if(j-i<=n && i-j<=n && i+j>=n && i+j<=n*3) cout << c ; else cout << ".";
        }
        cout << endl;
    }
    return 0;
}
