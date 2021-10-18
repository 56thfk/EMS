/*
	EMS - management.c
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#include "management.h"

void view_employees(ems* employee)
{
	READ_FILE(employee_fp);

	size_t n = 0;

    system("clear");

    while((n = fscanf(employee_fp, "%s %s %s",
		   employee->id, employee->first_name, employee->last_name)) != EOF){
            printf("%s %s %s\n", employee->id, employee->first_name, employee->last_name);
    }

    fclose(employee_fp);
}

void add(ems* employee)
{

	APPEND_FILE(employee_fp);

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

    printf("        ID        : %s\n", employee->id);
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
