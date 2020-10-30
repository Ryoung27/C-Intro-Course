#include <iostream>
const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNumber);

void getTotal(int& sum);

int main()
{

}

void inputData(int a[], int lastPlantNumber)
{
    using namespace std;
    for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
    {
        cout << endl
             << "Enter production data for plant number "
             << plantNumber << endl;
        getTotal(a[plantNumber - 1]);
    }
}

void getTotal(int& sum)
{
    using namespace std;
    cout << "Enter number of units produced by each department.\n"
         << "Append a negative number to the end of the list.\n";

    sum = 0;
    int next;
    cin >> next;
    while (next >= 0)
    {
        sum = sum + next;
        cin >> next;
    }

    cout << "Total = " << sum << endl;
}