#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int t;
  cout<<"Enter test case=";
  cin>>t;
  for(int i=0;i<t;i++){
  int n;
  cout<<"Enter the limit of array=";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array:";
  for(int j=0;j<n;j++)
    cin>>arr[j];
  int k,count=1;
  cout<<"Enter searching element=";
   cin>>k;
  int limit=sqrt(n);
  int start=0;
  int end=limit;
  while(arr[end]<k){
     start=end;
     end=end+limit;
     count++;
     if(end>n-1){
        end=n-1;
        break;
        }
     }
     int l;
  for(l=start+1;l<=end;l++)
    {
        count++;
    if(arr[l]==k){
      cout<<"Present\nNumber of count="<<count<<endl;
      break;
      }
      }
  if(l>end)
    cout<<"Not present"<<endl;
    }
    return 0;
    }

