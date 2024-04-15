#include <iostream>
#include "Edit.h"

int main() {
    Edit e;
    e.setPosition(7, 3);
    e.setLength(25);
    e.setText("Ala ma kota");
    e.setTextColor(Edit::Blue);
    e.setBackgroundColor(Edit::Green);
    std::string s = e.getText();
    std::cout << "Pole tekstowe nr. 1" << std::endl;
    std::cout << "Zawarto?? pola tekstowego: " << s;
    _getch();
    e.userText();
    system("cls");
    s = e.getText();
    std::cout << "Zawarto?? pola tekstowego: " << s;
    _getch();
    system("cls");

    // Second part
    std::cout << "Pole tekstowe nr. 2" << std::endl;
    Edit e2(e);
    e2.setPosition(10, 15);
    e2.setBackgroundColor(Edit::White);
    s = e2.getText();
    std::cout << "Zawarto?? pola tekstowego: " << s;
    _getch();
    e2.userText(); 
    system("cls");
    s = e2.getText();
    std::cout << "Zawarto?? pola tekstowego: " << s;
    _getch();

    return 0;
}
