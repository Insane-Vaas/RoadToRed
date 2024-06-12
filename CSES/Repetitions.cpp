#include<iostream>
#include <vector>
using namespace std;
#define ll long long


int main(){

    string str = "";
    cin>>str;
    ll count = 1;
    ll result = 0;
    for(int i=1;i<str.length();i++){
        if(str[i] == str[i-1])count++;
        else{
            result = max(result,count);
            count = 1;
        }
    }
    result = max(result,count);

    cout<<result<<endl;

    return 0;
}
