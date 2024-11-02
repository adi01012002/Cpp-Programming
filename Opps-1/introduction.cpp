#include <iostream>
using namespace std;
class player
{
public:
    int score; // data member
    int health;
};
int main()
{
    player amit;
    amit.score = 90;
    amit.health = 100;

    player aditya;
    aditya.score = 100;
    aditya.health = 100;

    player harsh;
    harsh.score = 90;
    harsh.health = 100;

    cout << amit.score << endl;
    cout << amit.health << endl;

    cout << aditya.score << endl;
    cout << aditya.health << endl;

    cout << harsh.score << endl;
    cout << harsh.health << endl;
}