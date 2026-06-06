#include <iostream>
using namespace std;


int main(){
    vector<int> milk(3);
    vector<int> cap(3);

    for(int i=0;i<3;i++){
        int c, m;
        cin >> c >> m;
        cap[i] = c;
        milk[i] = m;
    }

    for(int i=0; i<100; i++){
        int a, b, c;
        a = milk[i%3];
        b = milk[(i+1)%3];
        c = cap[(i+1)%3];
        if(b+a <= c){
            b+=a;
            a = 0;
        } else {
            b = c;
            a -= (c-b) ;           
        }
    }

    for(int i=0;i<3;i++){
        cout << milk[i] << '\n';
    }


}