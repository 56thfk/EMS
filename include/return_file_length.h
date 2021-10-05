/*
	EMS - return_file_length.h
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#ifndef RETURN_FILE_LENGTH_H_
#define RETURN_FILE_LENGTH_H_

#include <sys/stat.h>
#include "ems.h"

size_t return_file_length(const int fd);

#endif
