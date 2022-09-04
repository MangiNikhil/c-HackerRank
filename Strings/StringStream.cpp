#include <bits/stdc++.h>
using namespace std;
vector<int> parseInts(string str){
    stringstream ss(str);
    string s;
    char delim=',';
    vector<int> v;
    while(!ss.eof()){
        getline(ss,s,delim);
        int temp=stoi(s);
        v.push_back(temp);
    }
    return v;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
