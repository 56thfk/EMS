/*
	EMS - main_menu.c
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#include "main_menu.h"

void main_menu(const char* message)
{
	ems employee;

    printf("                    ▄   ▄  ▄▄   ▄ ▄▄▄   ▄▄▄▄   ▄▄  ▄▄▄  ▄  ▄                   \n");
    printf("                    █▀▄▀█ █  █  ▄ █  █  █ █ █ █▄▄█ █  █ █  █                   \n");
    printf("                    █   █ ▀▄▄▀▄ █ █  █  █ █ █ ▀▄▄  █  █ ▀▄▄▀▄                  \n");
    printf("             --------------------------------------------------------          \n");
    printf("                               <1> View Employees	                           \n");
    printf("                               <2> Search Employee                             \n");
    printf("                               <3> Add Employee                                \n");
    printf("             --------------------------------------------------------          \n");
    printf("                                                             <0> Exit          \n");
    printf("             입력: ");

unknown_char_main_menu_retry:
    switch(getchar()){
        case '1':
			READ_FILE == NULL ? main_menu("") : view_employees(&employee);
			break;
        case '2':
			break;
        case '3':
			READ_FILE == NULL ? main_menu("") : add(&employee);
			break;
		case '0': 
            exit(0);
        default:
            goto unknown_char_main_menu_retry;
    }   
}
