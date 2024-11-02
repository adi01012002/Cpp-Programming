#include <iostream>
using namespace std;
class Book
{
public:
    char name;
    int price;
    int noOfpage;

    void countBook(int p)
    {
        if (p > price)
            cout << "1";
        else
            cout << "0";
    }
    bool isBookPresent(char book)
    {
        if (book == name)
            return true;
        else
            return false;
    }
};
int main()
{
    Book harrypotor;
    harrypotor.name = 'H';
    harrypotor.price = 1000;
    harrypotor.noOfpage = 500;
    harrypotor.countBook(2000);
    cout << endl;
    harrypotor.countBook(500);
    cout << endl;
    cout << harrypotor.isBookPresent('H') << endl;
    cout << harrypotor.isBookPresent('B');
}