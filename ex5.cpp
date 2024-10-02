#include <iostream>
#include <cmath>
using namespace std;
float f(double x,bool ok){
    if (ok==true){
        return sqrt((x-1)*(2-x));
    }
    else{
        cout<<"resultat non valide"<<endl;
    }
}
int main(){
    double x;
    bool ok;
    float res;
    cout<<"entrer une valeur de x : ";
    cin>>x;
    if ((x-1)*(2-x)>0){
        ok=true;
    }
    else{
        ok=false;
    }
    res=f(x,ok);
    cout<<res<<endl;
    return 0;

}