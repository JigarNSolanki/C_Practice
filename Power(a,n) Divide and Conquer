#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int power(int a,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return a;
    }
    if(n%2==0){
        return power(a,n/2)*power(a,n/2);
    }
    if(n%2==1){
        return power(a,(n-1)/2)*power(a,(n-1)/2)*a;
    }
}

int main(){
    int a,n;
    cin>>a>>n;
    long int p;
    p = power(a,n);
    cout<<p;
    return 0;
}
