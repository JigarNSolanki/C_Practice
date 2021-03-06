#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void MaxHeapify(int A[], int x, int n){
    int l = 2*(x+1) -1;
    int r = 2*(x+1);
    int temp;
    if(l<n){
        if((A[l]>=A[r]) && (A[l]>A[x])){
            temp = A[l];
            A[l] = A[x];
            A[x] = temp;
            MaxHeapify(A,l,n);
        }
        if((A[r]>A[l]) && (A[r]>A[x])){
            temp = A[r];
            A[r] = A[x];
            A[x] = temp;
            MaxHeapify(A,r,n);
        }
    }
    return;
}

void MakeHeap(int A[], int n){
    if(n==1){
        return;
    }
    for(int i=n/2; i>=0; i--){
        MaxHeapify(A,i,n);
    }
    return;
}


int main() {
	int n;
	cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    MakeHeap(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
