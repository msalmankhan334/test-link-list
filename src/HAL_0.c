#include "HAL_0.h"

students *create_student_entity(void){
    students *temp;
    temp = (students*)malloc(sizeof(students));
    if (temp == NULL){
        return NULL;
    }else{
        printf("Enter student name: ");
        scanf("%[^\n]%*c", temp->name);
        printf("Enter student registeration #: ");
        scanf("%d", &(temp->reg_no));
        printf("Enter student section: ");
        scanf("%c", &(temp->section));
        temp->next_student = NULL;
        return temp;
    }
}

void append_st_record(students *st){
    while (st->next_student != NULL)
    {
        st = st->next_student;
    }
    st->next_student = create_student_entity();
}

/*
students *create_student_entity(students *st){
    if (st == NULL)
    {
        st = (students*)malloc(sizeof(students));
        if (st == NULL){
            return NULL;
        }
        else{
            printf("Enter student name: ");
            scanf("%[^\n]%*c", st->name);
            printf("Enter student registeration #: ");
            scanf("%d", &(st->reg_no));
            printf("Enter student section: ");
            scanf("%s", &(st->section));
            st->next_student = NULL;
            return (st);
        }
    }
    else{
        students *temp_st;
        temp_st = (students*)malloc(sizeof(students));
        if (temp_st == NULL){
            return NULL;
        }else{
            printf("Enter student name: ");
            scanf("%[^\n]%*c", temp_st->name);
            printf("Enter student registeration #: ");
            scanf("%d", &(temp_st->reg_no));
            printf("Enter student section: ");
            scanf("%s", &(temp_st->section));
            temp_st->next_student = NULL;
            st->next_student = temp_st;
            return (st);
        }
    }
}
*/