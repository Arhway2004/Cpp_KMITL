#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void mystery1(char * string1, const char * string2);
void mystery2(char * string1, const char * string2);
int main(){
    char string1[80];
    char string2[80];

    cout << "case 1 Normal concat: E'nter two string: ";
    cin >>string1;
    cin >> string2;
    mystery1(string1,string2);

    cout << "case 2 overflow: Enter two string:";
    cin >>string1;
    cin >> string2;
    mystery1(string1, string2);
    // cout << "case 1 Normal concat: Enter two string: " << mystery1(string1,string2) <<endl;
    // cout << string1 << endl;

    cout << "case 3 substring: Enter two string:";
    cin >>string1;
    cin >> string2;
    cout << "Is string2 a substring of string1";
    mystery2(string1, string2);
    
    return 0;

}

void mystery1(char * string1, const char * string2){
    size_t s1L = strlen(string1);
    size_t s2L = strlen(string2);
    if(s1L>=80 || s2L>=80){
        cout << "Error: Insufficient space for concatenation" << endl;

    }else if(s1L<=80 || s2L<=80){
        cout << string1 << string2 <<endl;
        // cout << "Error: Insufficient space for concatenation" << endl;
    }

}
#include <iostream>
#include <cstring> // For strlen and strncmp

void mystery2(char *string1, const char *string2) {
    size_t s1 = strlen(string1);
    size_t s2 = strlen(string2);
    int count = 0;

    // Adjusted loop conditions to prevent buffer overrun
    for (size_t i = 0; i + s2 <= s1; ++i) { // Ensure room for comparison without going out of bounds
        for (size_t j = 0; j < s2; ++j) { // No need to compare beyond the length of string2
            if (string1[i + j] == string2[j] && strncmp(string1 + i + j, string2, s2) == 0) {
                ++count;
                break; // Exit the inner loop on first match
            }
        }
    }

    if (count > 1) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}

// void mystery2(char * string1, const char * string2){
//     size_t s1 = strlen(string1);
//     size_t s2 = strlen(string2);
//     int count =0;
//     for(int i =0; i<= s1; ++i){
//         for( int j=0; j<=s2; ++j){
//             // if(string1[i+j] == string2)
//             if (string1[i + j] == string2[0] &&  // Check first character match
//     strncmp(string1 + i + j, string2, s2) == 0){
//                 // cout << "Yes"
//                 ++count;
//                 break;
//             }
//         }
//     }
//     if(count >1){
//         cout << "Yes";
//     }else{
//         cout << "NO";
//     }
// }
// void mystery2(char *string1, const char *string2) {
//     size_t s1 = strlen(string1);
//     size_t s2 = strlen(string2);
//     int count = 0;

//     for (int i = 0; i <= s1 - s2; ++i) {
//         bool match = true;
//         for (int j = 0; j < s2; ++j) {
//             if (string1[i + j] != string2[j]) {  // Compare individual characters
//                 match = false;
//                 // break;
//             }
//         }
//         if (match) {
//             count++;
//             // cout << "Yes" << endl;  // Uncomment to print for each match
//             break;  // Exit inner loop after finding a match
//         }
//     }

//     if (count > 0) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// void mystery2(char * string1, const char * string2){
//     int cout=0;
//     size_t s1L = strlen(string1);
//     size_t s2L = strlen(string2);
//     // int s1 = stri;
//     for(int i =0; i< s1L; ++i){
//             // int cout =0;
//         for(int j =0; j< s2L; ++j){
//             // int cout =0;
//             if(string1[i] == string2[j]){
//                 cout++;
//                 if(cout == s2L){
//                     std::cout string;
//                     // cout << "Is string2 a substring of string1" << endl;
//                     cout << "Is string2 a substring of string1" << endl;
//                     // cout << "Is string2 a substring of string1";
//                     // cout << endl;
//                     // break;
//                 }            
//             }        
//         }
//     }
// 
// }
// void mystery2(char *s1, const char *s2){
//     int count = 0;
//     int s1L = strlen(s1);
//     int s2L = strlen(s2);
//     for (int i =0; i < s2L; i++){
//         for (int j =0; j < s1L;j++){
//             if(s2[i] == s1[j]){//here have been error wrong size
//                 ++count;
//                 break;
//             }else{
//                 count = 0;
//             }
//         }
//     }
//     if (count == s2L){
//         cout << "Yes" << count << " "<< s2L<< endl;
//     }else{
//         cout << "No" << count << s2L<< endl;
//     }

// }
// void mystery2(char *string1, const char *string2) {
//     int cout = 0;  // Declare outside loops
//     size_t s1L = strlen(string1);
//     size_t s2L = strlen(string2);

//     for (int i = 0; i < s1L; ++i) {
//         for (int j = 0; j < s2L; ++j) {
//             if (string1[i] == string2[j]) {
//                 cout++;
//                 if (cout == s2L) {
//                     std::string cout ;
//                     cout << "Is string2 a substring of string1";
//                     cout << endl;
//                     break;  // Exit both loops after finding a match
//                 }
//             }
//         }
//     }
// }