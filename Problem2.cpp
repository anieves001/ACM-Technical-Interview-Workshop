/*Problem:
 * Given an array containing 0s, 1s, and 2s, sort the array in-place in linear time and constant space.
 * */
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

  string s;
  int arr[argc-1];
  cout<<"Input: [";
  for(int i =1;i<argc;i++){
    s=argv[i];
    arr[i-1]=stoi(s);
    cout<<arr[i-1];
    if(i<argc-1)
      cout<<",";
  }
  cout<<"]"<<"\n";
////////////////My Solution//////////////////////
  int j=0,k=argc-2;
  for(int i=0;i<argc-1;i++){  //Since there is no way to know how many 0s,1s or 2s there are, we sort from opposite ends.  
    if(arr[i]==0){    //Look for 0s and swap it with the non-zero value using j
      swap(arr[i],arr[j]);
      j++;  //j is used as a placeholder of the last 0 before a non-zero
    }
    else if(arr[k]==2){   //k is used as a placeholder of the beginning of the 2s.
      k--;  //if a 2 is already where k is we simply decrement k to the next value.
      i--;  //i is decremented so we don't skip over evaluating any values, since we're using else if statements.
    }
    else if((arr[i]==2)&&(k>=i)){ //Look for 2s and swap it with the non-two value using k 
      swap(arr[i],arr[k]);
      k--;
    }
    else if(arr[k]==0){   //Look for 0s at the far right of the array and swap it with a non-zero value using j.
      swap(arr[j],arr[k]);
      j++;
    }
  }
////////////Print Solution//////////////
  cout<<"Solution: [";
  for(int i=0;i<argc-1;i++){
   cout<<arr[i];
   if(i<argc-2)
     cout<<",";
  }
  cout<<"]"<<"\n";

  return 0;
}
