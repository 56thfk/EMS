/*
	EMS - management.c
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#include "management.h"

void view_employees(ems* employee)
{
    if(READ_FILE == NULL){
        perror("        view employee >> READ_FILE: no such file Employee.txt");
        exit(1);
    }

    system("clear");

    int counter = 1, n = 0;

    //print_header("             Employee >> View List\n");

    while((n = fscanf(employee_fp, "%s %s %s",
           employee->id, employee->first_name, employee->last_name)) != EOF){
            printf("%s %s %s", employee->id, employee->first_name, employee->last_name);
        counter++;
    }

    fclose(employee_fp);
    //TODO: main_menu 실행
}

void add(ems* employee)
{
//    print_header("        Employee>> Add\n\n");

    if(APPEND_FILE == NULL){
        perror("        ADD >> APPEND_FILE: no such file \"Employee.txt\"");
        exit(1);
    }

    printf("        >> ID: ");
    fflush(stdin);
    scanf("%10[^\n]", employee->id);

    printf("        >> First Name: ");
    fflush(stdin);
    scanf("%50[^\n]", employee->first_name);

    printf("        >> Last Name: ");
    fflush(stdin);
    scanf("%50[^\n]", employee->last_name);

    //TODO: hire_flag는 true, fire_flag는 false로 변경

    printf("        ID          : %s\n", employee->id);
    printf("        First Name: %s\n", employee->first_name);
    printf("        Last Name : %s\n", employee->last_name);
    printf("        --------------------------------------------------------          \n");
    printf("        Record Data\n");
    printf("        <Y>Yes        <N>No\n");
    printf("        Choose Option: ");

add_employee_retry:
    switch(tolower(getchar())){
        case 'y':
            fprintf(employee_fp, "%s %s %s\n", employee->id, employee->first_name, employee->last_name);
            fclose(employee_fp);
            break;
        case 'n':
            break;
        default:
            goto add_employee_retry;
    }
}
