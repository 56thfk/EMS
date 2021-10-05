/*
	EMS - find_employee.c
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#include "find_employee.h"

size_t find_employee(const char* id ,FILE* employee_fp) 
{
	size_t off_set, start, after_the_end_position, file_length;
	off_set = start = file_length = 0;

	file_length = return_file_length(fileno(employee_fp));

	char buf[file_length + 1];

	while(1){	
		off_set = ftell(employee_fp);

		if(fgets(buf, 1024, employee_fp) == NULL) { break; }
			
		if(strstr(buf, id) != NULL){  
			start = off_set;
			after_the_end_position = file_length - ftell(employee_fp);
		}
	}

	fclose(employee_fp);	
	//return 탐색 시작 위치, 종료 위치	
}

