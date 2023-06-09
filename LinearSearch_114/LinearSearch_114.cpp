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

    cout << "\n==================\n";
    cout << "Enter Array Element \n";
    cout << "====================\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr;

    do
    {
        cout << "\nEnter the Element you want to search : "; //Langkah no. 1 Algoritma
        int item;
        cin >> item;

        ctr = 0;
        for (i = 0; i < n; i++)                              //Langkah no. 2,3 dan 4 Algoritma
        {
            ctr++;
            if (arr[i] == item)                              //Langkah no. 5 Algoritma
            {
                cout << "\n" << item << "found at position " << (i + 1) << endl;
                break;
            }
        }

        if (i == n)
            cout << "\n" << item << "not found in the Array\n";
        cout << "\nNumber of Comparisons : " << ctr << endl;

        cout << "\nContinue Search (y/n) : ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
    input();
    LinearSearch();
}


