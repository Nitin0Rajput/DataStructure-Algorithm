#include <iostream>
using namespace std;
void Intersection_two_arrays(int arr1[],int arr2[],int m,int n){
  int i=0;
  int j=0;
  while(i<m && j<n){
    if(arr1[i]<arr2[j]){
      i++;
    }else if(arr2[j]<arr1[i]){
      j++;
    }
    else{
cout<<arr2[j];
j++;
i++;
    }
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
 cout<<"Here is the intersection of these two arrays "<<endl;
  Intersection_two_arrays(arr1,arr2,m,n);

 return 0;
 
 }