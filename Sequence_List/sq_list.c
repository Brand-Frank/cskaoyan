/********************************************************
*
*	Base Demos.
*	课内基础代码
*
*********************************************************/


//#include<stdio.h>
#include"sq_list.h"

void init_list(SqList* L) {
	for (int i = 0; i < MAXSIZE; ++i)
		L->data[i] = 0;
	L->length = 0;
}

void increase_size(SeqList* L, int len) {
	int* p = L->data;	//将数据暂存到p指向的地址
	L->data = (ElemType*)malloc((L->MaxSize + len) * sizeof(ElemType));

	for (int i = 0; i < L->length; ++i) {
		L->data[i] = p[i];		//将数据复制到新区域
	}

	L->MaxSize += len;		//顺序表的最大长度增加 len
	free(p);		//释放掉原来的空间
}

bool list_insert(SqList* L, int i, ElemType e)
{
	if (i<1 || i>L->length+1) {		//length+1 表示在最后一个元素后面插入
		printf("Error (Insert position exceed range)\n");	//判断i的范围是否有效
		return false;
	}
	if (L->length > MAXSIZE) {
		printf("Error (Fail to insert. Memory is full!)\n");
		return false;
	}

	for (int j = L->length; j > i; --j)		//将第i个元素往后移动
		L->data[j] = L->data[j - 1];
	L->data[i - 1] = e;			//在第i个位置插入e (和数组的下标区分，对应数组下标为 i-1)
	L->length++;		//当前表长+1
	return true;
}


bool list_delete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length) {
		printf("Error (Deleteing position exceed range!)\n");
		return false;
	}
	e = L->data[i - 1];
	for (int j = i; j < L->length; ++j)		//将第i个位置后的元素往前移
		L->data[j - 1] = L->data[j];
	L->length--;		//表长-1
	return true;
}

ElemType locate_elem(SqList L, ElemType e) {
	for (int i = 0; i < L.length; ++i) {
		if (L.data[i] == e)
			return i + 1;		//下标为i的元素等于e,返回其位序(i+1)
	}
	printf("Error (Fail to locate. Can't find element: %d )\n", e);
	return 0;		//退出循环，说明查找失败
}

ElemType get_elem(SqList L, int i) {
	return L.data[i - 1];
}


