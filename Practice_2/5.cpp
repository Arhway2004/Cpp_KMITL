#include <iostream>
#include <array>
#include <iomanip>
#include <numeric>
using namespace std;
int collectRating(){
    int score;
    std::cin >> score;
    while (score<1||score>10){
        std::cout << "PLease enter a rating between 1 and 10: ";
        std::cin >> score;
    }
    return score;
}
// void displayResult(const std::array<std::array<int, 11>,5>&responses,cost std::array<std::string >))
void displayResult(const array<array<int,11>,5>& responses, const array<string,5>& dishes){
    int max = 0;
    int min = 999999;
    int index_max;
    int index_min;
    cout << "Survey Reasults"<< "\n";
    cout << "Dish                 1   2   3   4   5   6   7   8   9   10   Average\n";

    for(int i=0;i<5;++i ){
        cout << setw(20) <<left <<dishes[i];
        for(int j=1;j<=10; ++i){
            cout << setw(3) << responses[i][j] << " ";

        }
        double sum =0.0;
        for (int j =1; j<=10;++i){
            sum += j * responses[i][j];
        }
        if(sum > max){
            max =sum;
            index_max =i;
        }
        if(sum <min){
            min = sum;
            index_min =i;
        }
        double average =sum /5.0;
        cout << setw(7) << fixed<< setprecision(2) << average<< "\n";

    }
    std::cout << "Highest Rated Dish: " << dishes[index_max] << " (Score: " << max << ")" << "\n" ;
    std::cout << "Lowest Rated Dish: " << dishes[index_min] << " (Score: " << min << ")" ;
}
int main() {
    std::array<int, 11> PadThai = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<int, 11> SomTam = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<int, 11> MangoRice = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<int, 11> TomYam = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<int, 11> Green = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::array<std::string, 5> dishes = {"Pad Thai", "Som Tam", "Mango Sticky Rice", "Tom Yum Goong", "Green Curry"};
    std::array<std::array<int, 11>, 5> responses = {PadThai, SomTam, MangoRice, TomYam, Green};

    for (int i = 0; i < 5; i++) {
        std::cout << "Poll " << i + 1 << ":\n";
        std::cout << "Rate Pad Thai on the scale of 1 to 10: ";
         int padThaiRating = collectRatings();
        std::cout << "Rate Som Tam on the scale of 1 to 10: ";
         int somTamRating = collectRatings();
        std::cout << "Rate Mango Sticky Rice on the scale of 1 to 10: ";
         int mangoRiceRating = collectRatings();
        std::cout << "Rate Tom Yum Goong on the scale of 1 to 10: ";
         int tomYamRating = collectRatings();
        std::cout << "Rate Green Curry on the scale of 1 to 10: ";
         int greenRating = collectRatings();

        ++responses[0][padThaiRating];
        ++responses[1][somTamRating];
        ++responses[2][mangoRiceRating];
        ++responses[3][tomYamRating];
        ++responses[4][greenRating];
    }

    displayResult(responses, dishes);

    return 0;
}