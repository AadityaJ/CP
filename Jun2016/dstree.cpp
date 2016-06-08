#include <iostream>

using namespace std;

class node{
public:
	int data;
	node *parent;
	int rank;
	node(int a){
		data=a;
	}
};

void makeset(node *x){
	cout<<"makeset\n";
	x->parent=x;
	x->rank=0;
}

node *find_set(node *x){
	if(x!=x->parent) x->parent=find_set(x->parent);
	return x->parent;
}

void link(node *x,node *y){
	if(x->rank > y->rank)
		y->parent=x;
	else{
		x->parent=y;
		if(x->rank==y->rank) y->rank+=1;
	}
}
void uni(node *x,node *y){
	link(find_set(x),find_set(y));
}
int main(int argc, char const *argv[])
{
	node k;
	node *arr[6];
	cout<<"main\n";
	for(int i=0;i<6;i++){
		arr[i].node(i);
		makeset(arr[i]);
	}
	uni(arr[1],arr[2]);
	uni(arr[4],arr[2]);
	uni(arr[4],arr[3]);
	return 0;
}