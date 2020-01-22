#include<iostream>
using namespace std;

int main()
{
  int arr[1000],i,j,k,n,currsum=0,maxsum=0,left,right;   
  cin>>n;
  for(i=0;i<n;i++){   
  cin >>arr[i];
  }
  cout<<endl;
  
  for(i=0;i<n;i++){
      for(j=i;j<n;j++){
          currsum=0;
          for(k=i;k<=j;k++){
              currsum+=arr[k];
              cout<<arr[k]<<" ";
          }
          cout<<"="<<currsum;
          if(maxsum<currsum){
              maxsum=currsum;
              left=i;
              right=j;
          }
          cout<<endl;
      }
      cout<<endl;
  }
  
  cout<<"Maxsum = "<<maxsum<<endl;
  cout<<"max subarray: ";
  for(k=left;k<=right;k++){
  cout<<arr[k];
  }
  
    return 0;
}
