#include<bits/stdc++.h>
using namespace std;


// void selectionsort(int arr[],int n){
//              while(n--){for(int i=0;i<n;i++){
//                 if(arr[i]>arr[n]){
//                     swap(arr[i],arr[n]);
//                 }
                
//              }
//             }
// }

// void bubblesort(int arr[],int n){
//        for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
//         }
//        }
// }

//9 14 15 12 6 8 13

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
               swap(arr[j-1],arr[j]);
               j--;
        }
    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        // bubblesort(arr,n);
        //selectionsort(arr,n);
        insertionsort(arr,n);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        

} 