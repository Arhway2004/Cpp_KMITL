// #include <iostream>
// #include <vector>
// using namespace std;

// // // void lshift(vector<int>& num){
// // //     if(!num.empty()){
// // //         num.erase(num.begin());
// // //     }
// // //     // erase(begin(),begin()+1)
// // // }

// void lshift(vector<int>& num){// do not for get to put &
//     // vector<int> Num{num};
//     if(!num.empty()){
//         num.erase(num.begin());
//     }
//     // erase(begin(),begin()+1)
// }

// void rshift(vector<int>& num){
//     if(!num.empty()){
//         num.insert(num.begin()+0,0);
//     }
// }

// int main(){
//     vector<int> vec{1,2,3,4,5};
//     cout << "Origianl sequence: ";
//     for(int i =0;i< vec.size(); ++i){
//         cout << vec[i] << " ";
//     }
//     cout << "\n";
//     for(int i=0;i<2;++i){
//         lshift(vec);
//     }
//     cout << "After lshift by: ";
//     for(int i=0;i<vec.size();++i){
//         cout << vec[i] << " ";
//     }
//     cout << "\n";
//     for(int i=0;i<3;++i){
//         rshift(vec);
//     }
//     cout << "After rshift by 3: ";
//     for(int i =0;i<vec.size();++i){
//         cout << vec[i];
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

void remove_negative(vector<double>& num){
    for(int i=0;i<num.size();++i){
        if(num[i]<0){
            num.erase(num.begin()+i);    
        }

    }

}


int main(){
    vector<double> vec={0.8,-5.1,1.6,10.5};
    cout << "Original vector: ";
    for(int i = 0;i<vec.size();++i ){
        cout << vec[i];
        if (vec[i]>0){
            remove_negative(vec);
        }
    }
    cout << "\n";
    cout << "Vector after removing number: ";
    for(int i = 0 ; i<vec.size();++i){
        cout << vec[i];
    }
    return 0;
}

#include <iostream>
#include <array>
using namespace std;

void remove_negative(double num[]){
    for(int i=0;i<sizeof(num);++i){
        if(num[i]<0){
            num[]
            // num.erase(num.begin()+i);    
        }

    }

}


int main(){
    // vector<double> vec={0.8,-5.1,1.6,10.5};
    double vec[]={0.8,-5.1,1.6,10.5};
    cout << "Original vector: ";
    for(int i = 0;i<sizeof(vec);++i ){
        cout << vec[i];
        if (vec[i]>0){
            remove_negative(vec);
        }
    }
    cout << "\n";
    cout << "Vector after removing number: ";
    for(int i = 0 ; i<sizeof(vec);++i){
        cout << vec[i];
    }
    return 0;
}