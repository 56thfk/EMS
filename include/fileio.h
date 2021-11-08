/*
    EMS - fileio.h
    Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#ifndef FILEIO_H_
#define FILEIO_H_

#include <sys/stat.h>
#include "ems.h"

size_t return_file_length(const int fd);
coordinate* find_employee(const char* id, coordinate* coord); 
void RW_FILE(FILE* employee_fp);
void APPEND_FILE(FILE* employee_fp);

#endif
