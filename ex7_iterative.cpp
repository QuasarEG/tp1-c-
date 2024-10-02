#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int factoriel(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"entrer un nombre : ";
    cin>>n;
    cout<<"factoriel de "<<n<<" est : "<<factoriel(n)<<endl;
    return 0;
}