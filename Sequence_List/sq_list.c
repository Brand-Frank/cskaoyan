/********************************************************
*
*	Base Demos.
*	���ڻ�������
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
	int* p = L->data;	//�������ݴ浽pָ��ĵ�ַ
	L->data = (ElemType*)malloc((L->MaxSize + len) * sizeof(ElemType));

	for (int i = 0; i < L->length; ++i) {
		L->data[i] = p[i];		//�����ݸ��Ƶ�������
	}

	L->MaxSize += len;		//˳������󳤶����� len
	free(p);		//�ͷŵ�ԭ���Ŀռ�
}

bool list_insert(SqList* L, int i, ElemType e)
{
	if (i<1 || i>L->length+1) {		//length+1 ��ʾ�����һ��Ԫ�غ������
		printf("Error (Insert position exceed range)\n");	//�ж�i�ķ�Χ�Ƿ���Ч
		return false;
	}
	if (L->length > MAXSIZE) {
		printf("Error (Fail to insert. Memory is full!)\n");
		return false;
	}

	for (int j = L->length; j > i; --j)		//����i��Ԫ�������ƶ�
		L->data[j] = L->data[j - 1];
	L->data[i - 1] = e;			//�ڵ�i��λ�ò���e (��������±����֣���Ӧ�����±�Ϊ i-1)
	L->length++;		//��ǰ��+1
	return true;
}


bool list_delete(SqList* L, int i, ElemType* e) {
	if (i<1 || i>L->length) {
		printf("Error (Deleteing position exceed range!)\n");
		return false;
	}
	e = L->data[i - 1];
	for (int j = i; j < L->length; ++j)		//����i��λ�ú��Ԫ����ǰ��
		L->data[j - 1] = L->data[j];
	L->length--;		//��-1
	return true;
}

ElemType locate_elem(SqList L, ElemType e) {
	for (int i = 0; i < L.length; ++i) {
		if (L.data[i] == e)
			return i + 1;		//�±�Ϊi��Ԫ�ص���e,������λ��(i+1)
	}
	printf("Error (Fail to locate. Can't find element: %d )\n", e);
	return 0;		//�˳�ѭ����˵������ʧ��
}

ElemType get_elem(SqList L, int i) {
	return L.data[i - 1];
}


