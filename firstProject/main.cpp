#include <iostream>

using namespace std;
int a,b;
int add(int x, int y);
int main()
{
    cout << "Lets att two numbers" << endl;
    cout << "whats the first number?" << endl;
    cin >> a;
    cout << endl << "Okey, you chose: "<<a<<endl;
    cout<<"Whats the second number?"<<endl;
    cin >> b;
    cout << endl << "Okey, you chose: "<<b<<endl;

    cout << "The sum of " << a << " and " << b << " is ";
    cout << add(a,b)<< endl;
    return 0;
}

int add(int x, int y){
    return x + y;
}
