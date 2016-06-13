#include <string>
#include <iostream>
using namespace std;
int str_len;
void printAll(string text,int index,string str){
	if(index==str_len) {cout<<str<<endl;return;}
	else {
		printAll(text,index+1,str);

		str+=text[index];
		printAll(text,index+1,str);

	}
}
int main(int argc, char const *argv[])
{
	string str="";
	string text="ABCD";
	str_len=4;
	printAll(text,0,str);
	return 0;
}