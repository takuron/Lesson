#pragma once

#include "stdafx.h"
#include "ConfFiles.h"

extern ConfFile mFile("test",1);

void mainMenu();
void newFile();
void openFile();
void editMenu();
void addSection();
void editSection(int i);
void addItem(int i);
void editItem(int i,int si);

