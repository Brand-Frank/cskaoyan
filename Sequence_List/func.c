/********************************************************
*
*	Auxiliary Function.
*	¸¨Öúº¯Êý
*
*	Print the (length) and (list table) after some operations.
*
*********************************************************/

#include"func.h"

void print_info(SqList L, int choose) {
	printf("After (operation):\t");
	switch (choose)
	{
	//case 0:	printf("init_list%s\n", *option[0]);	break;
	case 0:	printf("init_list\n");	break;
	//case 1: printf("list_insert\n", *option[1]);
	case 1: printf("list_insert\n");	break;
	case 2: printf("list_delete\n");	break;
	case 3: printf("locate_elem\n");	break;
	case 4: printf("get_elem\n");	break;
	case 5: printf("del_min_1\n");	break;
	case 6: printf("del_min_2\n");	break;
	case 7: printf("reverse_list_1\n");	break;
	case 8: printf("delete_elem\n");	break;
	case 9: printf("delete_range(a,b)\n");	break;
	case 10: printf("delete_piece_rang\n");	break;
	default:
		break;
	}
	
	//¿Õ±í
	if (L.length == 0)
		printf("List is null.\n");
	//´òÓ¡Ë³Ðò±í
	for (int i = 0; i < L.length; ++i)
		printf("%d%c", L.data[i], (i % 10 == 9) ? '\n' : '\t');
	printf("\nlen = %d\n\n", L.length);
}


