#include <iostream>
using namespace std;


class movieMagic
{
    int year;
    char title[50];
    float rating;


public:


    void input()
    {
        cout << "Enter year: ";
        cin >> year;


        cout << "Enter movie title: ";
        cin >> title;


        cout << "Enter rating: ";
        cin >> rating;
    }


    void display()
    {
        cout << "Movie Title: " << title << endl;


        if (rating >= 0.0 && rating <= 2.0)
            cout << "Flop";
        else if (rating <= 3.4)
            cout << "Semi-hit";
        else if (rating <= 4.5)
            cout << "Hit";
        else if (rating <= 5.0)
            cout << "Super Hit";
        else
            cout << "Invalid Rating";
    }
};


int main()
{
    movieMagic obj;


    obj.input();
    obj.display();


    return 0;
}

