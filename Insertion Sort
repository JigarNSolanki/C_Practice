#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    int k = A[1];
    for(int i=0; i<(n-1);i++){
        int key = A[i+1];
        int j = i;
        while(key<A[j]){
            A[j+1] = A[j];
            A[j] = key;
            j = j-1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
