//Leap Year 
#include <iostream>
using namespace std;
int main ()
{
  int year;
  cout << "enter year";
  cin >> year;	
  if (year % 400 == 0)
    cout << "leap year";
  else if (year % 100 == 0)
    cout << "not leap year";
  else if (year % 4 == 0)
    cout << "year is leap";
  else
    cout << "not leap year";
  return 0;
}
