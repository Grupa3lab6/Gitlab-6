#include <iostream>

using namespace std;

int main()
{
  float a;
  float b;
  float x;
  cout << "Podaj a: ";
  cin >> a;
  cout << "Podaj b: ";
  cin >> b;

if (a==0 && b==0) cout << "Nieskonczenie wiele rozwiazan\n";
else if (a==0 && b!=0) cout << "Brak rozwiazan\n";
else
{
        x=-b/a;
        cout << "x = "<<x<<endl;
}
return 0;
}
