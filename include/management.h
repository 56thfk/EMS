/*
    EMS - management.h
    Employee Management System
	Copyright (C) 2021 Naive-C <naive.c.cell@gmail.com>
*/

#ifndef MANAGEMENT_H_
#define MANAGEMENT_H_

#include "employee_update.h"
#include "console.h"

void view(ems* employee);
void search_option();
void search(ems* employee, const size_t search_flag);
void add(ems* employee);

#endif
