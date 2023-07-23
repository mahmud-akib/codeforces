#include<bits/stdc++.h>
using namespace std;

int main()
{
int h;
cin>>h;
while(h--)
{
int k;
cin>>k;
char str[k+1];
char str2[k+1];
cin>>str;
strlwr(str);
int p1=0,p2=0,p3=0,p4=0;
 int j;
 int f=0;
 int w=0,x=0,y=0,z=0;
 
for(int i=0;i<k;i++){
    if(str[i]=='m'){
        p1++;
    }
    else{
     w=i;
     break;
    }
}
for(int i=w;i<k;i++){
        if(str[i]=='e'){
        p2++;
    }
    else{
     x=i;
     break;
    }
}
for(int i=x;i<k;i++){
        if(str[i]=='o'){
        p3++;
    }
    else{
     y=i;
     break;
    }
}for(int i=y;i<k;i++){
        if(str[i]=='w'){
        p4++;
    }
    else{
     break;
    }
}
    int n = p1+p2+p3+p4;
if(n==k  &&  (p1>0 && p2>0 && p3>0 && p4>0)){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
}
