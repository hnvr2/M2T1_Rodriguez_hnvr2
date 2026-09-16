// CSC 134
// M1Lab1 - The Apple Orchard
// Rodriguez
// 9/16/2026
// We're going to make the simplest possible
// "checkout" machine.

#include <iostream>
using namespace std;

int main() {

    // Set up all variables
    string first_name, last_name, full_name; // holds customer name 
    string product = "Jars of Honey";
    double cost_each = 5.25;
    double total_cost;


    // Greet the customer
    cout << "Welcome to our Honey store!" <<endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout <<"Nice to meet you, " <<full_name <<endl;


    //Ask how many jars of honey would they'd like to purchase?
    int quantity;

    cout << "How many jars of honey would you like to purchase? ";
    cin >> quantity;

    // calculate the total price
    // Give the result

    cout << endl;
    return 0; // no errors
}