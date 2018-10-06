#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int A[], int l, int m, int r){
    int i=0,j=0,k=0;
    int n1 = m-l+1;
    int n2 = r-m;
    int P[n1];
    int Q[n2];
    
    for(int i=0;i<n1;i++){
        P[i] = A[l+i];
        //cout<<"P"<<P[i]<<" ";
    }
    for(int j=0;j<n2;j++){
        Q[j] = A[m+1+j];
        //cout<<"Q"<<Q[j]<<" ";
    }
    
    i=0;
    j=0;
    k = 0;
    while(i<n1 && j<n2){
        if(P[i]<Q[j]){
            A[l+k] = P[i];
            i = i+1;
        }
        else{
            A[l+k] = Q[j];
            j = j+1;
        }
        k=k+1;
    }
    
    while(i<n1){
        A[l+k] = P[i];
        i=i+1;
        k=k+1;
    }
    while(j<n2){
        A[l+k] = Q[j];
        j=j+1;
        k=k+1;
    }
}


void mergeSort(int A[], int l, int r ){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(A,l,m);
        mergeSort(A,m+1,r);
        merge(A,l,m,r);
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int x=0; x<n; x++){
        cin>>A[x];
    }
    mergeSort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;    
}
