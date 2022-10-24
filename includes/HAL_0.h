#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef __HAL_0__
#define HAL_0

typedef struct students
{
    uint8_t name[20];
    unsigned int reg_no;
    unsigned char section;
    struct students *next_student;
}students;
students *create_student_entity(void);
void append_st_record(students *st);
// students *create_student_entity(students *st); // Funtion decleration to create new student entity.

#endif // __HAL_0
