// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;

// // int main(){
// //     vector<int> vec{1,2,3,4,5};
// //     cout << "Original sequence: ";
// //     for(int i =0;i<vec.size();++i){
// //         cout << vec[i];
// //     }
// //     cout << "\n";
// //     vec.erase(vec.begin(), vec.begin()+3);//
// //     cout << "After lshift by 2:";
// //     for(int i=0;i<vec.size();++i){
// //         cout << vec[i];
// //     }
// //     cout << "\n";
// //     vec.insert(vec.begin(),{0,0,0});
// //     vec.insert(vec.end(),{0,0,0});
// //     for(int i =0; i<vec.size();++i){
// //         cout << vec[i];
// //     }
// //     cout << "\n";
// //     return 0;
// // // //     obj.insert(obj.begin(),{0,0});

// //     // vec.erase(begin, begin + 2);

// // }

// // #include <iostream>


// #include <iostream>
// #include <array>
// #include <vector>
// using namespace std;

// // void take(double x, int i){
// //     cout << erase(x.begin+i);
// //     return;
// // }

// // int main(){
// //     vec<int> vec{0.8,-5.1,1.6,-6.5,10.5};
// //     cout << "Original vector: ";
// //     for(int i =0;i<vec.size();i++){
// //         if (vec[i]<0){
// //             cout << take(vec,i);
// //         }

// //     }
// //     return 0;
// // }

// // void take(vector<double> x, int i){
// //     // cout << x;
// //     // if(i>=0 && i<x.size()){
// //         x.erase(x.begin()+i);        
// //     // }

// // }
// void take(vector<double> x){
//     for(int i =0;i<x.size();++i){
//         if(x[i]<0){
//             x.erase(x.begin()+i);
//         }
//     }
//     for(int i =0;i<x.size();++i){
//         cout << x[i];
//     }
// }
// int main(){
//     vector<double> vec{0.8,-5.1,1.6,-6.5,10.5};
//     cout << "Original vector: ";
//     for(int i=0; i<vec.size();++i){
//         cout << vec[i] <<" ";
//     }
//     cout << "\n";
//     cout << "Vector after removing nagative number: ";
//     take(vec);
//     // for(int i=0; i<vec.size();++i){
//     //     if(vec[i]<0){

//     //     }
//     // }
//     // for(int i=0; i<vec.size();++i){
//     //     cout << vec[i] <<" ";
//     // }
// }

