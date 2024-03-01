// // erease number 4 in c++
// #include <iostream>
// #include <vector>
// #include <algorithm> // Required for std::remove and std::erase
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 4, 3, 4, 5, 4}; // Sample vector with 4s
    
//     cout << "Original vector: ";
//     for (const int &num : vec) {
//         cout << num << ' ';
//     }
//     cout << endl;
    
//     int valueToRemove = 4; // Number to remove
    
//     // Use std::remove to move all instances of 4 to the end of the vector
//     vec.erase(remove(vec.begin(), vec.end(), valueToRemove), vec.end());
    
//     cout << "Vector after removing all instances of " << valueToRemove << ": ";
//     for (const int &num : vec) {
//         cout << num << ' ';
//     }
//     cout << endl;
    
//     return 0;
// }

//remove with position
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5}; // Sample vector
    
    cout << "Original vector: ";
    for (const int &num : vec) {
        cout << num << ' ';
    }
    cout << endl;
    
    int positionToRemove = 4; // Position to remove (0-based index)
    
    // Check if the position is valid
    if (positionToRemove >= 0 && positionToRemove < vec.size()) {
        vec.erase(vec.begin() + positionToRemove);
        
        cout << "Vector after erasing element at position " << positionToRemove << ": ";
        for (const int &num : vec) {
            cout << num << ' ';
        }
        cout << endl;
    } else {
        cout << "Invalid position to remove." << endl;
    }
    
    return 0;
}
