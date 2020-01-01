/*Problem:
  Given an array of values, return the maximum difference of two numbers given that the smaller number must be before the larger.*/
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

  string s;
  int arr[argc-1];
  cout<<"Input: [";
  for(int i=1;i<argc;i++){  //convert char* to string to int
    s=argv[i];
    arr[i-1]=stoi(s); //convert string to int using stoi()
    cout<<arr[i-1]; //display int array
    if(i<argc-1)
      cout<<",";
  }
  cout<<"]"<<"\n";

  int buff,num1,num2,maxdiff=0;
  for(int i=0;i<argc-1;i++){  //Compare each element to the next elements in the array.
    for(int j=i+1;j<argc-1;j++){
      if(arr[i]<arr[j]){  //if the current element is less than the next element perform subtraction
        buff=arr[j]-arr[i];
        if(buff>maxdiff){ //constantly check to see if element subtracted is larger than previously calculated max difference.
          maxdiff=buff; //store it in maxdiff if it is larger than what is in the buffer and store the numbers that produce maximum difference.
          num1=arr[i];
          num2=arr[j];
        }
      }
    }
    
  }
  cout<<"maximum difference = "<<maxdiff<<"\n";
  cout<<"smaller number is "<<num1<<" and larger number is "<<num2<<"\n";
  return 0;
}
