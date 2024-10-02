#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a,b;
    cout<<"saisir les deux entier"<<endl;
    cin>>a>>b;
    cout<<"les deux entiers avant swap"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"les deux entiers apres swap"<<a<<" "<<b<<endl;
    return 0;
    }