#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <graphics.h>
#include <process.h>
void function();
void list1()
{
	int i;
	textcolor(RED);
	for (i = 4; i <= 25; i++)
	{
		gotoxy(60, i);
		cprintf("|");
	}
	gotoxy(65, 4);
	cprintf("BREAKFAST ITEM");
	gotoxy(65, 5);
	printf("1:Tea         40");
	gotoxy(65, 6);
	printf("2:Coffee      60");
	gotoxy(65, 7);
	printf("3:Milk        60");
	gotoxy(65, 8);
	printf("4:Juice       80");
	gotoxy(65, 9);
	printf("5:Paratha     90");
	gotoxy(65, 10);
	printf("6:Poha        90");
	gotoxy(65, 11);
	printf("7:Rajkachori 120");
	gotoxy(65, 12);
	printf("8:Ch.bhature 120");
	gotoxy(65, 13);
	printf("9:PavBhaji   120");
	gotoxy(65, 13);
	printf("10:Idli      150");
}
void breakfast()
{

	char ch, item[40];
	int n, r, q, a, ta = 0, pa;
	int row = 5;
	clrscr();
	list1();
	gotoxy(25, 2);
	textcolor(RED);
	cprintf("****GHAR KA SWAAD****");
	gotoxy(2, 4);
	textcolor(YELLOW);
	cprintf("ITEM");
	gotoxy(20, 4);
	cprintf("RATE");
	gotoxy(35, 4);
	cprintf("QUANTITY");
	gotoxy(48, 4);
	cprintf("AMOUNT");
	do
	{
		row += 1;

	A:
		gotoxy(2, row);
		fflush(stdin);
		gets(item);
		if (strcmpi(item, "tea") == 0 || strcmpi(item, "1") == 0)
		{
			r = 40;
			gotoxy(2, row);
			printf("Tea");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "coffee") == 0 || strcmpi(item, "2") == 0)
		{
			r = 60;
			gotoxy(2, row);
			printf("Coffee");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "milk") == 0 || strcmpi(item, "3") == 0)
		{
			r = 60;
			gotoxy(2, row);
			printf("Milk");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "juice") == 0 || strcmpi(item, "4") == 0)
		{
			r = 80;
			gotoxy(2, row);
			printf("Juice");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "paratha") == 0 || strcmpi(item, "5") == 0)
		{
			r = 90;
			gotoxy(2, row);
			printf("Paratha");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "poha") == 0 || strcmpi(item, "6") == 0)
		{
			r = 90;
			gotoxy(2, row);
			printf("Poha");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "raj kachori") == 0 || strcmpi(item, "7") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Raj Kachori");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "Ch.bhature") == 0 || strcmpi(item, "8") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Chole Bhature");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "PavBhaji ") == 0 || strcmpi(item, "9") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Pav Bhaji");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "Idli") == 0 || strcmpi(item, "10") == 0)
		{
			r = 150;
			gotoxy(2, row);
			printf("Idli");
			gotoxy(20, row);
			printf("%d", r);
		}

		else
		{
			r = 0;
			gotoxy(20, row);
			printf("ITEM NOT FOUND");
			delay(3000);
			gotoxy(1, row);
			clreol();
			list1();
			goto A;
		}
		list1();

		gotoxy(37, row);
		scanf("%d", &q);
		a = r * q;
		ta = ta + a;
		gotoxy(48, row);
		printf("%d", a);
		gotoxy(33, 22);
		printf("Add more item (y/n) : ");
		fflush(stdin);
		scanf("%c", &ch);
	} while (ch == 'Y' || ch == 'y');
	gotoxy(1, 22);
	clreol();
	gotoxy(35, row + 5);
	printf("Total Bill : %d", ta);
	gotoxy(35, row + 6);
	printf("Amount paid: ");
	scanf("%d", &pa);
	gotoxy(35, row + 7);
	printf("Balance Left: %d", pa - ta);
	list1();
	getche();
	function();
}
void list2()
{
	int i;
	for (i = 4; i <= 25; i++)
	{
		gotoxy(60, i);
		printf("|");
	}
	textcolor(YELLOW);
	gotoxy(63, 4);
	cprintf("LUNCH ITEM");
	gotoxy(63, 5);
	printf("1:Tea          30");
	gotoxy(63, 6);
	printf("2:Lassi        50");
	gotoxy(63, 7);
	printf("3:Coffee       60");
	gotoxy(63, 8);
	printf("4:Burger       60");
	gotoxy(63, 9);
	printf("5:Tikki        80");
	gotoxy(63, 10);
	printf("6:Pav Bhaji   120");
	gotoxy(63, 11);
	printf("7:Noodles     120");
	gotoxy(63, 12);
	printf("8:Veg Rolls   120");
	gotoxy(63, 13);
	printf("9:Pizza       180");
	gotoxy(63, 14);
	printf("10:Rasmalai   200");
}
void lunch()
{
	char ch, item[40];
	int r, q, a, ta = 0, n, pa;
	int row = 5;
	clrscr();
	list2();
	gotoxy(25, 2);
	textcolor(RED);
	cprintf("****GHAR KA SWAAD****");
	gotoxy(2, 4);
	textcolor(YELLOW);
	cprintf("ITEM");
	gotoxy(20, 4);
	cprintf("RATE");
	gotoxy(35, 4);
	cprintf("QUANTITY");
	gotoxy(48, 4);
	cprintf("AMOUNT");
	do
	{
		row += 1;
	A:
		gotoxy(2, row);
		fflush(stdin);
		gets(item);
		if (strcmpi(item, "tea") == 0 || strcmpi(item, "1") == 0)
		{
			r = 30;
			gotoxy(2, row);
			printf("Tea");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "lassi") == 0 || strcmpi(item, "2") == 0)
		{
			r = 50;
			gotoxy(2, row);
			printf("Lassi");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "coffee") == 0 || strcmpi(item, "3") == 0)
		{
			r = 60;
			gotoxy(2, row);
			printf("Coffee");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "burger") == 0 || strcmpi(item, "4") == 0)
		{
			r = 60;
			gotoxy(2, row);
			printf("Burger");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "tikki") == 0 || strcmpi(item, "5") == 0)
		{
			r = 80;
			gotoxy(2, row);
			printf("Tikki");
			gotoxy(20, row);
			printf("%d", r);
		}

		else if (strcmpi(item, "pav bhaji") == 0 || strcmpi(item, "6") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Pav Bhaji");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "noodles") == 0 || strcmpi(item, "7") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Noodles");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "veg rolls") == 0 || strcmpi(item, "8") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Noodles");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "pizza") == 0 || strcmpi(item, "9") == 0)
		{
			r = 220;
			gotoxy(2, row);
			printf("Pizza");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "rasmalai") == 0 || strcmpi(item, "10") == 0)
		{
			r = 200;
			gotoxy(2, row);
			printf("Rasmalai");
			gotoxy(20, row);
			printf("%d", r);
		}
		else
		{
			r = 0;
			gotoxy(20, row);
			printf("ITEM NOT FOUND");
			delay(3000);
			gotoxy(1, row);
			clreol();
			list2();
			goto A;
		}
		list2();

		gotoxy(37, row);
		scanf("%d", &q);
		a = r * q;
		ta = ta + a;
		gotoxy(48, row);
		printf("%d", a);
		gotoxy(33, 22);
		printf("Add more item (y/n) : ");
		fflush(stdin);
		scanf("%c", &ch);
	} while (ch == 'Y' || ch == 'y');
	gotoxy(1, 22);
	clreol();
	gotoxy(35, row + 5);
	printf("Total Bill : %d", ta);
	gotoxy(35, row + 6);
	printf("amount paid: ");
	scanf("%d", &pa);
	gotoxy(35, row + 7);
	printf("Balance Left: %d", pa - ta);
	list2();
	getche();
	function();
}
void list3()
{
	int i;
	for (i = 4; i <= 25; i++)
	{
		gotoxy(60, i);
		printf("|");
	}
	textcolor(YELLOW);
	gotoxy(63, 4);
	cprintf("DINNER ITEM");
	gotoxy(63, 5);
	printf("1:Roti         30");
	gotoxy(63, 6);
	printf("2:Paratha      50");
	gotoxy(63, 7);
	printf("3:Naan         60");
	gotoxy(63, 8);
	printf("4:Pavbhaji     90");
	gotoxy(63, 9);
	printf("5:Coldcoffee  100");
	gotoxy(63, 10);
	printf("6:Biryani     120");
	gotoxy(63, 11);
	printf("7:TadkaDal    200");
	gotoxy(63, 12);
	printf("8:ShahiPaneer 220");
	gotoxy(63, 13);
	printf("9:Dalmakhni   220");
	gotoxy(63, 13);
	printf("10:MixVeg     220");
}
void dinner()
{

	char ch, item[40];
	int r, q, a, ta = 0, n, pa;
	int row = 5;
	clrscr();
	list3();
	gotoxy(25, 2);
	textcolor(RED);
	cprintf("****GHAR KA SWAAD****");
	gotoxy(2, 4);
	textcolor(YELLOW);
	cprintf("ITEM");
	gotoxy(20, 4);
	cprintf("RATE");
	gotoxy(35, 4);
	cprintf("QUANTITY");
	gotoxy(48, 4);
	cprintf("AMOUNT");
	do
	{
		row += 1;
	A:
		gotoxy(2, row);
		fflush(stdin);
		gets(item);
		if (strcmpi(item, "roti") == 0 || strcmpi(item, "1") == 0)
		{
			r = 30;
			gotoxy(2, row);
			printf("Roti");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "paratha") == 0 || strcmpi(item, "2") == 0)
		{
			r = 50;
			gotoxy(2, row);
			printf("Paratha");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "naan") == 0 || strcmpi(item, "3") == 0)
		{
			r = 60;
			gotoxy(2, row);
			printf("Naan");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "pav bhaji") == 0 || strcmpi(item, "4") == 0)
		{
			r = 90;
			gotoxy(2, row);
			printf("Pav Bhaji");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "cold coffee") == 0 || strcmpi(item, "5") == 0)
		{
			r = 100;
			gotoxy(2, row);
			printf("Cold Coffee");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "biryani") == 0 || strcmpi(item, "6") == 0)
		{
			r = 120;
			gotoxy(2, row);
			printf("Biryani");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "tadka dal") == 0 || strcmpi(item, "7") == 0)
		{
			r = 200;
			gotoxy(2, row);
			printf("Tadka Dal");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "shahi paneer") == 0 || strcmpi(item, "8") == 0)
		{
			r = 220;
			gotoxy(2, row);
			printf("Shahi Paneer");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "dal makhni") == 0 || strcmpi(item, "9") == 0)
		{
			r = 220;
			gotoxy(2, row);
			printf("Dal Makhni");
			gotoxy(20, row);
			printf("%d", r);
		}
		else if (strcmpi(item, "mix veg") == 0 || strcmpi(item, "10") == 0)
		{
			r = 220;
			gotoxy(2, row);
			printf("Mix veg");
			gotoxy(20, row);
			printf("%d", r);
		}
		else
		{
			r = 0;
			gotoxy(20, row);
			printf("ITEM NOT FOUND");
			delay(3000);
			gotoxy(1, row);
			clreol();
			list3();
			goto A;
		}
		list3();

		gotoxy(37, row);
		scanf("%d", &q);
		a = r * q;
		ta = ta + a;
		gotoxy(48, row);
		printf("%d", a);
		gotoxy(33, 22);
		printf("Add more item (y/n) : ");
		fflush(stdin);
		scanf("%c", &ch);
	} while (ch == 'Y' || ch == 'y');
	gotoxy(1, 22);
	clreol();
	gotoxy(35, row + 5);
	printf("Total Bill : %d", ta);
	gotoxy(35, row + 6);
	printf("amount paid: ");
	scanf("%d", &pa);
	gotoxy(35, row + 7);
	printf("Balance Left: %d", pa - ta);
	list3();
	getche();
	function();
}
void function()
{
	int a;
	clrscr();
	printf("\n\n\n\n\n\n\n\n\t\t\t\t");
	printf("BREAKFAST.........1\n\t\t\t\tLUNCH.............2\n\t\t\t\tDINNER............3\n\t\t\t\tEXIT..............4\t\t\t\t");
	printf("\n\t\t\t\tenter your choice: ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		breakfast();
		break;
	case 2:
		lunch();
		break;
	case 3:
		dinner();
		break;
	case 4:
		exit(0);
		break;
	default:
		printf("Wrong Choice");
	}
}
void main()
{
	function();
	getch();
}