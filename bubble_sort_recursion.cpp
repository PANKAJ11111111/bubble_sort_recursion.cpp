#include<bits/stdc++.h>
using namespace std;

void bubble(int *arr,int l,int s){
  if(s>l){
    return ;
  }
  for(int i=s;i<l;i++){
    if(arr[i]>arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  bubble(arr,l-1,s);
}

int main(){
int arr[10];
int n;
cin>>n;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
bubble(arr,n,0);
for(int i=0;i<n;i++){
  cout<<arr[i];
}
}
