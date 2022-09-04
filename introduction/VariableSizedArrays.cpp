#include <bits/stdc++.h>
using namespace std;
int main() {
    int  n,q,len;
    cin>>n>>q;
    int *arr[n];
    for (int i=0;i<n;i++){
        cin>>len;
        arr[i]=new int[len];
        for(int j=0;j<len;j++){
            cin>>arr[i][j];
        }
    }
    int l ,m;
    for(int i=0;i<q;i++){
        cin>>l>>m;
        cout<<arr[l][m]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
