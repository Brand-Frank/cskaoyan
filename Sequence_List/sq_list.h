/********************************************************
* 
*	Base Demos.
*	���ڻ�������
*
*********************************************************/

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXSIZE 50		//˳�����󳤶�(��̬����)
#define INITSIZE 10		//˳�����󳤶�(��̬����)

typedef int ElemType;

/**
 * @brief ˳���ṹ��(��̬����)
 */
typedef struct {
	ElemType data[MAXSIZE];		//���˳���Ԫ���е�����
	int length;					//˳���ǰ����
}SqList;

/**
 * @brief ˳���ṹ��(��̬����)
 */
typedef struct {
	ElemType *data;		//ָʾ��̬���������ָ��
	int length;			//˳���ǰ����
	int MaxSize;		//˳�����������
}SeqList;

//print_info(list, option)
//extern char* option[] = { "init_list","list_insert","list_delete","locate_elem","get_elem",
//					"del_min_1","del_min_2","reverse_list_1" };


/**
 * @brief ��ʼ��������һ���ձ�˳���
 * @param &L	˳���
 *
 * @return void
 */
void init_list(SqList* L);

/**
 * @brief ���Ӷ�̬����ĳ��ȣ�˳���
 * @param *L	˳���
 * @param len	���ӵ�˳�����
 *
 * @return void
 */
void increase_size(SeqList* L, int len);


/**
 * @brief ���������˳���
 * @param &L	˳���
 * @param i		����λ��
 * @param e		�������Ԫ��
 *
 * @return bool
 *     True		����ɹ� ||
 *     False	����ʧ��
 */
bool list_insert(SqList* L, int i, ElemType e);


/**
 * @brief ɾ��������˳���
 * @param &L	˳���
 * @param i		��ɾ��λ��
 * @param e		��ɾ����Ԫ��
 *
 * @return bool:
 *     True		ɾ���ɹ� ||
 *     False	ɾ��ʧ��
 */
bool list_delete(SqList* L, int i, ElemType* e);

/**
 * @brief ��ֵ���ң�˳����ң�- ��˳����в��ҵ�һ������eԪ��,��������λ��
 * @param L		˳���
 * @param e		��ɾ����Ԫ��
 *
 * @return λ��
 */
int locate_elem(SqList L, ElemType e);

/**
 * @brief ��λ���� - ���ҵ�i��λ���ϵ�Ԫ��
 * @param L		˳���
 * @param i		�����ҵ�λ��
 *
 * @return ��iλ�ϵ�Ԫ��ֵ
 */
ElemType get_elem(SqList L, int i);


