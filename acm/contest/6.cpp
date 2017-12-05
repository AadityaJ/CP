#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int k,p,x;
	cin>>k>>p>>x;
	double m_=sqrt((k*p*1.00)/(x*1.00));
	double m=(int)m_+1;
	cout<<setprecision(5)<<((k*p*1.00)/m)+(m*x*1.00)<<endl;
	return 0;
}
