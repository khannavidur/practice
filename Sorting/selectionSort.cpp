#include <iostream>
using namespace std;

void selectionSort(int *a,int n){
int min,swap;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(*(a + j) < *(a + min)){
                min = j;
            }
        }

        if(min != i){
            swap = *(a + i);
            *(a + i) = *(a +min);
            *(a + min) = swap;
        }
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

