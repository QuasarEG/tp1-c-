#include <iostream>
using namespace std;
#include <string>
using std::string;
int main(){
    string tab1[5];
    string max;
    for(int i=0;i<5;i++){
        cout<<"entrer le mot numero "<<i+1<<": ";
        getline(cin,tab1[i]);
        if(i==0 || tab1[i].length()>tab1[i-1].length())
        max=tab1[i];
    }
    cout<<max<<endl;   
    }