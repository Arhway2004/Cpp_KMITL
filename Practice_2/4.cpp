// // #include <iostream>
// // #include <string>
// // using namespace std;

// // class HeartRateMonitor{
// //     private:
// //         string fname;
// //         string lname;
// //         int byear;
// //         int bmonth;
// //         int bday;

// //     public:

// //         HeartRateMonitor(){}
// //         HeartRateMonitor(string fname,string lname, int byear, int bmonth, int bday):fname(fname),lname(lname),byear(byear),bmonth(bmonth),bday(bday){}

// //         int age(int by,int bm, int bd){
// //             int age =2023-by;
// //             if(bm==12&&bd>28){
// //                 ++age;
// //             }
// //             return age;
// //         }
// //         int Hrate(int by,int bm, int bd){
// //             int hrate =220-age(by, bm, bd);
// //             return hrate;
// //         }
// //         int Max(int by,int bm, int bd){
// //             int max = Hrate(by, bm, bd)*0.85;
// //             return max;
// //         }
// //         int Min(int by,int bm, int bd){
// //             int min = Hrate(by, bm, bd)*0.50;
// //             return min;
// //         }
        
// // };

// // int main(){
// //     HeartRateMonitor HRM;
// //     string fname;
// //     string lname;
// //     int byear;
// //     int bmonth;
// //     int bday;
// //     cout << "Enter you first name: ";
// //     cin >> fname;
// //     cout << "Enter yout last name: ";
// //     cin >> lname;
// //     cout << "Your birth year (YYYY):";
// //     cin >> byear;
// //     if(!cin){
// //         cout << "Invalid input";
// //     }
// //     cout << "Your birth month (MM): ";
// //     cin >> bmonth;
// //     if(!cin){
// //         cout << "Invalid input";
// //     }
// //     cout << "Ypur birth day (DD): ";
// //     cin >> bday;
// //     if(!cin){
// //         cout << "Invalid input";
// //     }
// //     cout << "Hello, "<< HRM.age(byear,bmonth,bday) << "years old "<< fname << " " << lname <<".\n" << "Your maximum heart rate should be "<< HRM.Hrate(byear,bmonth,bday) << "beats per minute.\nYour taget heart rate range is "<< HRM.Max(byear,bmonth,bday)<<" - "<< HRM.Min(byear,bmonth,bday) << "beats per minute."<<endl;

// // }
// // // class HeartRateMonitor{
// // //     HeartRateMonitor() {}
// // // };

// #include <iostream>
// using namespace std;

// class PopulationGrowth{
//     private:
//         double CWP;
//         int AGR;
//     public:
//         PopulationGrowth(){}
//         PopulationGrowth(double CWP, int AGR):CWP(CWP),AGR(AGR){}


//         int initialPopulation(double CWP){
//             return CWP;
//         }  
//         int annualGrowth(int AGR){
//             return AGR;
//         }
//         int populationGrowthYear(){
//             for(int i=1;i<=75;++i){
//                 return i;
//             }
//         }
//         int keeping(){

//         }
//         int check(double CWP, int AGR){
//             // if(CWP=CWP*2*AGR-1)
//         }
//         void display(double CWP, int AGR){
//             int i=1;
//             cout << "Year \t Project Population \t Annual increase"<<endl;

//             while(i!=75){
//                 cout << populationGrowthYear() << "\t" << initialPopulation(CWP) << "\t" << annualGrowth(AGR) <<endl;
//                 ++i;
//             }
//         }

// };
// int main(){
//     PopulationGrowth PPG;
//     double CWP;
//     int AGR;
//     cout<< "Enter the current world population: ";
//     cin >> CWP;
//     if(!cin){
//         cout << "Invalid input";
//     }
//     cout << "Enter the annual growth rate (percentage): ";
//     cin >>  AGR;
//     if(!cin){
//         cout << "Invalid input";
//     }
//     PPG.display(CWP, AGR);
//     return 0;
// }

#include <iostream>
#include <string>
#include <locale>
#include <sstream>
using namespace std;

class PopulationGrowth {
public:
    long int init_pop;
    long int current_pop;
    long int prev_pop;
    float annual_growth_rate;
    long int annual_increase;
    int found;

    PopulationGrowth(long int init_p, float annual_gr) {
        init_pop = init_p;
        prev_pop = init_p;
        annual_growth_rate = annual_gr;
        found = 0;
        
    }

    void calc_population() {
        annual_increase = (prev_pop * annual_growth_rate) / 100;
        current_pop = prev_pop + annual_increase;
        prev_pop = current_pop;
        check_double();
    }

    void check_double() {
        if ((prev_pop >= (2 * init_pop))) {
            found += 1;
        }
    }
};

int main() {
    long double init_pop;
    float annual_growth_rate;

    cout << "Enter initial population: ";
    cin >> init_pop;
    cout << "Enter annual growth rate: ";
    cin >> annual_growth_rate;

    cout << "Year" << "      " << "Projected Population" << "    " << "Annual Increase" << endl;
    int num = 1;

    PopulationGrowth p(init_pop, annual_growth_rate);
    while (num < 75) {
        num++;
        p.calc_population();

        stringstream ss;
        ss.imbue(locale(""));
        ss << p.current_pop;
        stringstream dd;
        dd.imbue(locale(""));
        dd << p.annual_increase;

        if (p.found == 1) {
            cout << num << "        " << ss.str() << "            " << dd.str() << " Oh Yeahhhhh" << endl;
        } else {
            cout << num << "        " << ss.str() << "            " << dd.str() << endl;
        }
    }

    return 0;
}