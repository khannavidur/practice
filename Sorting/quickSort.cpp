#include <iostream>
using namespace std;

void quickSort(int *a,int l,int r){
    int i,p,pivot;
    if(r>l){
        i = l;
        pivot = a[l];
        p = r+1;
        do{

            do{
                i++;
            }while(a[i]<pivot);

            do{
                 p--;
            }while(a[p]>pivot);

            if(i<p){
                int t = a[i];
                a[i] = a[p];
                a[p] = t;
            }

        }while(i<p);

        int x = a[l];
        a[l] = a[p];
        a[p] = x;


        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main() {
	int a[] = {1,2,6,-9,8,9,3};
	quickSort(a,0,6);
	for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
	}
	return 0;
}

