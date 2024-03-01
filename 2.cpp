// #include <iostream>
// using namespace std;

// class TemperatureConverter{
// public:
//     double CTOF(int num){
//         return((num *9/5)+32);
//     }
//     double FTOC(int num){
//         return((num - 32)*(5/9));
//     }
// };

// int main(){
//     TemperatureConverter temp;
//     char check ;
//     while(check != 'N' && check != 'n'){
//         int num;
//         cout << "Enter temperature: ";
//         cin >> num;
//         if(!cin){
//             cin.clear();
//             cout << "Invalide in put";
//         }
//         char enter;
//         cout << "Convert to (C)elsous ot (F)ahrenheit? Enter C or F:";
//         cin >> enter;
//         if(enter == 'C' || enter == 'c'){
//             cout << num <<"Celcius is "<< temp.CTOF(num) << "Fahrenheit"<< endl;
//         }else if(enter == 'F'|| enter =='f'){
//             cout << num <<"Fahrenheit is "<< temp.FTOC(num) << "Celcius"<< endl;
//         }else{
//             cout << "Invalide in put";
//         }
//         cout << "Do you want to perform another conversion? (Y/N): ";
//         cin >> check;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

class GuessNumber{
public:
    int ran(){
        return(rand()%100+1);
    }
};

int main(){
    GuessNumber GN;
    int Gnum;
    int store = GN.ran();
    int Guess;
    while(Guess != store || Gnum !=5 ){
        cout << "Guess the number (between 0 and 100)";
        cin >> Guess;
        if(!cin){
            cout << "Invalide input";
        }else if(Guess > store){
            cout << "Higher than your number. Try agian: ";
        }else if(Guess < store){
            cout << "Lower than your number. Try agian: ";
        }else if(Guess == store){
            cout << "Congratulation! You win.";
        }
        ++Gnum;
    }
}