#include <bits/stdc++.h>
using namespace std;

void abc(vector<int> v, int b){
    sort(v.begin(), v.end());
    for (int i = 0; i < b; i++)
    {
        cout<<v[i];
    }
    
}
int main() {
    int a,b,c;
    cout<<"Enter the size of the Vector \n";
    cin>>a;
    vector<int> vect(a);
    cout<<"Enter the elements of the Vector\n";
    for(int i=0; i<a ; i++){
        cin>>vect[i];
    }
    abc(vect, a);    
    return 0;
}
