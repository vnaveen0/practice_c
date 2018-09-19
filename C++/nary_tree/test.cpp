#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(int input[], int size) {
  for (int i=0;i<size;i++) {
    for(int j=i+1;j<size;++j) {
      if(input[i] > input[j]) {
        swap(input[i],input[j]);
      }
    }
  }
 
}



bool create_tree(int input[], int size, int output[], int startidx, int endidx) {
  //size -----
  if(endidx <= startidx) return false;
  
  int start = startidx;
  int end = endidx;
  int mid = size/2;
  output[0] = input[mid];
  
  while(left0idx <= right0idx ){
  
  //----------------------------------
    int left_size = (mid - start)/2;
    int left0_size = left_size/2;

    int left0_idx = start + left0_size/2;

    int left1_size = left_size - left0_size; 
    int left1_size = start+ left0_size -1 + left1_size/2;


    //----------------------------------
    int right_size = (end - mid)/2;

    int right0_size = right_size/2;
    int right0_idx  = mid + right0_size/2;

    int right1_size = right_size - right0_size;
    int right1_idx  = start + right0_size -1 + right1_size/2;


    //----------------------------------
    // root, left0idz, left1idx, right0idx, right1idx
    // 0, 1, 2 , 3, 4, 5
    //
    // left0idx= i*4 +1 
    // left1idx = i*4+2
    // right0idx = i*4+3
    //right1idx  = i*4+4
    //---------------------------------
    
// left0idx <left1idx <right0idx< right1idx
    
    if(left0idx == left1idx){
    
    } 
       //copy left0idx
    
      if(right0idx == right1idx) {
      
      }
      //copy right0idx
  
  
    
    // curr_node_idx;
    int outleft0_idx = curr_node_idx*narry +1;
    int outleft1_idx = curr_node_idx*narry +2;
    int outright0_idx = curr_node_idx*narry +3;
    int outright1_idx = curr_node_idx*narry +4;


    output[curr_node_idx] = input[mid];
    output[outleft0_idx] = input[left0_idx];
    output[outleft1_idx] = input[left1_idx];
    output[outright0_idx] = input[right0_idx];
    output[outright1_idx] = input[right1_idx];
  
   
  
  }
  
  
  
  
  
}



bool create_narr4_tree(int input[], int size, int output[], int startidx, int endidx) {
  
  
  int narry = 4;

  int start = startidx;
  int end = endidx;
  int mid = size/2;
  output[0] = input[mid];
 
  
  
  
  // 1 2 3 4 5 6 7 8 9 
  // root = 5// left0-> 2// left1-> 
  
}

// To execute C++, please define "int main()"
int main() {
  int size = 7;
  int input[size] = {4,5,2,1,7,8,9};
  sort(input,size);
  
  
  for(int k=0; k<size;k++) {
    cout<<input[k]<<" "<<endl;
  }
  
  //   1 2 3 4 5

  return 0;
}


//idx 0 1 2 3 4 5 6 
//val 1 2 3 4 5 6 7 
//    R L0 L1 R0 R1
//idx 3  1  2 4  5 
//val 4  2  3 5 6|| 
//L0 4*i+1
// L1 4*i+2 

//Size = 7


