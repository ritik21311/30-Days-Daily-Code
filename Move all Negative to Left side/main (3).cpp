#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
// Function to sort colors
 void Movetoleft(int arr[],int n)
    {
      int l = 0;
      int h = n - 1;
      while(l<h){
        if(arr[l]<0){
        l++;
        }
        else if(arr[h]>0){
          h--;
        }
        else{
          swap(arr[l],arr[h]);
        }
        
      }
       
       
    }
    int main(){
      
      int arr[]={-1,2,5,-5,-6,7};
      int n=sizeof(arr)/sizeof(int);
      Movetoleft(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   
      }
      cout<<endl;
    }