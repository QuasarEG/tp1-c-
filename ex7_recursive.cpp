#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int factoriel(int x){
    if (x<=1){
        return 1;
    }else{
    return x*factoriel(x-1);
    }
}
int main(){
    int n;
    cout<<"entrer un nombre : ";
    cin>>n;
    cout<<"factoriel de "<<n<<" est : "<<factoriel(n)<<endl;
    return 0;
}