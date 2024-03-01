// // #include <iostream>
// // using namespace std;

// // class PopulationGrowth {
// // private:
// //     double currentWorldPopulation;
// //     double annualGrowthRate;

// // public:
// //     PopulationGrowth(){}
// //     PopulationGrowth(double CWP, double AGR): currentWorldPopulation(CWP), annualGrowthRate(AGR / 100.0) {}

// //     void display() {
// //         double initialPopulation = currentWorldPopulation;
// //         double doubledPopulation = initialPopulation * 2;
// //         bool hasDoubled = false;

// //         cout << "Year\tProjected Population\tAnnual Increase" << endl;
        
// //         int year = 1;
// //         while (year <= 75) {
// //             double previousPopulation = currentWorldPopulation;
// //             currentWorldPopulation *= (1 + annualGrowthRate);
// //             double annualIncrease = currentWorldPopulation - previousPopulation;

// //             cout << year << "\t" << currentWorldPopulation << "\t" << annualIncrease << endl;

// //             if (!hasDoubled && currentWorldPopulation >= doubledPopulation) {
// //                 cout << "The population is expected to double in year " << year << endl;
// //                 hasDoubled = true;
// //             }

// //             year++;
// //         }
// //     }
// // };

// // int main() {
// //     PopulationGrowth PPG;
// //     double CWP;
// //     double AGR;
// //     cout << "Enter the current world population: ";
// //     cin >> CWP;
// //     cout << "Enter the annual growth rate (percentage): ";
// //     cin >> AGR;
    
// //     PPG = PopulationGrowth(CWP, AGR);
// //     PPG.display();

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class PopulationGrowth {
// private:
//     double currentWorldPopulation;
//     double annualGrowthRate;

// public:
//     PopulationGrowth(){}
//     PopulationGrowth(double CWP, double AGR): currentWorldPopulation(CWP), annualGrowthRate(AGR / 100.0) {}

//     void display() {
//         double initialPopulation = currentWorldPopulation;
//         double doubledPopulation = initialPopulation * 2;
//         int yearDoubled = 0; // To store the year when population doubles

//         cout << "Year\tProjected Population\tAnnual Increase" << endl;
        
//         int year = 1;
//         while (year <= 75) {
//             double previousPopulation = currentWorldPopulation;
//             currentWorldPopulation *= (1 + annualGrowthRate);
//             double annualIncrease = currentWorldPopulation - previousPopulation;

//             // Rounding the population and annual increase to the nearest integer
//             cout << year << "\t" << static_cast<long long>(currentWorldPopulation + 0.5) << "\t" << static_cast<long long>(annualIncrease + 0.5) << endl;

//             if (yearDoubled == 0 && currentWorldPopulation >= doubledPopulation) {
//                 yearDoubled = year;
//             }

//             year++;
//         }

//         if (yearDoubled > 0) {
//             cout << "The population is expected to double in year " << yearDoubled << endl;
//         }
//     }
// };

// int main() {
//     PopulationGrowth PPG;
//     double CWP;
//     double AGR;
//     cout << "Enter the current world population: ";
//     cin >> CWP;
//     cout << "Enter the annual growth rate (percentage): ";
//     cin >> AGR;
    
//     PPG = PopulationGrowth(CWP, AGR);
//     PPG.display();

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;
class SimpleQuiz{
    private:
        string question;
        string choices[3];
        char CorrectAnswer;
    public:
        SimpleQuiz(){}
        SimpleQuiz(string q, string a, string b,string c, char correct):question(q),CorrectAnswer(correct){
            choices[0] =a;
            choices[1] =b;
            choices[2] =c;
        }
        void display(int question_number){
            cout << "Question "<< question_number << "; "<< question << endl;
            cout << "a. "<< choices[0] << endl;
            cout << "b. "<< choices[1] << endl;
            cout << "c. "<< choices[2] << endl;
        }
        bool check_answer(char answer){
            return answer == CorrectAnswer;
        }
};

int main(){
    SimpleQuiz  questions[5]={//คนละตัวกับข้างบน เเต่class เดีนวกับข้างบน
        SimpleQuiz("What is the capital of France?", "Berlin", "Paris", "London", 'b'),
        SimpleQuiz("Which planet is known as the Red Planet?", "Mars", "Jupiter", "Saturn", 'a'),
        SimpleQuiz("What is the largest mammal?", "Elephant", "Blue Whale", "Giraffe", 'b'),
        SimpleQuiz("Who wrote 'Hamlet'?", "Mark Twain", "Charles Dickens", "William Shakespeare", 'c'),
        SimpleQuiz("What is the chemical symbol for water?", "H2O", "CO2", "O2", 'a'),//if you want to put another strign like "hsaduhh " you need fix at upper function
    };
    int score = 0;
    int question_number =1;
    while(question_number <=5){
        questions[question_number-1].display(question_number);
        char answer;
        cout << "Enter your answer (a, b, c): ";
        cin >> answer;
        switch(answer){
            case 'a':
            case 'b':
            case 'c':
                if (questions[question_number-1].check_answer(answer)){
                    cout << "Correct!"<<endl;
                    score++;
                }else{
                    cout << "Wrong!"<<endl;
                }
                question_number++;
                break;
            default:
                cout << "Invalid input" << endl;
        }
    }
    cout << "Your total score: "<< score << "/5"<< endl;
    return 0;
}
