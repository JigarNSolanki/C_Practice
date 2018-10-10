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

void HeapSort(int A[], int n){
    int B[n];
    for(int i=n-1; i>=0;i--){
        B[n-1-i] = A[0];
        A[0] = A[i];
        if(i>=1){
        MaxHeapify(A,0,i);
        }
    }
    for(int j=0;j<n;j++){
        A[j] = B[n-1-j];
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
    HeapSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
