#include <iostream>
#include <windows.h>
using namespace std;

void textcolor(int color) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color); }

<<<<<<< HEAD
int main() 
{
  
=======
int main() {
>>>>>>> 48bee299b5c7c847ef21767cbf9f5de026022ed9
    for(int i=0; i<=256; i++){
        textcolor(i);
        cout << "Color #" << i << endl;
    }
    cin.get();
    return 0;
}