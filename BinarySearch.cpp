#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binSearch(int A[],int l, int r, int m){
    int mid = (r+l)/2;
    if(A[mid]==m){
        return mid;
    }
    if(A[mid]<m){
        return binSearch(A,mid+1,r,m);
    }
    else{
        return binSearch(A,l,mid-1,m);
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int x=0; x<n; x++){
        cin>>A[x];
    }
    int m;
    cin>>m;
    sort(A,A+n);
    int k; 
    k = binSearch(A,0,n-1,m);
    cout<<k;
    for(int i=0;i<n;i++){
        //cout<<A[i]<<" ";
    }
    return 0;    
}
