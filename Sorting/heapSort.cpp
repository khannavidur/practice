#include <iostream>
#include<malloc.h>
using namespace std;

struct maxHeap{
    int size;
    int *array;
};

void maxHeapify(struct maxHeap *heap, int index){
    int
        largest = index,
        left    = 2*index + 1,
        right   = 2*(index + 1);

    if((left<heap->size) && (heap->array[left] > heap->array[largest]))
        largest = left;

    if((right<heap->size) && (heap->array[right] > heap->array[largest]))
        largest = right;

    if(largest != index){
        int x                  = heap->array[largest];
        heap->array[largest]   = heap->array[index];
        heap->array[index]     = x;
        maxHeapify(heap,largest);
    }
}

struct maxHeap* createAndBuildHeap(int *array, int size){
    struct maxHeap *heap = (struct maxHeap *)malloc(sizeof(struct maxHeap));
    heap->size = size;
    heap->array = array;
    for(int i = (heap->size-2)/2;i>=0;--i)
        maxHeapify(heap,i);
    return heap;
}

void heapSort(int *a,int n){
    struct maxHeap *heap = createAndBuildHeap(a,n);
    while(heap->size > 1){
        int x  = heap->array[0];
        heap->array[0] = heap->array[heap->size - 1];
        heap->array[heap->size - 1] = x;

        --heap->size;

        maxHeapify(heap,0);
    }
}


int main() {
	int a[] = {1,2,6,-9,8,9,3};
	heapSort(a,7);
	for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
	}
	return 0;
}
