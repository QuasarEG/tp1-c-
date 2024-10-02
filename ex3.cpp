#include <iostream>
#include <cmath>
using namespace std;

float disantce(double xa, double xb, double ya, double yb){
    int dis;
    dis=sqrt(pow(xa-xb,2))+sqrt(pow(ya-yb,2));
    return dis;
}
int main(){
    double xa,xb,ya,yb;
    cout<<"Enter the coordinates of the first point: ";
    cin>>xa;
    cin>>ya;
    cout<<"Enter the coordinates of the second point: ";
    cin>>xb;
    cin>>yb;
    cout<<"The distance between the two points is: "<<disantce(xa,xb,ya,yb);
    return 0;
}