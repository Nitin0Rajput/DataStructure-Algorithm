Find the union and intersection of two arrays,here is the code-


#include <iostream>
using namespace std;
void Union_two_arrays(int arr1[],int arr2[],int m,int n){
  int i=0;
  int j=0;
  while(i<m && j<n){
    if(arr1[i]<arr2[j]){
      cout<<arr1[i];
      i++;
    }else if(arr2[j]<arr1[i]){
      cout<<arr2[j];
      j++;
    }
    else{
cout<<arr2[j];
j++;
i++;
    }
  }
  while(i<m){
    cout<<arr1[i++];
  }
  while(j<n){
    cout<<arr2[j++];
  }

 }
int main() {
  int f;
  cout<<"Enter your first array's size : ";
  cin>> f;

 int arr1[f];
 
 cout<<"Enter the "<<f<<" first array's elements "<<endl;
 for(int i=0;i<f;i++){
 cin>>arr1[i];
 }
 int s;
  cout<<"Enter your second array's size : ";
  cin>> s;

 int arr2[s];
 
 cout<<"Enter the "<<s<<" second array's elements "<<endl;
 for(int i=0;i<s;i++){
 cin>>arr2[i];
 }int m=sizeof(arr1)/sizeof(arr1[0]);
 int n=sizeof(arr2)/sizeof(arr2[0]);
 cout<<"Here is the union of these two arrays "<<endl;
  Union_two_arrays(arr1,arr2,m,n);

 return 0;
 
 }
