#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of element in the Array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 element. \n\n";
    }
}



int main()
{
    std::cout << "Hello World!\n";
}


