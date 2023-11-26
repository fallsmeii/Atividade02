#include <stdio.h>

int main()
{
    char sentence []="data : 06-06-2012";
    char str [50];
    int year;
    int month;
    int day;
    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month);
    printf("%s -> %02d-%4d\n",str,day, month, year);
    
    return 0;
}