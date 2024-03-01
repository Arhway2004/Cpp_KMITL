// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class Temperature{
// //     private:
// //         int num;

// //     public:
// //         Temperature(){};
// //         Temperature(int num):num(num){}

// //         void FOC(int num){
// //             cout << ((num-32)*5/9);
// //         }//(32°F − 32) × 5/9 = 0°C
// //         void COF(int num){
// //             cout << (num *(9/5)+32);
// //         }//(0°C × 9/5) + 32 = 32°F
// // };

// // int main(){
// //     Temperature Tem;
// //     int num;
// //     // bool TF =true;
// //     while(true){
// //         cout << "Enter temperature: ";
// //         cin >> num;
// //         if(!cin){
// //             cout << "Invalid input";
// //             cin.clear();
// //             cin.ignore(numeric_limits<streamsize>::max(), '\n');
// //             continue;
// //         }
// //         char check;
// //         cout <<"Convert to (C)elsius or (F)ahrenheit ? Enter C or F:";
// //         cin >> check;
// //         if(check =='c'|| check == 'C'){
// //             Tem.COF(num);
// //             cout << endl;
// //         }else if(check =='F'|| check == 'f'){
// //             Tem.FOC(num);
// //             cout << endl;

// //         }
// //         string YN;

// //         cout << "Do you want to perform another conversion? (Y/N): ";
// //         cin >> YN;
// //         if(YN =="N"||YN == "n"){
// //             // TF=false;
// //             break;
// //         }else if(YN =="Y"||YN == "y"){
// //             // TF=true;
// //             continue;
// //             // break;
// //         }else{
// //             cout << "Invalid input"<<endl ;
// //         }
// //     }
// //     return 0;


// // }

// #include <iostream>
// #include <string>
// using namespace std;



// class GuessNumberGame{
//     private:
//         int x=rand()%100+1;
//     public:
//         GuessNumberGame(){}
//         GuessNumberGame(int x):x(x){}
//         string  Guessing(int num){
//             if(num < x){
//                 return "Higher than your number. Try again: ";

//             }
//             else if (num > x){
//                 return "Lower than your number. Try again: ";
//             }
//             else if (num == x){
//                 return "Congratulation! You win.";
//             }
//         }
// };
// int main(){
//     GuessNumberGame GNG;
//     int x =0;
//     int number;
//     cout << "Guess the number (between 0 and 100): ";
//     // cin >> number;
//     // if(!cin){
//     //     cout << "Invalid input";
//     //     cin.clear();
//     // }
//     while(true){
//         cin >> number;
//         if(!cin){
//             cout << "Invalid input";
//             cin.clear();
//         }
//         cout << GNG.Guessing(number);
//         ++x;
//         if(x==10||GNG.Guessing(number) == "Congratulation! You win."){
//             break;
//         }
//     }
// }
#include <iostream>

void add_element(double*& arr, int& size, double new_element) {
    // Check if the array is empty
    if (size == 0) {
        // Create a new array with a size of one
        arr = new double[1];
        arr[0] = new_element;
        size = 1;
    } else {
        // Create a new array with one more element
        double* new_arr = new double[size + 1];

        // Copy elements from the old array to the new array
        for (int i = 0; i < size; ++i) {
            new_arr[i] = arr[i];
        }

        // Add the new element
        new_arr[size] = new_element;

        // Delete the old array and assign the new array to the pointer
        delete[] arr;
        arr = new_arr;

        // Update the size
        ++size;
    }
}

int main() {
    int size = 0; // Starting with an empty array
    double* arr = nullptr;

    // Add a new element to the empty array
    add_element(arr, size, 7.8);

    std::cout << "Array after adding element: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Clean up
    delete[] arr;

    return 0;
}

