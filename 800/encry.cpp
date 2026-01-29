#include <bits/stdc++.h>
using namespace std;

void perm(){

    ofstream outFile("passwd.txt");
    for(int i=0; i<26; i++){
        char a = 'A'+i;
        for(int j=0; j<26; j++){
            char b = 'A'+j;
            for(int k=0; k<26; k++){
                char c = 'A'+k;
                for(int l=0; l<26; l++){
                    char d = 'A'+l;
                    outFile<<a<<b<<c<<d<<"2005"<<endl;
                    outFile<<a<<b<<c<<d<<"2007"<<endl;
                    outFile<<a<<b<<c<<d<<"2009"<<endl;
                    outFile<<a<<b<<c<<d<<"2008"<<endl;
                    outFile<<a<<b<<c<<d<<"2006"<<endl;
                }
            }
        }
    }
}

int main(){
    perm();
    cout<<"COMPLETE";
}