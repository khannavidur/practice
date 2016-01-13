#include <iostream>
using namespace std;

int linearSearch(int *a,int n,int x){
    for(int i=0;i<n;i++){
        if(*(a+i) == x)
            return 1;
    }
    return 0;
}


int main() {
	int a[] = {1,2,6,8,9,3},x;
	x = linearSearch(a,6,2);
	if(x)
        cout<<"number found";
    else
        cout<<"number not found";
	return 0;
}
