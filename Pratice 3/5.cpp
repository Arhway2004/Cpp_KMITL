#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "put some thing";
    cin >> x;
    if(!(cin >>x)){
        cout <<"invalid";
        cin.clear();
        cin.ignore(10000,'\n');
    }
    cout <<x;
    return 0;
}
