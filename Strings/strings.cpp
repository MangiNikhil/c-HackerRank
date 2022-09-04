#include <iostream>
#include <string>
using namespace std;

int main() {
	int a,b;
    string str1,str2;
    cin>>str1>>str2;
   
    a=str1.length();
    b=str2.length();
    string scpy1,scpy2;
    cout<<a<<" "<<b<<endl;
    cout<<str1+str2<<endl;
    scpy1=str1[0];
    scpy2=str2[0];
    str1[0]=scpy2[0];
    str2[0]=scpy1[0];
    cout<<str1<<" "<<str2;  
          
    return 0;
}
