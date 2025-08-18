#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int st,int mid,int end){
    int i=st;
    int j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[st+k]=temp[k];
    }
}
void mergesort(vector<int> &arr,int st,int end){
    if(st>=end) return;
    int mid=st + (end-st)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    merge(arr,st,mid,end);
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }
    mergesort(arr,0,arr.size()-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}