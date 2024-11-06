#include<iostream>
#include<vector>
using namespace std;
int SWAP(int &a, int &b){
    int t;
    t=a;
     a=b;
     b=t;
}
int quicksort(vector<int>&dayso,int left, int right){
    while(left<right){
        while(dayso[left]<dayso[0]&&left<=right){
            left<-left+1;
        }
        while(dayso[right]){
            right<-right+1;
        }
        if (left<right) 
		 SWAP(dayso[left],dayso[right]);
    }
}

int (main){
    vector<int> dayso(4,6,2,54,67,3,234,7,8,4,24,5);
    int left=1;
    int right=dayso.size();
}
