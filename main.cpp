#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int n1=0,n2=1,risultato=0;
    cout<<n2<<endl;
    while (risultato+n1<=n){
        risultato=n1+n2;
        n1=n2;
        n2=risultato;
        cout<<risultato<<endl;
    }

    return 0;
}
