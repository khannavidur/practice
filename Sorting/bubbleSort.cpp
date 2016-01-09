#include <iostream>
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


int main() {
	int a[] = {1,2,6,8,9,3};
	bubbleSort(a,6);
	for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
	}
	return 0;
}
