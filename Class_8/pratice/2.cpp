#include <iostream>
#include <array>
using namespace std;

array<int,2> mystery3(const char*);

int main(){
    char string1[80];
    cout << "Enter a string: ";
    cin >> string1;
    if(strlen(string1)>80){
        cout << "Invalid input" << endl;
    }
    // cout <<
    cout << "Length of the string: " << mystery3(string1) << endl;
    cout << "Length of the string: " << mystery3(string1) << endl;
}
array<int,2> mystery3(const char* s){
    array<int,2>keep;
    unsigned int x;
    int Vcount =0;
    for (int x=0; *s !='\0'; ++s){
        ++x
        if(*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ||
            *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u'){
                ++Vcount;
        }
    }
    keep[0] =x;
    keep[1]=Vcount;
    return keep;
}
// int mystery3(const char* s){
//     unsigned int x;
//     for(int i =0; *s != '\0'; ++i){
//         ++x;

//     }
//     return x;
// }