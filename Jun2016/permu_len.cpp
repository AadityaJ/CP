//printall shuffles
#include <string>
#include <iostream>
using namespace std;
string swap(int a,int b,string text){
	char temp=text[a];
	text[a]=text[b];
	text[b]=temp;
	return text;
}
void printAll(string text,int str_len){
	for(int i=0;i<str_len;i++){
		for(int j=i+1;j<str_len;j++){
			string st=swap(i,j,text);
			cout<<st<<endl;
		}
	}

}
int main(int argc, char const *argv[])
{
	string str="";
	string text="ABCD";
	int str_len=4;
	printAll(text,str_len);
	return 0;
}