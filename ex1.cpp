#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int unit,x;
    cout<<"choisir l'unité de conversion : (1 : km ; 0 : mile)"<<endl;
    cin>>unit;
    cout<<"donner la distance a convertire";
    cin>>x;
    if(unit==1){
        x=x*0.6;
        cout<<"la distance en mile est : "<<x<<endl;
    }
    else{
        x=x*1.6;
        cout<<"la distance en kilometers est : "<<x<<endl;
    }
}