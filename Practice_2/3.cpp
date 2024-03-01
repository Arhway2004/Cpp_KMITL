#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

class Book{
private:
    string title;
    string author;
    int quantity;
public:
    Book(string title, string author,int quantity):title(title), author(author), quantity(quantity){}

// getting
    string GTT(){
        return title;
    }
    string GAU(){
        return author;
    }
    int GQTT(){
        return quantity;
    }
//  setting

    void STT(){
        this->title=title;
    }
    void SAU(){
        this-> author=author;
    }
    void SQTT(){
        this-> quantity=quantity;
    }

};

class Inventory {

private:
    vector<Book> books;
public:
    Inventory() {}
    Inventory(vector<Book> books): books(books){}

    void addBook(Book book){
        books.push_back(book);
    }
    void removeBook(string title){
        bool count = false;
        for(int i=0;i<=books.size();++i){
            if(title == books[i].GTT()){
                books.erase(books.begin()+i);
                count = true;
                break;
            }
        if(!count){
                cout << "Not found"<< endl;
        }
        }
    }
    void findBook(string title){
        // bool check = false;
        for(int i=0;i <= books.size();++i){
            if(title == books[i].GTT()){// need to put .GTT()
                cout << books[i].GTT()<< " , " << books[i].GAU() <<" , " << books[i].GQTT() << endl;
                // return true;
                break;
            }else if(books.size() == i){
                cout << "Not found" << endl;
                // return false;
                // check = true;
                break;
            }
            // cout << books[i].GTT() <<' , ' << books[i].GAU() <<' , ' << books[i].GQTT()<<'.'<< endl;
        }//for this line I had forget to use GTT
    }
    void printlnventory(){
        for(Book element: books ){
            cout << "Title: "<< element.GTT() << "Author: "<< element.GAU() << "Quantity" << element.GQTT() << endl;
        }
    }
};

int main(){

    Inventory iv;
    bool quit =true;
    
    while(quit){
        char input;
        cout << "Enter command(a: add, s: search, l: list, q: quit): ";
        cin >> input;
        switch(input){
            case 'a':{
                cout << "Enter title: ";
                string title;
                getline(cin >>ws, title);

                cout << "Enter author: ";
                string author;
                getline(cin >>ws, author);

                cout << "Enter quantity: ";
                int quantity;

                // cin >> ws,quantity;
                cin >> quantity;
                if (!cin){
                   cout << "Invalid input"<< endl;
                   cin.clear();
                   cin.ignore(numeric_limits<streamsize>::max(), '\n');
                //    continue;
                    continue;
                }
                // else if(quantity%1 > 1){
                //     cout << "Invalid input. Please enter a whole number for quantity" << endl;
                //     break;
                // }
                if (std::floor(quantity) != quantity) {
                    cout << "Invalid input. Please enter a whole number for quantity" << endl;
                    continue;
                }

                int quantity = static_cast<int>(quantity);
                // }else()
                // need to add option input only a whole number
                Book book(title,author, quantity);
                iv.addBook(book);

                break;
            }
            case 'l':{
                iv.printlnventory();
                break;
            }
            case 's':{
                string seach;
                cout << "Enter title to seach: ";
                cin >> seach;
                iv.findBook(seach);
                break;// if no break will no loop
            }
            case 'q':{
                quit = false;
                break;
            }
            default :{
                cout << "Invalid input" << input << endl;
                break;
            }
        }
    }

}