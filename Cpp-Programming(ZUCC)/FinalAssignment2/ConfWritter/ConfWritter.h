#pragma once

#include "stdafx.h"
#include "ConfFiles.h"

extern ConfFile mFile("test",1);//全局变量

void mainMenu();
void newFile();
void openFile();
void editMenu();
void addSection();
void editSection(int i);
void addItem(int i);
void addArrayItem(int i);
void editItem(int i,int si);

