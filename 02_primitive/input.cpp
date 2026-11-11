#include <iostream>
#include <string>

using namespace std;

int main(){
   string userTea;
   int teaQuantity;

   cout << "What would like to order in tea? \n" << endl;
   getline(cin, userTea);

   cout << "How many cups of " << userTea << " would you like to order" << endl;
   cin >> teaQuantity;

   cout << userTea << " " << teaQuantity << endl;
   return 0;
}