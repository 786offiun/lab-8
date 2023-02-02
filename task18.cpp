
#include <iostream>
using namespace std;
main()
{
    int size, number;
    cout << "enter the size:";
    cin >> size;
    int array[size];
    int largest;
     

    for (int index = 0; index < size; index++)
    {
        cout << "enter the value:" << index + 1 << " ";

        cin >> array[index];
        
    }
    largest = array[0];
    for (int index = 0; index < size; index++)
    {
        if (array[index] > largest)
        {
            largest = array[index];
        }
    }
    cout <<"largest no is :"<< largest;
}