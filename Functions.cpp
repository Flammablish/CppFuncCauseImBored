#include <iostream>
using namespace std;

int Nerd (int a, int b)
{
  return a * b * 69;
}

void AmIANerd (int a, int b)
{
  int result = Nerd (a, b);
  cout << result << endl;
}

int main ()
{
  AmIANerd (6, 9);
  AmIANerd (10, 20);
  AmIANerd (1, 10);
  
  cout << "Pls work" << endl;
  cout << "Omg it worked !";
}
