#include<iostream>
using namespace std;
int main(){

  int t;
  cout<<"Enter number of testcases=";
    cin>>t;
  for(int j=0;j<t;j++){
  int n,mid;
  cout<<"Enter the limit of array=";
  cin>>n;
  int arr[n];
  cout<<"Enter elements\n";
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int count=1;
  int k;
  cout<<"Enter searching element=";
    cin>>k;
  int start=0;
  int end=n-1;
  while(end>=start){
     mid=(start+end)/2;
     if(arr[mid]==k){
        cout<<"Present\n"<<"Number of comparision="<<count<<endl;
         break;
         }
     else if(arr[mid]<k){
         start=mid+1;
         count++;
     }
    else{
      end=mid-1;
      count++;
      }
  }
    if(end<start){
            count--;
       cout<<"Not present\n"<<"Number of comparison="<<count<<endl;
    }
  }
    return 0;
    }

