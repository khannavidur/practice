#include <iostream>
using namespace std;

void selectionSort(int *a,int n){
int value,j;
    for(int i=1;i<n;i++){
        value = *(a+i);
        j = i;
        while((j>0) && (*(a+j-1)>value)){
            *(a + j) = *(a+j-1);
            j--;
        }
        *(a+j) =  value;
    }
}


int main() {
	int a[] = {2,1,6,8,9,3};
	selectionSort(a,6);
	for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
	}
	return 0;
}


