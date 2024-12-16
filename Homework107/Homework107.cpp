#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    const int N = 10;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
    }
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    double avg = sum / N;
    int sortEnd = (avg > 0) ? (2 * N / 3) : (N / 3);

    for (int i = 0; i < sortEnd - 1; i++) 
    {
        for (int j = i + 1; j < sortEnd; j++) 
        {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int reverseStart = sortEnd;
    int reverseEnd = N - 1;
    while (reverseStart < reverseEnd) 
    {
        int temp = arr[reverseStart];
        arr[reverseStart] = arr[reverseEnd];
        arr[reverseEnd] = temp;
        reverseStart++;
        reverseEnd--;
    }
    cout << "Результуючий масив: ";
    for (int i = 0; i < N; i++) 
    {
        cout << arr[i] << " ";
    }
}
