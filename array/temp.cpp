#include <bits/stdc++.h>
using namespace std;


void secondlargest(int arr[],int n){
          int ss;
          int s=arr[0];
            for (int i = 0; i < n; i++)
            {
                if(s<arr[i]){
                    ss = s;
                    s=arr[i];
                }
                else if(s>arr[i] && ss<arr[i]){ss=arr[i]; }
            }
            cout<<ss<<endl;
        }
void secondsmallest(int arr[],int n){
          int ss;
          int s=arr[0];
            for (int i = 0; i < n; i++)
            {
                if(s>arr[i]){
                    ss = s;
                    s=arr[i];
                }
                else if(s<arr[i] && ss>arr[i]){ss=arr[i]; }
            }
           cout<<ss;
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
    secondlargest(arr,n);
    secondsmallest(arr,n);
    return 0;
}