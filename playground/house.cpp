#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
int SIDE;
int BASE;
int HEIGHT;
int findMid(int lower, int upper){
    return ceil((double)(lower+upper)/2);
}

string ask(int x, int y) {
    cout << "? " << x << " " << y << endl;
    cout.flush();  
    string response;
    cin >> response;  
    return response;
}

int find_square(int x1, int x2){
    int mid = findMid(x1,x2);
    string res = ask(mid, 0);
    if(x2-x1==1) return x1;
    if(res=="YES") return find_square(mid,x2);
    return find_square(x1,mid);
}

int find_height(int y1, int y2){
    int mid = findMid(y1,y2);
    string res = ask(0, mid);
    if(y2-y1==1) return y1;
    if(res=="YES") return find_height(mid,y2);
    return find_height(y1,mid);
}

int find_base(int x1, int x2){
    int mid = findMid(x1,x2);
    string res = ask(mid, SIDE);
    if(x2-x1==1) return x1;
    if(res=="YES") return find_base(mid,x2);
    return find_base(x1,mid);
}



int main() {
    SIDE = 2*find_square(0,1000);
    cout << SIDE << endl;
    BASE = 2*find_base(0,1000);
    cout << BASE << endl;
    HEIGHT = find_height(SIDE,1000) - SIDE;
    cout << HEIGHT<<endl;

    int area = (SIDE*SIDE) + (0.5*BASE*HEIGHT);
    cout << '!' << " " << area; 
}