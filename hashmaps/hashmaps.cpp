#include <bits/stdc++.h>
using namespace std;

// hashing integers
//  int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>> arr[i];
//   }
//   //precompute
//  int hash[101]={0};
//  for(int i=0;i<n;i++){
//   hash[arr[i]] += 1;
//  }

//   int q;
//   cin >>q;
//   while(q--){
//     int number;
//     cin>>number;

//     cout<<hash[number]<<endl;
//   }
// }

// hashing characters

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  string s;
  cin >> s;
  //precompute
int hash[256] = {0};
for(int i=0;i<s.size();i++){
  hash[s[i]]++;
}


  int q;
  cin>>q;
  while (q--){
    char c;
    cin>>c;
    cout<<hash[c]<<endl;

    
  }
}