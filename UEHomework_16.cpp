#include <iostream>
#include <time.h>

int main()
{
    const int SIZE = 5;
    int array[SIZE][SIZE];
    
    int day;
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    day = buf.tm_mday;
    std::cout << "The day is today: " << day << std::endl;
    day %= 5;
    std::cout << "remains: " << day << std::endl;
   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = i + j;
        }
    }

    std::cout << "Written in the array: " << std::endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << array[i][j];
        }
        std::cout << std::endl;
    }
    
    int tempo = 0;
    for (int i = 0; i < SIZE; i++) {
        tempo += array[day][i];
    }
    std::cout << "\nSum: " << std::endl;
    std::cout << tempo;
}
