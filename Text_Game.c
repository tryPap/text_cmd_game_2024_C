#include <stdio.h>  //��� printf ��� scanf
#include <stdlib.h> //��� system(cls)
#include <string.h> //���������� ��� �� ����� input-compare strings
#include<windows.h>    //���������� ��� �� Sleep(); ����������� �������������

    int move;
	char ch;
	char dum;
	char porta[8];
	char username[15];
	
	
	 
int main () {
begin:
	system("color 02" );    //������ �������� 1(background) A(fonts)
	system("chcp 1253");	//�� ��� ������ ���� ������������ �� ��������
	system("cls");	

	printf("To �������� ����� text adventure game. \n");
	printf("\n");
	printf("������� ����������:\n");
	printf("\n");
	printf("�������� ��� ��� �������� ����������� ����� �������.\n");
	printf("����� �������� ��������� ��� ����� � ������� ������ �� ������������� �������� �� ��������� �� ����������.\n");
	printf("�� ��� ������� �� ��������� ������� �� �������� ���� ��������� ��������� ������ ���� ��������.\n");
	printf("��� ������ ��� ���������� ��� �� ������� �� �������, ����� ��������� �� ������� �� ����� �������� ��������,\n");
	printf("����������� �� ��� ������ ��� ����� ������� ��� ��� �� �������� �� ����������� ���� ������� �����.\n");
	printf("\n");
	printf("�������: ��� �� ������� � ������������� ��� �������� �� ������� � �� ���������� ������ �� 'alt' ��� �� 'shift' ��� ����������� ����������. \n");
	printf("\n");
	system("pause");
	system("cls");

    
    printf(" #         ##       #      # # #     # # #   #    #    # # #    \n");
    Sleep(150);
    printf(" #       #    #    # #     #    #      #     # #  #   #         \n");
    Sleep(150);
	printf(" #       #    #   # # #    #    #      #     #  # #   #  # #   \n");
	Sleep(150);
    printf(" # # #     ##    #     #   # # #     # # #   #    #    # # #    ");
    Sleep(300);
    printf("# ");
    Sleep(300);
    printf("# ");
    Sleep(300);
    printf("#\n");
    Sleep(680);
    system("cls");
	printf("\n");
arxi:	
	printf("����� ������: ");
	scanf("%s",&username);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	Sleep(100);
	printf("       ***************************************\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *         THE ROOMS of TERROR         *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");
	Sleep(100);
	printf("       *                                     *\n");	
	Sleep(100);
	printf("       ***************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	system("pause");
	system("cls");
	Sleep(1000);
	printf("������ ���������� �� ��� �������� �������,");
	printf("\n");
	printf("�� ������ ��� �������� �� ������.");
	printf("\n");
	printf("��������������� ���  ������ �� �� �������� ���� �� ����� ��� ����.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("������ ������� ��� ���������� ��� ����� ������������ ��������.");
	printf("\n");
	printf("���� ��� �� �������� ���������� �� ������� ��� ����� ��� �������� ���� ����.");
	printf("\n");
	printf("������ ��������� �� �������...");
	printf("\n");
	printf("���������� �� �������� ���� ��� ������� �� ��������� �� ����� ���... ����� �������.\n");
	printf("\n");
	printf("���� ������ �� ������ ��� ���� �� ������...\n");
	printf("\n");
	system("pause");
	
	
	
	
system("cls");
first_move:		

	printf("������ ���� ��� ��� ��������� �������.\n");
	printf("\n");
	printf("��� ����� ��� ������� �� ������� ��� ������������.\n");
	printf("��� �������� ��� ��� �������� ��� ��� ��� ����� ��� �������� ���������.\n");
	printf("��� �� ��� ������� �� �� ��������� ���� �� ����� ��� �� �� ����� ���.\n");
	printf("\n");
	printf("\n");
	printf("�� ��������� �� �������;\n");
	printf("(������������� �� ������ ��� ������������ ��� ��� �� ������� ��� ������ �� ENTER).\n");
	printf("\n");
	Sleep(400);
	printf("\n");
	printf("(1) ������������\n");
	Sleep(400);
	printf("(2) ��������\n");
	Sleep(400);
	printf("\n");
	printf("������� ������: ");
	fflush(stdin);
	scanf("%i",&move);
	
	if (move == 1) {
		system("cls");
		Sleep(350);
		printf("��������� �� ����� ��� ��� �� ������� ��� ������������...\n");
		printf("���� ���������� ��� ������� ���� �� ��������.\n");
		printf("�� ������ � �������, ���� ��� �� ����������� ����.\n");
		printf("�������� ����\n");
		system("pause");
		system("cls");
		goto first_move;
		
		

	} else if (move == 2){
		system("cls");
		Sleep(350);
		printf("\n");
		printf("�� ���������, ������� �� �������� ��� �������� �� ������.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;
		
		
	} else if (move > 2){
		printf("�������� ����\n");
		system("pause");
		system("cls");
		goto first_move;
    		

		}else if(ch == '�' || ch == 'n') {
			system("cls");
			goto first_move;
			
		}
		printf("\n");
    	system("pause");
    		
    	

  	
second_move:
	printf("���������� ���� ���� ��� �����.\n");
	printf("������� ��� ��� ��� ����� ��� ���������� �� �������� �� ������� ��'���.\n");	
	printf("\n");
	printf("��� ��������� ������...����������� �� �������� ���������� ��� ������� ��� �����\n");
	printf("��� ��� ��� ����� ������� �� �������� � �������.�� �� ������ ����;\n");
	printf("\n");
	system("pause");
	printf("\n");
	printf("(������� ������ ������� ��� ������ ��� ��� �� ������).\n");
	printf("\n");
	printf("1)���������� ���� �� ���� �� ��� ������.\n");
	Sleep(400);
	printf("2)������� ��� �� ������.\n");
	Sleep(400);
	printf("3)������ �� �� �������� ��� ������ ��� �� ������ ����������.\n");
	Sleep(400);
	printf("\n");
	printf("������� ������: ");
	fflush(stdin);
	scanf("%i",&move);
	
	if (move == 1) {
		system("cls");
		Sleep(350);
		printf("�������� ������ �� ��� ������.\n");
		printf("���� ���� ��� ����������� ��� ���� �������� ��� �� �������.\n");
		printf ("�������� ����.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;


	} else if (move == 2){
		system("cls");
		Sleep(350);
		printf("��������� �� �������\n");
		printf("� ������� �� ���� ��� ������ ����������.\n");
		printf("�� ������� ��� �� ������������ ����.\n");
		printf("�������� ����.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto second_move;
	
	}else if(move ==3){
		system("cls");
		Sleep(350);
		printf("��� ��� ��� ������� ��� � ������� ��� �������� ��� ������ �� ��� ���� ��� ���������� ��� ����������� ��� ��� ������������� ���� ������� ����������.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
		
		
		
	 }else if (move > 2){
		printf("�������� ����.\n");
		system("pause");
		system("cls");
		goto second_move;
    		

}
		
third_move:
	fflush(stdin);
	
	printf("�������� �� ���� �������� �������� �� �������� ���.\n");
	printf("�������� ���� 3 ������.\n");
	printf("\n");
	printf("��� ����� ����� ���, ��� ������� ������, ��� ������� �������� ���. \n");
	printf("������� ����� ���� ��� ��� ������� ����� ���������� �����!\n");
	printf("\n");
	printf("�� ���� ��� ��� 3 ��������� �� �����;\n");
	printf("\n");
	printf("�����\n");
	printf("�������\n");
	printf("�������\n");
	printf("\n");
	printf("����� �� ���� ����� ��� �� ����� ������� �� �� ����� ����(�����,�������,�������)�� �������� ����� �������� ����� ������.\n");
	printf("�������: ��� �� ������� � ������������� ��� �������� �� ������� � �� ���������� ������ �� 'alt' ��� �� 'shift' ��� ����������� ����������. ");
	printf("\n");
	printf("\n");
	printf("������� ������: ");
	printf("\n");
	fflush(stdin);
	scanf("%s",porta);
	
		
	
	if (strcmp(porta, "�����") == 0 ){
		system("cls");
		printf("�������� ��� ��� ���� ������� ��� ����� �����...\n");
		printf("������ �� ��� ����� �������.\nA������� �� ������� ��� ��������� ������ �� ����������.\n");
		printf("\n");
		printf("������� ��� ����, ������ ��� ��� ������ �������.\n");
		printf("\n");
		system("pause");
		system("cls");
choice:		
		printf("������� ���� ����������� ��� �� ������ ���� ���\n");
		printf("\n");
		printf("(1)�����\n");
		Sleep(400);
		printf("(2)������\n");
		Sleep(400);
		printf("(3)�������\n");
		Sleep(400);
		printf("(4)��� �� ����\n");
		Sleep(400);
		printf("\n");
		printf("������� ������: ");
		fflush(stdin);
		scanf("%i",&move);
		
		if (move == 1) {
			system("cls");
			Sleep(350);
			printf("����� ��������; ���� ����� ���� ����� �� ������ ���� ��� �����������;\n");
			printf ("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
	
	
		} else if (move == 2){
			system("cls");
			Sleep(350);
			printf("����� ��������; �� ������ ��� ���� ���� ��� ������ ����.\n");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
		
		}else if(move ==3){
			system("cls");
			Sleep(350);
			printf("�� ������� ����� ������. ��� ����� ��������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto choice;
			
		} else if(move == 4) {
			printf("���� ���� �����. ��� ��� ���� ������ �� ����������.\n");
			printf("\n");
			fflush(stdin);
			printf("�������� ��� �� �������...\n");
			system("pause");
			Sleep(350);
			system("cls");
			goto forth_move;
			
		 }else if (move > 4){
			printf("�������� ����.\n");
			system("pause");
			system("cls");
			goto choice;		
		}
		
		
	} else if (strcmp(porta, "�������") == 0 ){
		system("cls");
		printf("�������� ���� ���� ��� ������� �����...\n");
		printf("��� ���� ��� ���� ������ ��� ������� ��� �������.�� ������������.\n");
		printf("���� �� ���� �� ��� ��������� ��� ����.");
		printf("�������� ����.\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
		
	}else if(strcmp(porta, "�������") == 0){
		system("cls");
		printf("�������� ��� ������� ����� ���� ����� ���� �������� ��� ��� ������� �� ���� ������\n");
		printf("������ �� ������ �� ����� ���� ���� �� �������.\n");
		printf("�������� ������ ���� �����.");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
	
	
	}else{
		printf("(����� ����� ��� ����.)\n");
		printf("\n");
		system("pause");
		system("cls");
		goto third_move;
		
	}
	

	
	
	
system("cls");	
forth_move:
	
	printf("E���� ���� ���� �������� ��� �����.\n");
	printf("�� ���� ��� ��� 2 ������ ��������� �� �����;\n");
	printf("���� ������� ����� ���� ��� ��� ������� ����� ���������� �������.\n");
	printf("\n");
	printf("(����� �� ���� ����� ��� �� ����� ������� �� �� ����� ����(�����,�������) �� �������� ����� �������� ����� ������.)\n");
	printf("\n");
	printf("\n");
	printf("������� ������: ");
	scanf("%s",porta);
	
	if (strcmp(porta, "�����") == 0 ){
		system("cls");
		printf("������ ���� ��� ����� �����.\n");
		printf("������� ��� ����\n");
		system("pause");
		system("cls");
		goto forth_move;
		
		
	} else if(strcmp(porta, "�������") == 0){
		system("cls");
		printf("�������� ��� ������� ����� ���� ����� ���� �������� ��� ��� ������� �� ���� ������.\n");
		printf("��� �� ������� �� ��������������� ���� ��� �� ����.\n");
	fakos:		
		printf("��� ������� ��� �����: (1) ���� , (2) ������ (3) �������\n");
		printf("\n");
		printf("�� ��� �� ���������������;\n");
		printf("\n");
		printf("����� ��� ������ ��� ������������ ��� ����������: ");
		printf("\n");
		fflush(stdin);
		scanf("%i",&move);
		
		switch(move){
			case 1:
				system("cls");
				printf("���� ��� ������� �� ���� ���������� ��� �������� ��� �������.\n");
				break;
			case 2:
				printf("�� ������ ������ �� ��� ���������� ��������. ���� ����� �� �� ���������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;
			case 3:
				printf("�� ������� ����� ������ ��� ��� ����� ����� ��� ������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;
			default:
				printf("������� ��� ��� �� ���� �����������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fakos;
				break;			
					
		}
	
		} else {
		printf("(����� ����� ��� ����.)\n");
		printf("\n");
		system("pause");
		system("cls");
		goto forth_move;
		printf("\n");
	}
	
	
	printf("�������� �� ������� ��� ��������� �������.\n");
	printf("\n");
	printf("������� ����� ������ �� �������� ���� �� ����� ���.\n");
	printf("\n");
	system("pause");
	system("cls");
panic_room:	
	printf("������ �� ����� ��� ����� �� �������� ��� �������.\n");
	printf("��� ������� ������� ��� �������� ��� ��� ��������.\n");
	printf("��� �� ��������;\n");
	printf("\n");
	printf("(1) ���� ���� ��������.\n");
	printf("(2) ���� ��� �� ��������.\n");
	printf("\n");
	scanf("%i",&move);
	
	switch(move){
		case 1:
			printf("\n");
			printf("����������� �� �������� ���� ��� �������� ���� � ������� �� ����������� ��� �� �����.\n");
			system("pause");
			system("cls");
			break;
		case 2:
			printf("\n");
			printf("����������� �� �������� ���� ��� �� ��������.\n");
			system("pause");
			system("cls");
			printf("����� ������� � ������� ��� ������� �������� ��� �����.\n");
			printf("�� ���� ������ ���� ��� �� ��������.\n");
			break;	
		default:
			printf("\n");
			printf("������� ��� ��� �� 2.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto panic_room;
			break;
				
	}
		
		
		
	
	printf("���� �� ������ �� ������� �� �������������.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("���������� �� ��� ������ ��� ���� ��������.\n");
	printf("���� ��� ������ �� ������ ����� �� ������ ��� �����\n");
	printf("�� ��� ������ �� �� ������� �� ����������.\n");
fflush(stdin);		
fifth_move:		
	
	printf("��� ��� ���� � �������:\n");
	printf("\n");
	printf("����� ����� ��� ������ ����� 28 �����;\n");
	printf("1)�����\n");
	printf("2)��������\n");
	printf("3)����\n");
	printf("\n");
	scanf("%i",&move);
		switch(move){
		case 1:
			printf("�����...\n");
			printf("�� ������������ ����.\n");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto fifth_move;
			break;
		case 2:
			printf("�����...\n");
			printf("�� ������������ ����.\n");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto fifth_move;
			break;
		case 3: 
			system("cls");
			printf("��������� ��� ������ ��� �����. ������� �� ����������.\n");
			printf("\n");
			system("pause");
			system("cls");
			break;	
		default:
			printf("������� ��� ��� ��� 3 ����������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto fifth_move;
				break;
				
	}
sixth_move:		
	printf("�������� ��� �������� ����� ��� ��������.\n");
	printf("����� �������� ��� � ����� ��� ����� ������.\n");
	printf("�� �� ������ ����;\n");
	printf("\n");
	printf("1)���������� ��� ��������.\n");
	printf("2)������� �� ������� ��� �� ������� �� �� ������.\n");
	printf("3)������ ��� ���� ����� ��� ��������.\n");
	printf("\n");
	scanf("%i",&move);
	switch(move){
		case 1:
			system("cls");
			printf("��������� �� �������� ��� ��������.\n");
			printf("��������� �� ���� ��� ������ �������.\n");
			printf("�� ������� �� ������� ��� �� ������������ ����\n");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto sixth_move;
			break;
		case 2:
			system("cls");
			printf("���� ���� �����.\n");
			printf("���� ��� ������� �� ���� ���������� ���������� �� ������� ���� �� ��� �� ������� ������.\n");
			break;
		case 3: 
			system("cls");
			printf("���� ���������� ��� �� �������� � ����� �� ������� �� �������.\n");
			printf("�� ������������ ����.\n");
			printf("�������� ����\n");
			printf("\n");
			system("pause");
			system("cls");
			goto sixth_move;
			break;	
		default:
			printf("������� ��� ��� ��� 3 ����������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto sixth_move;
				break;
				
	}
	printf("\n");
	printf("��������� ������� ��� �������� ��� �������.\n");
	printf("�� ���� ���� ������ ��������� ���� �� ����.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("� ����� ����� ���������� ��� ��� �� ������� ������ �� ������ ���� ��������� �����.\n");
	system("pause");
	system("cls");
seventh_move:	
	printf("������� �� ���� ����� ������ ��� ���� ���� �� �����, ������ ��� ������� ��� �����������.\n�� �� ���� ����������;\n");
	printf("\n");
	printf("1)����� ����.\n");
	printf("2)����� ����.\n");
	printf("3)������� ����.\n");
	printf("\n");
	scanf("%i",&move);
	switch(move){
		case 1:
			system("cls");
			printf("�����...������ ��� ����.");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto seventh_move;
			break;
		case 2:
			system("cls");
			printf("�����...������ ��� ����.");
			printf("�������� ����.\n");
			printf("\n");
			system("pause");
			system("cls");
			goto seventh_move;
			break;
		case 3: 
			system("cls");
			printf("������ ��� ��������� ��� ������ ��� ����� !!!\n");
			system("pause");
			system("cls");
			break;	
		default:
			printf("������� ��� ��� ��� 3 ����������.\n");
				printf("\n");
				system("pause");
				system("cls");
				goto seventh_move;
				break;
			}
telos:
	
	Sleep(300);
	printf("       ******************************************************\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *  ������������!! ������� ��� ����� ��� ����������.  *\n");
	Sleep(300);
	printf("       *  �� ��� �� ���������� ��� ��� ���� ���� '�' ���    *\n");
	Sleep(300);
	printf("       *  ������������ ��� ���� 'ENTER'.������ ���� �' ���  *\n");
	Sleep(300);
	printf("       *  ���� 'ENTER' ��� �� �������� �� ��������.         *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       *                                                    *\n");
	Sleep(300);
	printf("       ******************************************************\n");
	Sleep(300);
	printf("\n");
	printf("\n");
	printf("��� �� �����������; ");
	scanf(" %c",&ch);
	if (ch == '�' || ch == 'n'){
		goto begin;
	}
	else {
	printf("�� �������� �� �������....������� �� 'ENTER' !!!\n");
}
	return(0);	
}
