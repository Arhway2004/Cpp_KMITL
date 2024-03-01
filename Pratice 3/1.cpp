// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string p1;
//     string p2;
//     int p1_l = p1.size();
//     int p2_l = p2.size();
//     cout << "Player enter P1 name: ";
//     getline(cin , p1);
//     cout << "Player enter P2 name: ";
//     getline(cin , p2);

//     // cout << "Player 1:" << p1 << endl;//9 +2+3+2
//     // cout << "Player 2:" << p2 << endl;

//     for(int i=1; i<=5;++i){
//         if(i==1||i==5){
//             for(int i=1; i<=9+2+5+p1_l+p2_l +9+18; ++i){
//                 cout << "*";
//             }
//         cout << "\n";
//         }
//         if(i==2||i==4){
//             for(int i=1; i<=25+p1_l+p2_l+18;++i){
//                 if(i==1||i==1+p1_l+1+18||i==25+p1_l+p2_l+18){
//                     cout << "*";
//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
//             cout << "\n";

//         }
//         // if(i==3){
//         //     for(int i =1; i<=25+p1_l+p2_l;++i){
//         //         if(i==1||i==1+p1_l+1||i==25+p1_l+p2_l){
//         //             cout << "*";
//         //         }
//         //         else if(i==2||i==2+9+p1_l||i==2+9+p1_l+2||25+p1_l+p2_l-1){
//         //             cout << " ";
//         //         }
//         //         else if(i==3){
//         //             cout << "Player 1:"<< p1_l ;
//         //         }
//         //         else if(i==i==2+9+p1_l+3){
//         //             cout << "Player 2:"<<p2_l;
//         //         }
//         //     }
//         //     cout << "\n";
//         // }
//         if(i==3){
//             for(int i =1; i<=9;++i){
//                 if(i==1||i==5||i==9){
//                     cout << "*";
//                 }
//                 else if(i==2||i==4||i==6||i==8){
//                     cout << " ";
//                 }
//                 else if(i==3){
//                     cout << "Player 1: "<< p1<< string() ;
//                 }
//                 else if(i==7){
//                     cout << "Player 2: "<<p2;
//                 }
//             }
//             cout << "\n";
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Output Size =";
    cin >> input;
    for(int i =0; i<=input;++i){
        for(int j=0; j<i;++j){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=input-1;i>0;--i){
        for(int j=0; j<i ; ++j){
            cout << "*";
        }
        cout << "\n";
    }
}