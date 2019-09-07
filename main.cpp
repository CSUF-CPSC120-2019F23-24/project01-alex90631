// Name: Jorge Garcia
// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  std:: string location;
  int total_days;
  double total_hotel_expenses;
  double total_meal_expense;

  std::cout << "Welcome to the Business Trip Tracker!\n\n";
  std::cout << "What is the business trip location?";
  std::cin >> location;
  std::cout << "How many days will the trip take?";
  std::cin >> total_days;
  std::cout << "What is the total hotel expense?";
  std::cin >> total_hotel_expenses;
  std::cout << "What is the total meal expense?";
  std::cin >> total_meal_expense;
  std::cout <<'\n';



  return 0;
}
