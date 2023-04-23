#include <cstdio>
using namespace std;

int main()
{
    int sum, min, input, data[5];
    float avg;

    for (int i = 0; i < (sizeof(data) / sizeof(int)); i++)
    {
        printf("Input data A [%d]: ", i);
        scanf("%d", &input);
        data[i] = input;
    }

    min = data[0];

    for (int i = 0; i < (sizeof(data) / sizeof(int)); i++)
    {
        if (data[i] < min)
        {
            min = data[i];
        }
        sum += data[i];
    }
    avg = sum / (sizeof(data) / sizeof(int));

    printf("\n\nNilai minimun = %d", min);
    printf("\nNilai rata-rata = %.2f", avg);

    return 0;
}