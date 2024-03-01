// // // #include <iostream>
// // // using namespace std;

// // // int main(){
// // //     int num;
// // //     cin >> num;
// // //     if(!cin){
// // //         'Invalid input';
// // //     }
// // //     for(int i = 0;i<=num; ++i ){
// // //         for(int j = 0;j < i; ++j){
// // //             cout << '*';
// // //         }
// // //         cout << "\n";
// // //     }
// // //     for(int i = num-1; i > 0; --i ){
// // //         for(int j=0; j < i; ++j){
// // //             cout << '*';
// // //         }
// // //         cout << "\n";
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main(){
// //     string player1;
// //     string player2;
// //     cout << "Player 1: ";
// //     cout << "Player 2: ";
// //     getline(cin >> player1,player2);
// //     int p1 = player1.length();
// //     int p2 = player2.length();

// //     for(int i=0; i <5;++i){
// //     // for(int i=0;i <= p1+p2+7;i++){
// //         if(i == 0||i == 4){
// //             for(int i=0;i <= p1+p2+7+9+9;++i){
// //                 cout << "*";
// //             }
// //             cout << endl;
// //         }
// //         if(i==1||i==3){
// //             for(int i=0; i<=p1+p2+7+9+9;++i){
// //                 if(i==0||i==p1+1+9+1 || i==p1+p2+7+9+9){
// //                     cout << '*';
// //                 }else{
// //                     cout << ' ';
// //                 }
// //             }
// //             cout << endl;
// //         }
// //         if(i==2){
// //             // for(int i=0;)
// //             cout << "* " << "Player 1: " <<player1 << " * " << "Player 2: " <<player2 << " *"<< endl;
// //         }
// //         cout << endl;


// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main(){
//     string player1;
//     string player2;
//     cout << "Player1 :";
//     getline(cin,player1);
//     cout << "PLayer2 :";
//     getline(cin,player2);
//     int p1 =player1.length();
//     int p2 =player2.length();
//     int m = max(p1,p2);
//     for(int i=0;i<9;++i){
//         // for(int j=0;i<)
//         if(i==0||i==8){
//             cout << "+";
//             for(int i =0;i<m+1+6+1+1+1+1+1;++i){
//                 cout << "=";
//             }
//             cout << "+";

//         }
//         cout << "\n";
//         if(i==5){
//             cout << "+";
//             for(int i = 0;i<m+1+6+1+1+1+1+1;++i){
//                 cout << "-";
//             }
//             cout << "+";
//         }
//         // cout << "\n";
//         if( i == 1|| i==3 || i== 6||i==8){
//             for(int i =0;i<m+1+6+1+1+1+1+1;++i){
//                 if(i==0 || i==m-1){
//                     cout <<"|";
//                 }else{
//                     cout<<" ";
//                 }
//                 // cout << "\n";
//             }
//             cout << "\n";

//         }
//         if(i==3){
//             if(p1==m){
//                 cout << "| Player 1 :" << player1;

//                 cout << " |";
//             }else if (p1!=m){
//                 cout << "| Player 1 :" << player1;
//                 for(int i=0;i<m-2-10-p1;++i){
                    
//                     cout << " ";
//                 }
//                 cout << " |";
//             }
//         if(i==7){
//             if(p2==m){
//                 cout << "| Player 2 :" << player2;
//                 cout << " |";

//             }else if(p2!=m){
//                 cout << "| Player 2 :" << player2;


//                 for(int i=0;i<m-2-10-p1;++i){
                    
//                     cout << " ";
//                 }
//                 cout << " |";

//             }
//         }
//             // cout <<"+ Player1 : " << player1;
//             // for(int i =0;i <)
//         }
//         // cout 
//     }
// }