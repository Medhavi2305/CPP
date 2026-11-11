#include <iostream>

using namespace std;

int main(){
   unsigned smallTeaPackk = 100;
   long largeTeaStorage = 1000000000;
   cout << largeTeaStorage << endl;
   // This syntax shown below is used for memory managment if the data only need 8bit we asing it only 8bit not more than 8bit or unnessay storage 
   __int8 bit8 = 1232342; // This will store 8 bits of data
   __int16 bit16 = 1232342; // This will store 16 bits of data
   __int32 bit32 = 1232342; // This will store 32 bits of data
   __int64 bit64 = 1232342; // This will store 64 bits of data
   return 0;
}