#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Please provide exactly one year as argument.\n");
        printf("Usage: %s <year>\n", argv[0]);
        return 1;
    }
    
    int year = atoi(argv[1]);
    if (year <= 0) {
        printf("Error: Year must be a positive integer.\n");
        return 1;
    }
    
  
    int is_leap_year = 0;
    if (year % 400 == 0) {
        is_leap_year = 1;
    } else if (year % 100 == 0) {
        is_leap_year = 0;
    } else if (year % 4 == 0) {
        is_leap_year = 1;
    }
    
    if (is_leap_year) {
        printf("%d was a leap year\n", year);
    } else {
        printf("%d was not a leap year\n", year);
    }
    
    return 0;
}