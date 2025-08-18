#include <bits/stdc++.h>
using namespace std;

void largest(int arr[],int n){
    int l =arr[0];
    for (int i = 0; i < n; i++)
    {
        if(l<=arr[i]) l = arr[i];
    }
    int k;
    for (int i = 0; i < n; i++)
    {
        if(k<=arr[i] && arr[i] != l ) k = arr[i];
    }
    cout<<"second largest element is "<<k;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    largest(arr,n);
    
    return 0;
}