// Program to Print the subsequences whose sum is K
#include<bits/stdc++.h>
using namespace std;

void PrintSubsequences(int ind,int arr[],int n,int sum,int s,vector<int> &ds){
  if(ind==n){
    if(n==s){
      for(auto it : ds)
      cout<<"("<<it<<")"<<" ";
    cout<<endl;
      }
    return;
  }

  ds.push_back(arr[ind]);
  s+=arr[ind];
   PrintSubsequences(ind+1,arr,n,sum,s,ds);
  s-=arr[ind];
  ds.pop_back();
   PrintSubsequences(ind+1,arr,n,sum,s,ds);
  return ;
}
