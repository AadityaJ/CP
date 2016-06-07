#include <iostream>

using namespace std;

class node{
	//node *next;
	node *head;
public:
	void make_set(int n);
	void unin(int a,int b);
	void find_set(int a,int n);

};
node *arr[100];
node *head_1[100];
void node::make_set(int n){
	cout<<"I am here\n";
	for(int i=0;i<n;i++)
		arr[i]->head=head_1[i];
	cout<<"I am here too";
}
void node::unin(int a,int b){
	arr[a]->head=arr[b]->head;	
}
void node::find_set(int a,int n){
	node *temp = new node;
	temp->head=arr[a]->head;
	for(int i=0;i<n;i++){
		if(arr[i]->head==temp->head) cout<<i<<"   ";
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	node obj;
	//cout<<"Called here in main\n";
	obj.make_set(n);
	obj.unin(1,2);
	obj.unin(1,3);
	obj.find_set(1,n);
	return 0;
}