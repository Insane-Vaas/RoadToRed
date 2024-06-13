#include<iostream>
using namespace std;
#define ll long long


int main(){

    ll n = 0;
    cin>>n;
    while(n--){
        string str = "";
        cin>>str;

        if(str.length() > 10){
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }

    return 0;
}
