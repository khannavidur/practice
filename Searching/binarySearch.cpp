#include <iostream>
#include<stdio.h>
using namespace std;

void bubbleSort(int *a,int n){
int swap;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(a + j + 1) < *(a +j)){
                swap = *(a + j + 1);
                *(a + j + 1) = *(a +j);
                *(a +j) = swap;
            }
        }
    }
}

int binarySearch(int *a,int l,int r,int x){
    if(r==l && a[r] == x)
        return 1;
    if(r>l){
        int mid = (r + l)/2;
        if(a[mid] == x)
            return 1;
        if(a[mid]>x){
            return binarySearch(a,l,mid,x);
        }

        if(a[mid]<x){
            return binarySearch(a,mid+1,r,x);
        }
    }
    return 0;
}

int main() {
	int a[] = {1,2,6,8,9,3},x;
	bubbleSort(a,6);
	x = binarySearch(a,0,5,2);
	if(x)
        cout<<"number found";
    else
        cout<<"number not found";
	return 0;
}
