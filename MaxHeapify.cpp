#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void MaxHeapify(int A[], int q, int n){
    int l = 2*q-1;
    int r = 2*q;
    int temp;
    if(l<n){
        if(A[l]>A[r] && A[l]>A[q]){
            temp = A[q];
            A[q] = A[l];
            A[l] = temp;
            MaxHeapify(A,l,n);
        }
        if(A[r]>A[q] && A[r]>A[l]){
            temp = A[q];
            A[q] = A[r];
            A[r] = temp;
            MaxHeapify(A,r,n);
        }
    }
}    

int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    
    MaxHeapify(A,x,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    //cout<<x;
    return 0;
}
