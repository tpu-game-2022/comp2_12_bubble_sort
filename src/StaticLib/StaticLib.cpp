#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    

#include "../include/lib_func.h"

bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)
		return false;

	for (item* i = 0; i < begin - 1; i++)
	{
		for (item* j = begin - 1; j > end; j--)
		{
			if (j - 1 > j)
			{
				item* tmp = j;
				j = i;
				i = tmp;
			}			
		}
	}

	return true;	
}