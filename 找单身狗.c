#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	int i = 0;
	for (i = 0; i < sz; i++)
		//arr[i]统计数组每一个元素
	{
		int j = 0;
		int count = 0;
		for (j=0;j<sz;j++)
		{
			if (arr[i] == arr[j])//arr[j]如arr[0]时与每一个元素一一比较（包括本身）
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("单身狗是：%d\n", arr[i]);
			break;//结束语句
		}
	}
	return 0;
}