#include <iostream>
using namespace std;
bool premier (int x){
    bool ret = true;
    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) 
            ret = false;
    }
    return ret;
}

int main() {
    int n;
    cout << "Entrer un nombre : ";
    cin >> n;
    if (premier(n))
    cout << n << " est un nombre premier" << endl;
    else{
    cout << n << " n'est pas un nombre premier";
    }
}