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