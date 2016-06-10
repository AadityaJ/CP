// max heap for sorting
#include <stdio.h>
#define MAX 100
inline int left(int a){return arr[a*2];}
inline int right(int a){return arr[(a*2)+1];}
int arr[MAX];
int size;
void max_heapify(int i){
	int l=left(i);
	int r=right(i);
	int largest=i;
	if(l<=size && arr[l]>arr[i])
		largest=l;
	else largest=i;
	if(r<=size && arr[r]>arr[i]) largest=r;
	if(largest!=i){
		int temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		max_heapify(largest);
	}
}
void build_maxheap()
{
    for(int i = size/2 ; i >= 1 ; i-- ){
        max_heapify(i) ;
    }
}
void heapsort(){
	int k=1;
	for(int i=size;i>0;i--){

	}
}
int main(int argc, char const *argv[])
{
	
	return 0;
}