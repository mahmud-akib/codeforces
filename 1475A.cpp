#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t!=0){
     long long int n,c=0;
     cin>>n;
     while(true){
        if(n%2==0){
            n/=2;
        }
        else{
            if(n%2!=0 && n>1){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(n==1){
            cout<<"NO"<<endl;
            break;
        }
     }
     t--;
   }
    return 0;
}
