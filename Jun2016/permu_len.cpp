//printall shuffles
#include <string>
#include <iostream>
using namespace std;
// all 0 at starting and then change
bool notIn(bool arr[],int index){
	return !(arr[index]);
}


void printAll(string text,int index,int str_len,bool occur[],string str){
	if(index==0){cout<<str<<endl;return;}
	for(int i=0;i<index;i++){
		if(notIn(occur,index)){
			occur[index]=1;
			str+=text[index];
			printAll(text,index-1,str_len,occur,str);
			occur[index]=0;
		}
	}

}
int main(int argc, char const *argv[])
{
	string str="";
	string text="ABCD";
	int str_len=4;
	bool occur[4];
	for(int i=0;i<str_len;i++) occur[i]=0;
	printAll(text,str_len,str_len,occur,str);
	return 0;
}