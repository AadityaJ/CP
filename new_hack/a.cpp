#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;
struct pt{
    int x,y;
};
bool isClockwise(pt p1,pt p2){
    return -p1.x*p2.y+p1.y*p2.x > 0;
}
bool isWithinRadius(pt p1,int radiussq){
    return p1.x*p1.x+p1.y*p1.y <= radiussq;
}
bool isInsideSector(pt t,pt centre,pt sectorStart,pt sectorEnd,int radiussq){
    pt omg;
    omg.x=t.x-centre.x;
    omg.y=t.y-centre.y;
    return !isClockwise(sectorStart, omg) &&
       isClockwise(sectorEnd, omg) &&
       isWithinRadius(omg, radiussq);
}
int main(int argc, char const *argv[]) {
    int te;
    pt ori,start;
    ori.x=50;
    ori.y=50;
    cin>>te;
    start.x=100;
    start.y=100;
    for(int index=1;index<=te;index++){
        int p;
        pt t;
        cin>>p>>t.x>>t.y;
        int theta=(p/100)*360;
        pt end;
        end.x=50*sin(theta*PI/180);
        end.y=50*cos(theta*PI/180);
        cout<<isInsideSector(t,ori,start,end,(50*50))<<endl;
    }
    return 0;
}
