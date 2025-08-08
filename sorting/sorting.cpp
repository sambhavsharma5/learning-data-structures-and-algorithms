#include<bits/stdc++.h>
using namespace std;


void selectionsort(int arr[],int n){
             while(n--){for(int i=0;i<n;i++){
                if(arr[i]>arr[n]){
                    swap(arr[i],arr[n]);
                }
                
             }
            }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        selectionsort(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}