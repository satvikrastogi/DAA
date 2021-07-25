#include<iostream>
using namespace std;
int main(){
   int t;
   cout<<"Enter the test cases=";
    cin>>t;
   for(int i=0;i<t;i++){
      int n;
      cout<<"Enter the limit of an array=";
        cin>>n;
       int arr[n];
       cout<<"Enter the elements of array\n";
       for(int j=0;j<n;j++)
         cin>>arr[j];
       int count=0,key;
       cout<<"Enter the key element=";
       cin>>key;
       int k;
       for(k=0;k<n;k++){
         count++;
         if(arr[k]==key){
           cout<<"Present\nNumber of comparision="<<count<<endl;
           break;
        }
       }
        if(k==n)
          cout<<"Not Present\nNumber of comparison="<<count<<endl;
          }
          return 0;
          }

