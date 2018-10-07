#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void Quicksort(int A[], int l, int r){
    if(l<r){
        int piv = r;
        int j = l-1; 
        int t;
        for(int i=0;i<(r-l) ;i++){
            if(A[l+i]<A[piv]){
                j = j+ 1;
                t = A[l+i];
                A[l+i] = A[j];
                A[j] = t;
            }
        }
        t = A[piv];
        A[piv] = A[j+1];
        A[j+1] = t;
        
        Quicksort(A,l,piv-1);
        Quicksort(A,piv+1,r);
    } 
}



int main() {
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
	    cin>>A[i];
	}
    Quicksort(A,0,n-1);
    for(int k=0;k<n;k++){
        cout<<A[k]<<" ";
    }
    return 0;
}
