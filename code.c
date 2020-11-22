#include <stdio.h>
#include "header.h"
#include "header2.h"

int main(void)
{
    printf("Максимальное число мест в аудитории: %d\n", MAX);
    printf("Число студентов: %d\n", STUDENT_COUNT);
    printf("Число свободных мест: %d\n", MAX - STUDENT_COUNT);

    return 0;
}
