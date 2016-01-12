#include <iostream>
using namespace std;
/*
    Fine peace of algorithm reduces the complexity to O(nlogn)
*/
void merge(int a[],int l,int m,int r){
    int
        size_of_array1 = m-l+1,
        size_of_array2 = r-m,
        L1[size_of_array1],
        L2[size_of_array2],
        i,
        j,
        k;


    for(i=0;i<size_of_array1;i++){
        L1[i] = a[l+i];
    }

    for(j=0;j<size_of_array2;j++){
        L2[j] = a[m+1+j];
    }

    i=0;
    j=0;
    k=l;//bullshit mistake in first go ... initialized k=0 ... next time open your fuckin eyes man

    while(i<size_of_array1 && j<size_of_array2){
        if(L1[i]<=L2[j]){
            a[k] = L1[i];
            i++;
        } else {
            a[k] = L2[j];
            j++;
        }
        k++;
    }

    //if L1 still left

    while(i<size_of_array1){
        a[k] = L1[i];
        i++;
        k++;
    }

    //if L2 is left
    while(j<size_of_array2){
        a[k] = L2[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int l,int r){
int m;
    if(r > l){
        m = (l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}


int main() {
	int a[] = {1,2,6,-9,8,9,3};
	mergeSort(a,0,6);
	for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
	}
	return 0;
}
