//
//  main.cpp
//  WorldHello
//
//  Created by Admin on 8/27/21.
//

#include <iostream>
#include <fstream>//data files
#include <vector>
#include <string>
using namespace std;

void populateFromFile(ifstream& infile2,vector<int>& nums,int size){
    int x;
    for(int i = 0;i<size;i++){
        infile2 >> x;
        nums.push_back(x);// puts nums in vector using push back
    }
}
void printStuff(vector<int> nums,int size){
    for(int i = 0;i<size;i++){
        cout<<nums[i]<<endl;
    }
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums; //vector
    
    ifstream infile("data2.txt");//ifstrean for file in
    
    if(!infile){
        cout<<"unable to get file"<<endl;
        exit(-1);
    }
    cout<<&infile<<endl;//& symbol prints out address of the file
    populateFromFile(infile, nums, 5);
    printStuff(nums, 5);
    return 0;
}
