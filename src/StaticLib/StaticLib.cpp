#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(begin == NULL || end == NULL)return false;
	if(end < begin)return false;
	int flag;
	do
	{
		flag = 0;
		int i = 0;
		while(begin + i < end - 1)
		{	
			if (begin[i].key <= begin[i + 1].key)break;
			item copy = begin[i];
			begin[i] = begin[i + 1];
			begin[i + 1] = copy;
			flag = 1;
			i++;
		}
	}while (flag == 1);
	return true;
}
