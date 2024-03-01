// // #include <iostream>
// // #include <string>
// // using namespace std;
// // int main(){
// //     string player_1;
// //     string player_2;
// //     getline(cin, player_1);
// //     getline(cin, player_2);

// //     cout << string(player_1.length() + player_2.length()+27,'*') << endl;
// //     cout << "* " << string(player_1.length()+11,' ') << "*" << string(player_2.length()+12,' ') << '*' << endl ;
// //     cout << "* " <<"Player 1: "<< player_1 << " * " << "Player 2: "<<player_2 << " *" << endl;
// //     cout << "* " << string(player_1.length()+10,' ') <<" * "<< string(player_2.length() + 11,' ') << '*' << endl;
// //     cout << string(player_1.length()+player_2.length()+27,'*') << endl;
// //     // cout << string(p1_name.length()+ p2_name.length() +13,'*') << endl;
// //     // cout << "*  " << string(p1_name.length()+3,' ') << "* " << string(p2_name.length()+3,' ')<<" *"<<endl;
// //     return 0;
// // }
// // // // // when using string should use this symbol ''

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string player_1;
//     string player_2;
//     int max;
//     max = player_1.length() > player_2.length() ? player_1.length() : player_2.length();
//     getline(cin,player_1);
//     getline(cin,player_2);
//     cout << "**" << string(max+17,'*') << "**" << endl;
//     cout << "* " << string(max+17,' ') << " *" << endl;
//     cout << "* " << "Player 1: "<< player_1 << string(player_2.length()/2,' ') << "*" << endl;
//     cout << "* " << string(max+17,' ') << " *" << endl;
//     cout << "**" << string(max+17,'*') << "**" << endl;
//     cout << "* " << string(max+17,' ') << " *" << endl;
//     cout << "* " << "Player 2: "<< player_2 << string(player_1.length()/2,' ') << "*" << endl;
//     cout << "* " << string(max+17,' ') << " *" << endl;
//     cout << "**" << string(max+17,'*') << "**" << endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Output Size= ";
//     cin >> num;
//     if(!std::cin){
//         cout <<"Invalid input";
//     }
//     for(int i=0;i < num;++i){
//         cout << "*";
//         for(int j=0;j<i;++j){
//             cout << "*";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int num ;
//     cout << "Output Size = ";
//     cin >> num;
//     if(!std::cin){
//         cout << "invalide input";
//     }
//     for(int i = 0 ; i<=num ; ++i){
//         // cout << "*";
//         for(int j = 0; j<i; ++j){
//             cout << "*";
//         } 
//     cout << "\n";
//     }
//     for(int x = num - 1; x > 0; --x){
//         for(int y = 0; y < x; ++y){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }


#include <random>
#include <iostream>
#include <iomanip>
#include <cmath>

class Rand_double {
public:
    Rand_double(double low, double high) : dist(low, high) {
        std::random_device rd;
        re.seed(rd());
    }

    double operator()() {
        return dist(re);
    }

private:
    std::default_random_engine re;
    std::uniform_real_distribution<double> dist;
};

int main() {
    const double rnd_min = -1.0, rnd_max = 1.0;
    Rand_double rnd(rnd_min, rnd_max);

    const int N = 0; // Number of points to generate, adjust as needed
    int points_inside = 0;

    for (int i = 0; i < N; ++i) {
        double x = rnd();
        double y = rnd();
        if (x * x + y * y <= 1) {
            ++points_inside;
        }
    }

    double pi_estimate = 4.0 * points_inside / N;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Estimated Pi: " << pi_estimate << std::endl;
    return 0;
}
