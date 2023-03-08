#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
// Function to Move all Negative Elements to right side;
 void segregateElements(int arr[],int n)
    {
        int temp[n];
        int j = 0; 
        for (int i = 0; i < n ; i++)
             if (arr[i] >= 0 )
                temp[j++] = arr[i];
             if (j == n || j == 0)
                return;
         for (int i = 0 ; i < n ; i++)
             if (arr[i] < 0)
                temp[j++] = arr[i];
 
          memcpy(arr, temp, sizeof(temp));
       
    }
    int main(){
      
      int arr[]={-1,2,5,-5,-6,7};
      int n=sizeof(arr)/sizeof(int);
      segregateElements(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   
      }
      cout<<endl;
    }