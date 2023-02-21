#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, double> availableItems = {
    {"sugar", 15.5},
    {"cooking oil", 20.25},
    {"soap", 55.75},
    {"beans", 5.80},
    {"salt", 10.0},
    {"indomie", 3.5},
    {"rice", 4.5}
  };

vector<string> shoppingList;
 string item;
  double balance;

   cout<< "Enter your balance: ";
   cin >> balance;

  cout << "Available items:\n";
  for (const auto &[item, price] : availableItems) {
   cout << item << " - $" << price<<"\n";
  }

 cout << "Enter items for your shopping list, type 'done' when finished:"<<"\n";
  while (cin >> item && item != "done") {
    if (availableItems.count(item) == 0) {
      cout << "Item not available. Please choose from the available items.";
    }else{
    shoppingList.push_back(item);
    }
  }

  double totalCost = 0;
  for (const auto &listItem : shoppingList) {
    totalCost += availableItems[listItem];
  }

  cout << "Your shopping list contains:"<<"\n";
  for (const auto &listItem : shoppingList) {
    cout << listItem << " - $" << availableItems[listItem]<<"\n";
  }

  cout << "Total cost: $" << totalCost<<"\n";
  cout << "Balance: $" << balance - totalCost<<"\n";

  return 0;
}
