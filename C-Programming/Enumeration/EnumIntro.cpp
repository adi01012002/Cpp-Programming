#include <stdio.h>
// enum color
// {
//     red = 1,
//     black = 2,
//     green = 3,
//     yellow = 4,
//     orange = 5,
// };
// int main()
// {
//     printf("Red = %d\n" ,red);
// }


enum DaysOfWeek {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6 // by default value
};

int main() {
    // enum DaysOfWeek today;

    // today = Wednesday;

    printf("The value of today is: %d\n", Wednesday); // Output: 3

    return 0;
}