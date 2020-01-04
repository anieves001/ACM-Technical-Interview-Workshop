/*Problem:
 * Given an array of N unique integers and a target number t, return a list of triplets (a,b,c) such that a+b+c=t.*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

  string s;
  int arr[argc-1];
  cout<<"Input: [";
  for(int i=1;i<argc;i++){
    s=argv[i];
    arr[i-1]=stoi(s);
    cout<<arr[i-1];
    if(i<argc-1)
      cout<<",";
  }
  cout<<"]"<<"\n";
  int t;
  cout<<"Enter a target number: ";
  cin>>t;
/////////://////My Solution///////////////////
//Add all possible combinations and print if target has been reached.
  cout<<"Output: [";
  for(int i=0;i<argc-1;i++){
    for(int j=i+1;j<argc-1;j++){
      for(int k=j+1;k<argc-1;k++){
        if(((arr[i]+arr[j])+arr[k])==t){
          cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
        }
      }
    }
  }
  cout<<"]"<<"\n";
  return 0;
}
