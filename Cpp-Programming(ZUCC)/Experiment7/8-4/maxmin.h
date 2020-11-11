#pragma once

#include "stdafx.h"

void maxmin(int size, int *p, int *max,int *min) {
	*max = INT32_MIN;
	*min = INT32_MAX;
	for (int i = 0; i < size; i++) {
		if (p[i] > *max) *max = p[i];
		if (p[i] < *min) *min = p[i];
	}
}