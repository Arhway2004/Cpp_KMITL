// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main(){
// //     // vector<int> obj{1,2,3,4,5};
// //     vector<int> obj{1,2,3,4,5};  
// //     cout << "Original squence: ";
// //     for(int i=0;i<obj.size();i++)
// //     {
// //         cout << obj[i];
// //     }
// //     cout << "\n";
// //     // obj.reverse();
// //     cout << "After lshift by 2: ";
// //     obj.erase(obj.begin(),obj.begin()+2);
// //     for(int i=0;i<obj.size();i++)
// //     {
// //         cout << obj[i];
// //     }
// //     cout << endl;
// //     // obj.insert(obj.begin(),obj.begin(),0,0); allow input only 1
// //     obj.insert(obj.begin(),{0,0});
// //     cout << "After rshift by 2: ";
// //     for(int i=0;i<obj.size();i++)
// //     {
// //         cout << obj[i];
// //     }
// //     // vec.erase(next(vec.begin(),0));
// //     return 0;

// // }

// // //  for this assigment I have use .erase() and .insert()
// // //    obj.erase(obj.begin() + 2, obj.end()); will delete from 3 to the end

// #include <iostream>
// #include <vector>
// using namespace std;

// // void remove_negative( double& input){
// //     cout << input;
// // }

// // int main(){
// //     vector<double> vec{0.8, -5.1, 1.6, -6.5, 10.5};
// //     cout << "orginal vector";
// //     for(int i= 0;i<vec.size() ;++i){
// //         cout << vec[i] << ' ';
// //     }
// //     cout<<endl;
// //     for(int i=0;i<vec.size();++i ){
// //         if(vec[i]>0){
// //             remove_negative(vec[i]);
// //             cout <<' ';
// //         }
// //     }
// //     return 0;
    
// // }

// void remove_negative( double& input){
//     cout << input;
// }

// int main(){
//     double vec[] = {0.8, -5.1, 1.6, -6.5, 10.5};
//     int size = sizeof(vec)/sizeof(vec[0]);
//     cout << "orginal vector";
//     for(int i= 0;i<size ;++i){
//         cout << vec[i] << ' ';
//     }
//     cout<<endl;
//     for(int i=0;i<size;++i ){
//         if(vec[i]>0){
//             remove_negative(vec[i]);
//             cout <<' ';
//         }
//     }
//     return 0;
    
// }

// // in array on size() will able to use sizeof(vec)/size(vec[0]) for find size

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
private:
    string title, author;
    int quantity;
public:
    // Book(string tt,string au, int qtt){
    //     title = tt;
    //     author = au;
    //     quantity = qtt;
    // }
    Book(string tt, string au, int qtt ): title(tt), author(au), quantity(qtt){}
    string GTT(){
        return title;
    }
    string GAU(){
        return author;
    }
    int GQTT(){
        return quantity;
    }
    void STT(){
        this-> title = title;
    }
    void SAU(){
        this-> author = author;
    }
    void SQTT(){
        this-> quantity = quantity;
    }
};

class Inventory{
private:
    vector<Book> books;
public:
    Inventory(vector<Book> books):books(books){}

    void AddBook(Book book){// Book book 是用来传递参d的
        books.push_back(book);
    }

    void RemoveBoo(Book book){
        int count =0;
        for(Book element: books){
            if(element.GTT() == book.GTT()){
                books.erase(book.begin()+cout);
            }
            cout++;
        }
    }
    void FindBook(string title){
        for(int i=0;i<=books.size(); i++){
            if(books[i].GTT == title){
                cout << "Book found: " << books[i].GTT() <<", " << books[i].GAU() << books[i].GQTT() << endl;
                break;
            }else if(i == books.size()){
                cout << "Not found"<<endl;
                break;
            }
        }
    }
    void PrintInventory(){
        for(Book element: books){
            cout << "Title: "<< element.GTT() << ", Author: "<< element.GAU() << ", Quantity: " << element.GQTT << endl;
        }
    }

};

int main(){
    Book b;
    Inventory IV;
    bool quit = true;
    // cout << "Enter command (a: add, s: search, q: quit): "
    while(quit){
        cout << "Enter command (a: add, s: search, q: quit): "
        char command;
        cin >> command;
        switch(comman)ddP{
            
        }
    }
}
