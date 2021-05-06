#include"sq_list.h"
#include"func.h"
//#include"func.c"

int main() {
	SqList list;
	
	//****************��ʼ��***************************
	init_list(&list);
	print_info(list, 0);
	
	//***************�������*****************************
	for(int i = 1; i <= MAXSIZE; ++i) {		//�ڹ涨��Χ�ڲ���Ԫ��
		list_insert(&list, i, rand() % 50);
	}
	
	print_info(list, 1);

	/***************ɾ������******************************/

	int pos = 0, value = 0;
	printf("Input the pos to delete: ");
	scanf("%d", &pos);
	list_delete(&list, pos, &value);
	
	printf("list_delete(list, %d, %d)\n",pos,value);	//TODO:value��ֵ��ʾ������
	print_info(list, 2);
	//TODO:��delete������װ����


	//***************���Ҳ���(��ֵ/��λ����)*****************************/
	/*
	int value_locate;
	printf("Input the locate_elem value: ");
	scanf("%d", &value_locate);
	printf("locate_elem(list, %d)\n\n", locate_elem(list, value_locate));
	
	int pos_get;
	printf("Input the get_elem pos: ");
	scanf("%d", &pos_get);
	printf("get_elem(list , %d)\n\n",get_elem(list, pos_get));
	*/


	/********************************************************
	*
	*	Testify for Homework Demo.
	*	�κ���ҵ�������
	*
	*	Need to outline the source.
	*
	*********************************************************/
	/*
	printf("(Homework 17-1) mininum of the list is %d\n", del_min_2(&list));
	print_info(list,6);	//��ӡɾ����Сֵ���˳���

	printf("(Homework 17-2) Reverse all elements in Sq_list.\n");
	reverse_list_1(&list);
	print_info(list,7);	//��ӡ���ú��˳���
	
	printf("(Homework 17-3) delete all elements == 11.\n");//TODO:����³����
	delete_elem(&list, 11);//ɾ������=11��Ԫ��
	print_info(list, 8);


	printf("(Homework 17-3) delete all elements range(11,20).\n");//TODO:����³����
	delete_range(&list, 11, 20);
	print_info(list, 9);
	*/

	printf("(Homework 17-3) delete all elements pieces position range(19,28).\n");
	delete_piece_range(&list, 19, 28);
	print_info(list, 10);

	return 0;
}