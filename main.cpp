#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char k=0;
    cin>>k;
    if (convert(k)==true){
        cout<<k<<endl;
    }
    else{
        cout<<"errore"<<endl;
    }
    return 0;
}

