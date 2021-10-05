/*
	EMS - return_file_length.c
	Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#include "return_file_length.h"

size_t return_file_length(const int fd)
{
	struct stat buf;
	fstat(fd, &buf);

	//리턴 값: off_t
    //	   파일 기술자가 가리키고 있는 파일의 크기	
	size_t size = buf.st_size;

	return size;
}
