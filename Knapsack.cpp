#include<iostream>
using namespace std;

int max(int a, int b){
    return (a>b)? a: b;
}

int knapsack(int W, int n, int val[], int wt[]){
    int arr[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0 || w==0)
                arr[i][w] = 0;
            else if(wt[i-1] <= w){
                arr[i][w] = max((val[i-1] + arr[i-1][w-wt[i-1]]), arr[i-1][w]);
            }
            else{
                arr[i][w] = arr[i-1][w];
            }
        }
    }
    return arr[n][W];
}
 
int main(){
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W = 50;
    int n = 3;
    cout<< knapsack(W,n,val,wt)<<endl;
    return 0;
}
