#include "HAL_0.h"

int main(void){

    students *st = NULL,*Head = NULL;

    if (st == NULL){
        st = create_student_entity();
        Head = st;
    }
    // printf("st points to address  : %p   after one student enity is created.\n", st);
    append_st_record(st);
    if ( st == NULL){
        printf("Error Unable to created new student record and allocate memory\n");
    }
    append_st_record(st);
    if ( st == NULL){
        printf("Error Unable to created new student record and allocate memory\n");
    }
    // printf("st points to address  : %p   after second student enity is created.\n", st);
    // printf("Head porint to address : %p before printing\n", Head);
    while (Head != NULL)
    {
        printf("************\n");
        printf("Student name : %s\nStudent Reg #: %d\nStudent section : %c\n", Head->name, Head->reg_no, Head->section);
        Head = Head->next_student;
    }
    // printf("Head porint to address : %p after printing\n", Head);
    // students *s1;
    // s1 = create_student_entity(NULL);
    // if (s1 == NULL){
    //     printf("Unable to allocated student entity\n");
    //     exit;
    // }
    // s1 = create_student_entity(s1);
    // if (s1 == NULL){
    //     printf("Unable to allocated student entity\n");
    //     exit;
    // }
    // s1 = create_student_entity(s1);
    // if (s1 == NULL){
    //     printf("Unable to allocated student entity\n");
    //     exit;
    // }
    // while (s1 != NULL)
    // {
    //     printf("Student name : %s\nStudent Reg #: %d\nStudent section : %c\n", s1->name, s1->reg_no, s1->section);
    //     s1 = s1->next_student;
    // }
    
    return 0;
}
