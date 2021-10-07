/*
 	EMS - ems.h
 	Employee Management System
 	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define READ_FILE   (employee_fp = fopen( "Employee.txt", "r" ))
#define APPEND_FILE (employee_fp = fopen( "Employee.txt", "a+"))

FILE* employee_fp;

typedef struct ems{
	char 		 id[10];
	char first_name[50];
	char  last_name[50];
}ems;
