/********************************************************
*
*	Homework Demo.
*	�κ���ҵ����
*
*	Need to outline the source.
*
*********************************************************/

#include"sq_list.h"


bool del_min_1(SqList* L, ElemType* value) {
	if (L->length == 0)
		return false;		//��գ���ֹ���ز���
	value = L->data[0];

	int pos = 0;		//�ٶ�0��Ԫ��ֵ��С

	//Ѱ����СԪ��
	for (int i = 1; i < L->length; ++i) {
		if (L->data[i] < value) {
			value = L->data[i];
			pos = i;
		}
	}

	L->data[pos] = L->data[L->length - 1];	//�ճ���λ�������һλ���䣨ȡ����

	L->length--;
	return true;
}


ElemType del_min_2(SqList* L) {
	ElemType value;
	value = L->data[0];

	if (L->length == 0)
		return false;		//��գ���ֹ���ز���

	int pos = 0;		//�ٶ�0��Ԫ��ֵ��С
	//Ѱ����СԪ��
	for (int i = 1; i < L->length; ++i) {
		if (L->data[i] < value) {
			value = L->data[i];
			pos = i;		//��¼��ǰ��СԪ�ص�λ�ã�����ɾ����������
		}
	}

	L->data[pos] = L->data[L->length - 1];	//�ճ���λ�������һλ���䣨ȡ����

	L->length--;
	return value;
}

void reverse_list_1(SqList* L) {
	ElemType temp;		//��ʱ������ԭ�ز���(in place)

	for (int i = 0; i < L->length / 2; ++i) {
		temp = L->data[i];
		L->data[i] = L->data[L->length - i - 1];		//Ϊ�����±꣬���Գ�����Ҫ-1
		L->data[L->length - i - 1] = temp;
	}
}

void delete_elem(SqList* L, ElemType x) {
	int k = 0, i = 0;

	while (i < L->length) {
		if (L->data[i] == x)		//��ǰԪ��Ϊx����¼++k
			++k;
		else
			L->data[i - k] = L->data[i];	//���������x���򽫵�ǰԪ����ǰ��k��λ��
		++i;
	}
	L->length = L->length - k;		//��ǰ˳���ĳ���
}

void delete_range(SqList* L, int lower, int high) {
	if (lower >= high) {
		printf("Error (delete_range(s,t)) - lower(%d) >= high(%d)\n", lower, high);
		return false;
	}
	if (L->length == 0) {
		printf("Error (List is null)\n\n");
		return false;
	}

	//������Ѱ����(lower,high)֮���ֵ����ɾ��������
	int k = 0;
	for (int i = 0; i < L->length; ++i) {
		if (L->data[i] > lower && L->data[i] < high) {
			L->data[i] = L->data[i + 1];	//�ú�һ��Ԫ��ȡ����ǰԪ��
			L->length--;		//��ȡ�����-1
		}
	}
}

bool delete_piece_range(SqList* L, int lower, int high) {
	int i, j;
	if (lower >= high) {
		printf("Error (delete_range(s,t)) - lower(%d) >= high(%d)\n", lower, high);
		return false;
	}
	if (L->length == 0) {
		printf("Error (List is null)\n\n");
		return false;
	}

	for (i = 0; i < L->length && L->data[i] < lower; ++i)	//Ѱ��ֵ���ڵ���lower�ĵ�һ��Ԫ��
		;
	if (i > L->length)
		return false;		//����ֵ��С��lower����Χ������
	for (j = 0; j < L->length && L->data[j] <= high; ++j)	//Ѱ��ֵ����high�ĵ�һ��Ԫ��
		;
	for (; j < L->length; ++j, ++i)
		L->data[i] = L->data[j];	//TODO: ��(j-i)�ĳ��ȴ���(length-j)ʱ�Ĵ���ʽ
	L->length = i;
	return true;
}

