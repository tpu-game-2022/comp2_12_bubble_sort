#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (!begin || !end)return false;
	if (end < begin)return false;

	int Item_num = end-begin;
	for (int i = 0; i < Item_num-1;i++)
	{
		int Change_Flag = 0;
		for (int j = Item_num - 2; j >= i; j--)
		{
			if (begin[j].key > begin[j + 1].key)
			{

				item Temp_Word = begin[j];
				begin[j] = begin[j + 1];
				begin[j + 1] = Temp_Word;
				Change_Flag = 1;
			}
				if(!Change_Flag)break;
		}
	}

	return true;
}
