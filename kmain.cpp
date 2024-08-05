#include<bits/stdc++.h>
#include<conio.h>
#include"ksub.h"
using namespace std;

char choice, letter[5] = {'a','e','i','o','u'};
int newarray[100], arr1d[100] = {1,2,3,4,5,9,8,7,6,10}, arr1d2[100] = {1,2,3,4,5,9,8,7,6,10}, arr2d2[100][100] = {{2,4,6,8,10},{3,6,9,12,15},{4,8,12,16,20},{5,10,15,20,25},{6,12,18,24,32}}, num;
int arr2d[100][100] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}, rwsize = 100, clmsize = 100, numb;
int rwsize2 = 100, clmsize2 = 100;

void sequence() {
	char choice;
	do {
	system("cls");
	gotoxy(20,4);
	cout<<"        SEQUENCE MENU         ";
	gotoxy(20,5);
	cout<<"==============================";
	gotoxy(20,6);
	cout<<"A - Math Operations";
	gotoxy(20,7);
	cout<<"B - Print name 5 times";
	gotoxy(20,8);
	cout<<"C - Circumference and Area";
	gotoxy(20,9);
	cout<<"D - Average";
	gotoxy(20,10);
	cout<<"E - Total Sales";
	gotoxy(20,11);
	cout<<"F - Swap Values";
	gotoxy(20,12);
	cout<<"G - Square and Cube";
	gotoxy(20,13);
	cout<<"H - Grosspay";
	gotoxy(20,14);
	cout<<"I - Celsius to Fahrenheit";
	gotoxy(20,15);
	cout<<"J - Area and Perimeter";
	gotoxy(20,16);
	cout<<"K - Return to Main Menu";
	gotoxy(20,17);
	cout<<"------------------------------";
	gotoxy(20,18);
	cout<<"Enter your choice: ";
	cin>>choice;

	if(choice>='a' && choice<='z') {
		choice = choice - 32;
	}
	switch(choice) {
		case 'A': {
			int N1, N2, S, D, P, Q;
			system("cls");
			gotoxy(20,3);
			cout<<"=======================================================";
			gotoxy(20,4);
			cout<<"   Compute for Sum, Difference, Product and Quotient   ";
			gotoxy(20,5);
			cout<<"=======================================================";
			gotoxy(20,6);
			cout<<"Enter 1st number:";
			cin>>N1;
			gotoxy(20,0);
			cout<<"Enter 2nd number:";
			cin>>N2;

			SDPQ(N1, N2);

			getch();
			break;
		}
		case 'B': {
			printname();
			break;
		}
		case 'C': {
			float diameter, c, a;
			system("cls");
			gotoxy(20,4);
			cout<<"========================================";
			gotoxy(20,5);
			cout<<"    Area & Circumference of a Circle    ";
			gotoxy(20,6);
			cout<<"========================================";
			gotoxy(20,7);
			cout<<"Enter a Diameter:";
			cin>>diameter;
			gotoxy(20,0);
			cout<<"========================================";

			areacirc(diameter);

			break;
		}
		case 'D': {
			float prelim, midterm, final, ave;
			system("cls");
			gotoxy(20,4);
			cout<<"=========================";
			gotoxy(20,5);
			cout<<"      Average Grade      ";
			gotoxy(20,6);
			cout<<"=========================";

			gotoxy(20,7);
			cout<<"Prelim Grade:";
			cin>>prelim;
			gotoxy(20,0);
			cout<<"Midterm Grade:";
			cin>>midterm;
			gotoxy(20,0);
			cout<<"Final Grade:";
			cin>>final;

			ave = average(prelim, midterm, final);

			gotoxy(20,0);
			cout<<"=========================";
			gotoxy(20,11);
			cout<<"Average:"<<ave;
			gotoxy(20,12);
			cout<<"-------------------------";
			getch();
			break;
		}
		case 'E': {
			float total_sales;
			total_sales = totalsale();
			gotoxy(20,12);
			cout<<"Total Sales:"<<total_sales;
			gotoxy(20,13);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'F': {
			swap();
			break;
		}
		case 'G': {
			float N, Square, Cube;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"        SQUARE & CUBE         ";
			gotoxy(20,6);
			cout<<"==============================";

			gotoxy(20,7);
			cout<<"Input number:";
			cin>>N;
			gotoxy(20,0);
			cout<<"==============================";

			squarecube(N);
			break;
		}
		case 'H': {
			float Employee_num, Hourswork, Rate, GrossPay;
			char Employee_name[10];
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"           GROSSPAY           ";
			gotoxy(20,6);
			cout<<"==============================";

			gotoxy(20,7);
			cout<<"Employee Number:";
			cin>>Employee_num;
			gotoxy(20,0);
			cout<<"Employee Name:";
			cin>>Employee_name;
			gotoxy(20,0);
			cout<<"# of Hours Work:";
			cin>>Hourswork;
			gotoxy(20,0);
			cout<<"Rate per Hour:";
			cin>>Rate;

			GrossPay = grosspay(Hourswork, Rate);

			gotoxy(20,0);
			cout<<"==============================";
			gotoxy(20,12);
			cout<<"Grosspay:"<<GrossPay;
			gotoxy(20,13);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'I': {
			float Celsius, Fahrenheit;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    CELSIUS TO FAHRENHEIT     ";
			gotoxy(20,6);
			cout<<"==============================";

			gotoxy(20,7);
			cout<<"Celsius:";
			cin>>Celsius;

			temp(Celsius);
			break;
		}
		case 'J': {
			areaperi();
			break;
		}
		case 'K': {
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
			break;
		}
	}
	}while(choice!='K' && choice!='k');
}

void selection() {
	char choice;
	do {
	system("cls");
	gotoxy(20,4);
	cout<<"       SELECTION MENU         ";
	gotoxy(20,5);
	cout<<"==============================";
	gotoxy(20,6);
	cout<<"A - Positive or Negative";
	gotoxy(20,7);
	cout<<"B - Odd or Even";
	gotoxy(20,8);
	cout<<"C - Pass or Fail";
	gotoxy(20,9);
	cout<<"D - Commission";
	gotoxy(20,10);
	cout<<"E - Equivalent Grade";
	gotoxy(20,11);
	cout<<"F - Triple the Sum";
	gotoxy(20,12);
	cout<<"G - Multiple of 3 and 7";
	gotoxy(20,13);
	cout<<"H - Largest Number";
	gotoxy(20,14);
	cout<<"I - Smallest Number";
	gotoxy(20,15);
	cout<<"J - Closest to 100";
	gotoxy(20,16);
	cout<<"K - Return to Main Menu";
	gotoxy(20,17);
	cout<<"------------------------------";
	gotoxy(20,18);
	cout<<"Enter your choice: ";
	cin>>choice;

	if(choice>='a' && choice<='z') {
		choice = choice - 32;
	}

	switch(choice) {
		case 'A': {
			float Num1;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    POSITIVE OR NEGATIVE      ";
			gotoxy(20,6);
			cout<<"==============================";

			gotoxy(20,7);
			cout<<"Input a number:";
			cin>>Num1;
			gotoxy(20,0);
			cout<<"==============================";

			posinega(Num1);
			break;
		}
		case 'B': {
			oddoreven();
			break;
		}
		case 'C': {
			float Ave1;

			Ave1 = passorfail();
			gotoxy(20,0);
			cout<<"==============================";
			gotoxy(20,11);
			cout<<"AVERAGE:"<<Ave1;

			if (Ave1>=75) {
				gotoxy(20,12);
				cout<<"Pass";
			}
			else {
				gotoxy(20,12);
				cout<<"Fail";
			}
			gotoxy(20,13);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'D': {
			float Salesman_num, Unit_sold, Unit_price, Total_sales, C;
			char  Salesman_name[10];
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"         COMMISSION           ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"Salesman Number:";
			cin>>Salesman_num;
			gotoxy(20,0);
			cout<<"Salesman Name:";
			cin>>Salesman_name;
			gotoxy(20,0);
			cout<<"Unit Sold:";
			cin>>Unit_sold;
			gotoxy(20,0);
			cout<<"Unit Price:";
			cin>>Unit_price;
			gotoxy(20,0);
			cout<<"==============================";

			Total_sales = commission(Unit_sold, Unit_price);

			gotoxy(20,12);
			cout<<"Total Sales:"<<Total_sales;

			if (Total_sales <= 10000) {
				gotoxy(20,13);
				C = Total_sales * 0.1;
				cout<<"Commission:"<<C;
				}
			else if (Total_sales <= 15000) {
				gotoxy(20,13);
				C = Total_sales * 0.15;
				cout<<"Commission:"<<C;
				}
			else if (Total_sales <= 20000) {
				gotoxy(20,13);
				C = Total_sales * 0.20;
				cout<<"Commission:"<<C;
				}
			else if (Total_sales <= 25000) {
				gotoxy(20,13);
				C = Total_sales * 0.25;
				cout<<"Commission:"<<C;
				}
			else {
				gotoxy(20,13);
				C = Total_sales * 0.30;
				cout<<"Commission:"<<C;
				}
			gotoxy(20,14);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'E': {
			equivgrade();
			break;
		}
		case 'F': {
			float Num3, Num4, Sum;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"  TRIPLE OF SUM IF THE SAME   ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"Input 1st number:";
			cin>>Num3;
			gotoxy(20,0);
			cout<<"Input 2nd number:";
			cin>>Num4;
			gotoxy(20,0);
			cout<<"==============================";

			triplesum(Num3, Num4);
			break;
		}
		case 'G': {
			multiple();
			break;
		}
		case 'H': {
			float N1, N2;
			int result;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"       LARGEST NUMBER         ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"Input 1st number:";
			cin>>N1;
			gotoxy(20,0);
			cout<<"Input 2nd number:";
			cin>>N2;
			gotoxy(20,0);
			cout<<"==============================";

			result = largest(N1, N2);
			gotoxy(20,10);
			cout<<result;
			gotoxy(20,11);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'I': {
			int result;

			result = smallest();
			gotoxy(20,11);
			cout<<result;
			gotoxy(20,12);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'J': {
			closest();
			break;
		}
		case 'K': {
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
			break;
		}
	}
	}while(choice!='K' && choice!='k');
}

void mainloop() {
	char choice, secchoice;
	do {
	system("cls");
	gotoxy(20,4);
	cout<<"     LOOP/ITERATION MENU      ";
	gotoxy(20,5);
	cout<<"==============================";
	gotoxy(20,6);
	cout<<"A - Print Gecilie 10 Times";
	gotoxy(20,7);
	cout<<"B - Print Numbers 1-5";
	gotoxy(20,8);
	cout<<"C - Print Numbers 5-1";
	gotoxy(20,9);
	cout<<"D - Print Even Numbers 5-1";
	gotoxy(20,10);
	cout<<"E - Print Odd Numbers 5-1";
	gotoxy(20,11);
	cout<<"F - Prime or Not Prime Number";
	gotoxy(20,12);
	cout<<"G - Factorial";
	gotoxy(20,13);
	cout<<"H - GCD";
	gotoxy(20,14);
	cout<<"I - Return to Main Menu";
	gotoxy(20,15);
	cout<<"------------------------------";
	gotoxy(20,16);
	cout<<"Enter your choice: ";
	cin>>choice;

	if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': {
			loop1();
			break;
		}
		case 'B': {
			loop2();
			break;
		}
		case 'C': {
			loop3();
			break;
		}
		case 'D': {
			loop4();
			break;
		}
		case 'E': {
			loop5();
			break;
		}
		case 'F': {
			do {
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"  PRIME OR NOT PRIME NUMBER   ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"A - While Loop";
			gotoxy(20,8);
			cout<<"B - Do-While Loop";
			gotoxy(20,9);
			cout<<"C - For Loop";
			gotoxy(20,10);
			cout<<"D - Return to Loop Menu";
			gotoxy(20,11);
			cout<<"------------------------------";
			gotoxy(20,12);
			cout<<"Enter your choice: ";
			cin>>secchoice;

			if(secchoice>='a' && secchoice<='z') {
			secchoice = secchoice - 32;
			}

			switch(secchoice) {
				case 'A': {
					primewhile();
					break;
				}
				case 'B': {
					primedowhile();
					break;
				}
				case 'C': {
					int Num3;
					system("cls");
					gotoxy(20,4);
					cout<<"==============================";
					gotoxy(20,5);
					cout<<"  PRIME OR NOT PRIME NUMBER   ";
					gotoxy(20,6);
					cout<<"==============================";
					gotoxy(20,7);
					cout<<"          FOR LOOP            ";
					gotoxy(20,8);
					cout<<"==============================";
					gotoxy(20,9);
					cout<<"Enter a number: ";
					cin>>Num3;
					gotoxy(20,0);
					cout<<"==============================";
					
					primefor(Num3);
					break;
				}
				case 'D': {
					break;
				}
				default: {
					system("cls");
					gotoxy(20,12);
					cout<<"Invalid Section";
					getch();
					break;
				}
			}
			}while(secchoice!='D' && secchoice!='d');
		}
		break;
		case 'G': {
			do {
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"          FACTORIAL           ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"A - While Loop";
			gotoxy(20,8);
			cout<<"B - Do-While Loop";
			gotoxy(20,9);
			cout<<"C - For Loop";
			gotoxy(20,10);
			cout<<"D - Return to Loop Menu";
			gotoxy(20,11);
			cout<<"------------------------------";
			gotoxy(20,12);
			cout<<"Enter your choice: ";
			cin>>secchoice;

			if(secchoice>='a' && secchoice<='z') {
			secchoice = secchoice - 32;
			}

			switch(secchoice) {
				case 'A': {
					float Num;
					system("cls");
					gotoxy(20,4);
					cout<<"==============================";
					gotoxy(20,5);
					cout<<"          FACTORIAL           ";
					gotoxy(20,6);
					cout<<"==============================";
					gotoxy(20,7);
					cout<<"          WHILE LOOP          ";
					gotoxy(20,8);
					cout<<"==============================";

					gotoxy(20,9);
					cout<<"Enter a number:";
					cin>>Num;
					gotoxy(20,0);
					cout<<"==============================";
					
					factwhile(Num);
					break;
				}
				case 'B': {
					factdowhile();
					break;
				}
				case 'C': {
					int Fact3;
					Fact3=factfor();
					
					gotoxy(20,11);
					cout<<"Factorial: "<<Fact3;
					gotoxy(20,12);
					cout<<"------------------------------";
					getch();
					break;
				}
				case 'D': {
					break;
				}
				default: {
					system("cls");
					gotoxy(20,12);
					cout<<"Invalid Section";
					getch();
					break;
				}
			}
			}while(secchoice!='D' && secchoice!='d');
		}
		break;
		case 'H': {
			do {
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"   GREATEST COMMON DIVISOR    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"A - While Loop";
			gotoxy(20,8);
			cout<<"B - Do-While Loop";
			gotoxy(20,9);
			cout<<"C - For Loop";
			gotoxy(20,10);
			cout<<"D - Return to Loop Menu";
			gotoxy(20,11);
			cout<<"------------------------------";
			gotoxy(20,12);
			cout<<"Enter your choice: ";
			cin>>secchoice;

			if(secchoice>='a' && secchoice<='z') {
			secchoice = secchoice - 32;
			}

			switch(secchoice) {
				case 'A': {
					int result = gcdwhile();
					
					gotoxy(20,12);
					cout<<"Greatest Common Divisor: "<<result;
					gotoxy(20,13);
					cout<<"------------------------------";
					getch();
					break;
				}
				case 'B': {
					gcddowhile();
					break;
				}
				case 'C': {
					int Num5, Num6, result;
					system("cls");

					gotoxy(20,4);
					cout<<"==============================";
					gotoxy(20,5);
					cout<<"   GREATEST COMMON DIVISOR    ";
					gotoxy(20,6);
					cout<<"==============================";
					gotoxy(20,7);
					cout<<"          FOR LOOP            ";
					gotoxy(20,8);
					cout<<"==============================";

					gotoxy(20,9);
					cout<<"Input 1st number: ";
					cin>>Num5;
					gotoxy(20,0);
					cout<<"Input 2nd number: ";
					cin>>Num6;
					gotoxy(20,0);
					cout<<"==============================";
					
					result = gcdfor(Num5, Num6);
					gotoxy(20,12);
					cout << "Greatest Common Divisor: " << result;

					gotoxy(20,13);
					cout<<"------------------------------";
					getch();
					break;
				}
				case 'D': {
					break;
				}
				default: {
					system("cls");
					gotoxy(20,12);
					cout<<"Invalid Section";
					getch();
					break;
				}
			}
			}while(secchoice!='D' && secchoice!='d');
		break;
		}
		case 'I': {
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
			break;
		}
	}
	}while(choice!='I' && choice!='i');
}

void onedime() {
	system("cls");
	int size = 100;
	gotoxy(20,4);
	cout<<"==================================================";
	gotoxy(20,5);
	cout<<"Enter the size of array (max. 100): ";
	cin>>size;
	
		if(size < 1 || size > 100) {
			system("cls");
			gotoxy(20,10);
			cout<<"Invalid input. Row size must be between 1 to 100.";
			getch();
			return;
		}
		
	do {
	system("cls");
		gotoxy(20,4);
		printf("       ONE DIMENSIONAL ARRAY MENU       ");
		gotoxy(20,5);
		printf("========================================");
		gotoxy(20,6);
		printf("A - Input Array");
		gotoxy(20,7);
		printf("B - Print of Array");
		gotoxy(20,8);
		printf("C - Sum of all Elements");
		gotoxy(20,9);
		printf("D - Sum of all Negative Elements");
		gotoxy(20,10);
		printf("E - Smallest & Largest Element");
		gotoxy(20,11);
		printf("F - Number Occurence");
		gotoxy(20,12);
		printf("G - Reversing");
		gotoxy(20,13);
		printf("H - Second Largest Element");
		gotoxy(20,14);
		printf("I - Copy Elements of Array");
		gotoxy(20,15);
		printf("J - Search for Element of Array");
		gotoxy(20,16);
		printf("K - Bublle Sort");
		gotoxy(20,17);
		printf("L - Insertion Sort");
		gotoxy(20,18);
		printf("M - Selection Sort");
		gotoxy(20,19);
		printf("N - Multiplication of next and previos value");
		gotoxy(20,20);
		printf("O - Counting Vowels");
		gotoxy(20,21);
		printf("P - Smallest Missing");
		gotoxy(20,22);
		printf("Q - Absoute Difference");
		gotoxy(20,23);
		printf("R - Occurence of Odd & Even");
		gotoxy(20,24);
		printf("S - Return to Main Menu");
		gotoxy(20,25);
		printf("========================================");
		gotoxy(20,26);
		cout<<"Enter your choice: ";
		cin>>choice;

		if(choice>='a' && choice<='z') {
			choice = choice - 32;
		}

		switch(choice) {
			case 'A': {
				system("cls");
				input(arr1d,size);
				break;
			}
			case 'B': {
				system("cls");
				display(arr1d,size);
				break;
			}
			case 'C': {
				int sum = sumofelements(arr1d,size);
				cout<<"Sum of Elements = "<<sum;
				getch();
				break;
			}
			case 'D': {
				int nsum = sumnegative(arr1d,size);
				cout<<"Sum of all negative elements = "<<nsum;
				getch();
				break;
			}
			case 'E': {
				maxnmin(arr1d,size);
				break;
			}
			case 'F': {
				system("cls");
				cout<<"The array elements are ";
				display(arr1d,size);
				cout<<"\nEnter a number: ";
				cin>>num;
				int sum = occurence(arr1d,size,num);
				cout <<"Number "<<num<<" occured "<<sum<<" time(s).";
				getch();
				break;
			}
			case 'G': {
				reverse(arr1d,size);
				break;
			}
			case 'H': {
				int i;
				system("cls");
				display(arr1d,size);
				int second = seclargest(arr1d,size);
				cout<<"\nThe second largest element is = "<<second;
				getch();
				break;
			}
			case 'I': {
				int array1d2[100];
				int i;
				system("cls");
				cout<<"BEFORE";
				cout<<"\nOriginal Array: ";
				display(arr1d,size);
				cout<<"\nArray 2: ";
				copied(array1d2, arr1d, size);
				cout<<"\nAFTER";
				cout<<"\nOriginal Array: ";
				display(arr1d,size);
				cout<<"\nArray 2: ";
				cout<<'{';
				for (i=0; i<size; i++) {
					if (i==size-1)
						cout << array1d2[i];
					else
						cout << array1d2[i] << ", ";
				}
				cout<<'}';
				getch();
				break;
			}
			case 'J': {
				int originalArr5d[100];
				int first, last, middle;
				int i, j, temp, num;
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr5d[i] = arr1d[i];
				}
				cout<<"Original Array"<<endl;
				display(originalArr5d,size);
				for(i = 0; i<size; i++) {
					for(j = i + 1; j<size; j++) {
						if(originalArr5d[i] > originalArr5d[j]) {
							temp = originalArr5d[i];
							originalArr5d[i] = originalArr5d[j];
							originalArr5d[j] = temp;
						}
					}
				}
				cout<<"\nSorted Array"<<endl;
				display(originalArr5d,size);
				cout<<"\n\nEnter an Integer: ";
				cin>>num;
				int index = search(originalArr5d, size, num);				
				if(index != -1) {
				cout << "The number " << num << " found at Position " << index + 1;
				} else {
				cout << "The number " << num << " is not found in given Array";
				}
				getch();
				break;
			}
			case 'K': {
				int originalArr1d[100];
				int i;
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr1d[i] = arr1d[i];
				}
				cout<<"Before Sorting"<<endl;
				display(originalArr1d,size);
				bubble(originalArr1d, size);
				cout<<"\nAfter Sorting"<<endl;
				display(originalArr1d,size);
				break;
			}
			case 'L': {
				int originalArr21d[100];
				int i;
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr21d[i] = arr1d[i];
				}
				cout<<"Before Sorting"<<endl;
				display(originalArr21d,size);
				insertion(originalArr21d, size);
				cout<<"\nAfter Sorting"<<endl;
				display(originalArr21d,size);
				break;
			}
			case 'M': {
				int originalArr31d[100];
				int i;
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr31d[i] = arr1d[i];
				}
				cout<<"Before Sorting"<<endl;
				display(originalArr31d,size);
				select(originalArr31d, size);
				cout<<"\nAfter Sorting"<<endl;
				display(originalArr31d,size);
				break;
			}
			case 'N': {
				int arrmulti[100];
				int i;
				system("cls");
				for(i = 0; i<size; i++) {
					arrmulti[i] = arr1d[i];
				}
				cout<<"Original Array"<<endl;
				display(arrmulti,size);
				multinp(arrmulti, size);
				cout<<"\n\nProduct Array"<<endl;
				display(arrmulti,size);
				break;
			}
			case 'O': {
				system("cls");
				char letter[5];
				vowelelem(letter, 5);
				getch();
				break;
			}
			case 'P': {
				int originalArr19d[100];
				int i, j, temp;
				int result = smallmissing(originalArr19d, 0, size - 1);
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr19d[i] = arr1d[i];
				}
				cout<<"Original Array"<<endl;
				display(originalArr19d,size);
				for(i = 0; i<size; i++) {
					for(j = i + 1; j<size; j++) {
						if(originalArr19d[i] > originalArr19d[j]) {
							temp = originalArr19d[i];
							originalArr19d[i] = originalArr19d[j];
							originalArr19d[j] = temp;
						}
					}
				}
				cout<<"\nSorted Array"<<endl;
				display(originalArr19d,size);
				cout<<"\n\nSmallest missing element is "<<result;
				getch();
				break;
			}
			case 'Q': {
				int originalArr190d[100];
				int value;
				int i, j;
				system("cls");
				for(i = 0; i<size; i++) {
					originalArr190d[i] = arr1d[i];
				}
				cout<<"Original Array"<<endl;
				display(originalArr190d,size);
				cout << "\nEnter the value: ";
				cin >> value;
				for (i = 0; i < size - 1; ++i) {
					for (j = i + 1; j < size; ++j) {
						if (absolutediff(originalArr190d[i], originalArr190d[j], value)) {
							int temp = originalArr190d[i];
							originalArr190d[i] = originalArr190d[j];
							originalArr190d[j] = temp;
						}
					}
				}
				cout<<"\n\nAbsolute difference from "<< value;
				cout<<"\nSorted Array"<<endl;
				display(originalArr190d,size);
				break;
			}
			case 'R': {
				int i, ctr = 6;
				system("cls");
				cout<<"Aaray: ";
				display(arr1d, size);
				cout<<"\nNumber which occurs odd number of times: "<< oddoccurrence(arr1d, size);
				getch();
				break;
			}
			case 'S': {
				system("cls");
				break;
			}
			default: {
				system("cls");
				gotoxy(20,12);
				cout<<"Invalid choice";
				getch();
			}
		}
		}while(choice!='S' && choice!='s');
}//end onedime function

void twodime() {
system("cls");
gotoxy(20,4);
cout<<"=========================================";
gotoxy(20,5);
cout<<"Enter row size (max. 100): ";
cin>>rwsize;

	if(rwsize < 1 || rwsize > 100) {
		system("cls");
		gotoxy(20,10);
		cout<<"Invalid input. Row size must be between 1 to 100.";
		getch();
		return;
	}
gotoxy(20,0);
cout<<"Enter column size (max. 100): ";
cin>>clmsize;

	if(clmsize < 1 || clmsize > 100) {
		system("cls");
		gotoxy(20,10);
		cout<<"Invalid input. Column size must be between 1 and 100.";
		getch();
		return;
	}
do {
system("cls");
	gotoxy(20,4);
	printf("            TWO DIMENSIONAL ARRAY MENU            ");
	gotoxy(20,5);
	printf("==================================================");
	gotoxy(20,6);
	printf("A - Input Array");
	gotoxy(20,7);
	printf("B - Print of Array");
	gotoxy(20,8);
	printf("C - Sum of all Elements");
	gotoxy(20,9);
	printf("D - Sum of all Negative Elements");
	gotoxy(20,10);
	printf("E - Smallest & Largest Element");
	gotoxy(20,11);
	printf("F - Number Occurence");
	gotoxy(20,12);
	printf("G - Sum of Diagonal Element");
	gotoxy(20,13);
	printf("H - Second Largest Element");
	gotoxy(20,14);
	printf("I - Copy Elements of Array");
	gotoxy(20,15);
	printf("J - Search for Element of Array");
	gotoxy(20,16);
	printf("K - Bublle Sort");
	gotoxy(20,17);
	printf("L - Insertion Sort");
	gotoxy(20,18);
	printf("M - Selection Sort");
	gotoxy(20,19);
	printf("N - Reverse Diagonal");
	gotoxy(20,20);
	printf("O - Sum of Rows & Columns");
	gotoxy(20,21);
	printf("P - Multiplication Table ");
	gotoxy(20,22);
	printf("Q - Bubble Sort (Descending Order)");
	gotoxy(20,23);
	printf("R - Return to Main Menu");
	gotoxy(20,24);
	printf("==================================================");
	gotoxy(20,25);
	cout<<"Enter your choice: ";
	cin>>choice;

	if(choice>='a' && choice<='z') {
		choice = choice - 32;
	}

	switch(choice) {
		case 'A': {
			system("cls");
			input(arr2d, rwsize, clmsize);
			break;
		}
		case 'B': {
			system("cls");
			display(arr2d, rwsize, clmsize);
			getch();
			break;
		}
		case 'C': {
			system("cls");
			int sum = sumofelements(arr2d, rwsize, clmsize);
			cout<<"Sum of Elements = "<<sum;
			getch();
			break;
		}
		case 'D': {
			system("cls");
			int nsum = sumofnegelements(arr2d, rwsize, clmsize);
			cout<<"Sum of all negative elements = "<<nsum;
			getch();
			break;
		}
		case 'E': {
			maxnmin(arr2d, rwsize, clmsize);
			break;
		}
		case 'F': {
			int ctr = 6, rw, clm;
			system("cls");
			display(arr2d, rwsize, clmsize);
			cout<<"\nEnter a number: ";
			cin>>numb;
			int sum = occurence(arr2d, rwsize, clmsize, numb);
			cout<<"\nNumber "<<numb<<" occured "<<sum<<" time(s).";
			getch();
			break;
		}
		case 'G': {
			sumdiagonal(arr2d, rwsize, clmsize);
			getch();
			break;
		}
		case 'H': {
			int rw, clm;
			int second = seclargest(arr2d, rwsize, clmsize);
			system("cls");
			display(arr2d, rwsize, clmsize);
			cout<<"\n\nThe second largest is = "<<second;
			getch();
			break;
		}
		case 'I': {
			int array2d2[100][100];
			int rw, clm;
			system("cls");
			cout<<"BEFORE";
			cout<<"\nOriginal Array"<<endl;
			display(arr2d, rwsize, clmsize);
			cout<<"\nArray 2: ";
			copied(array2d2, arr2d, rwsize, clmsize);
			cout<<"\n\nAFTER";
			cout<<"\nOriginal Array: "<<endl;
			display(arr2d, rwsize, clmsize);
			cout<<"\nArray 2: "<<endl;
			cout<<'{';
			for (rw=0; rw<rwsize; rw++) {
				cout<<"{";
				for (clm=0; clm<clmsize; clm++) {
				if (clm==clmsize-1) {
					if (rw==rwsize-1) {
					cout<<arr2d[rw][clm]<<"}";
					}
					else 
					cout<<arr2d[rw][clm]<<"},"<<endl<<" ";
				}
				else
					cout<<arr2d[rw][clm]<<", ";
				}
				if (rw==rwsize-1)
				cout<<"}";
			}
			getch();
			break;
		}
		case 'J': {
			int originalArr42d[100][100];
			int first, last, middle;
			int num;
			int rw, j, k, temp, clm;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr42d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Original Array: ";
			display(originalArr42d, rwsize, clmsize);
			cout<<"\n\nSorted Array: "<<endl;
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					for(j = 0; j<rwsize; j++) {
						for(k = 0; k<clmsize; k++) {
							if(originalArr42d[rw][clm] < originalArr42d[j][k]) {
								temp = originalArr42d[rw][clm];
								originalArr42d[rw][clm] = originalArr42d[j][k];
								originalArr42d[j][k] = temp;
							}
						}
					}
				}
			}
			display(originalArr42d, rwsize, clmsize);
			cout<<"\nEnter an Integer: ";
			cin>>num;	
			int index = search(originalArr42d, rwsize, clmsize, num);
			if(index != -1) {
				int middleRow = index / clmsize;
				int middleCol = index % clmsize;
				cout << "\nThe number " << num << " found at Position [" << middleRow << "][" << middleCol << "]";
			} else {
				cout << "\nThe number " << num << " is not found in the given Array";
			}
		getch();
		break;
		}
		case 'K': {
			int originalArr2d[100][100];
			int rw, clm;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr2d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Before Sorting: "<<endl;
			display(originalArr2d, rwsize, clmsize); 
			cout<<"\n\nAfter Sorting: "<<endl;
			bubble(originalArr2d, rwsize, clmsize);
			display(originalArr2d, rwsize, clmsize); 
			getch();
			break;
		}
		case 'L': {
			int originalArr22d[100][100];
			int rw, clm;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr22d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Before Sorting: "<<endl;
			display(originalArr22d, rwsize, clmsize); 
			cout<<"\n\nAfter Sorting: "<<endl;
			insertion(originalArr22d, rwsize, clmsize);
			display(originalArr22d, rwsize, clmsize);
			getch();
			break;
		}
		case 'M': {
			int originalArr32d[100][100];
			int rw, clm;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr32d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Before Sorting: "<<endl;
			display(originalArr32d, rwsize, clmsize); 
			cout<<"\n\nAfter Sorting: "<<endl;
			select(originalArr32d, rwsize, clmsize);
			display(originalArr32d, rwsize, clmsize); 
			getch();
			break;
		}
		case 'N': {
			int originalArr52d[100][100];
			int rw, clm;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr52d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Original Array: "<<endl;
			display(originalArr52d, rwsize, clmsize); 
			cout<<"\n\nReversed Array: "<<endl;
			reversediagonal(originalArr52d, rwsize);
			display(originalArr52d, rwsize, clmsize); 
			getch();
			break;
		}
		case 'O': {
			sumrwclm(arr2d, rwsize, clmsize);
			break;
		}
		case 'P': {
			int multi[100][100], rw, clm;
			int ctr = 6;
			system("cls");
			cout<<"Multiplication Table"<<endl;
			multiplication(multi, rwsize, clmsize);
			for(rw = 0; rw<rwsize; rw++) {
				gotoxy(0,ctr);
				for(clm = 0; clm<clmsize; clm++) {
					cout<<multi[rw][clm]<< "   ";
				}
					ctr++;
			}
			getch();
			break;
		}
		case 'Q' : {
			int originalArr62d[100][100];
			int rw, clm, j, temp;
			system("cls");
			for(rw = 0; rw<rwsize; rw++) {
				for(clm = 0; clm<clmsize; clm++) {
					originalArr62d[rw][clm] = arr2d[rw][clm];
				}
			}
			cout<<"Before Sorting: "<<endl;
			display(originalArr62d, rwsize, clmsize); 
			cout<<"\n\nAfter Sorting: "<<endl;
			bsortDesc(originalArr62d, rwsize, clmsize);
			display(originalArr62d, rwsize, clmsize); 
		getch();
		break;
		}
		case 'R': {
			system("cls");
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid choice";
			getch();
		}
	}
	}while(choice!='R' && choice!='r');
}//end twodime function

//start of sequence2 function
void sequence2() {
	char choice;
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"              EXTRA SEQUENCES CODES               ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Convert Seconds";
    gotoxy(20,7);
    cout<<"B - Area of Trianlge (Heron's Formula)";
    gotoxy(20,8);
	cout<<"C - Calculate Third Angle";
	gotoxy(20,9);
	cout<<"D - Kph to Mph";
	gotoxy(20,10);
	cout<<"E - Calculate Compound Interest";
	gotoxy(20,11);
    cout<<"F - Area of Polygon";
	gotoxy(20,12);
	cout<<"G - Upper & Lower Limits";
	gotoxy(20,13);
	cout<<"H - Volume of Sphere";
	gotoxy(20,14);
	cout<<"I - Volume of Cube";
	gotoxy(20,15);
	cout<<"J - Exit";
    gotoxy(20,16);
	cout<<"==================================================";
	gotoxy(20,17);
	cout<<"Enter your choice: ";
    cin>>choice;

	if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
        case 'A': {
			int inputSeconds, hours, minutes, seconds;
			system("cls");
			gotoxy(20,4);
	    	cout<<"              SECONDS CONVERTER                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter the number of seconds: ";
			cin>>inputSeconds;
			convertSeconds(inputSeconds, hours, minutes, seconds);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<inputSeconds<<" secs to "<< hours << " hrs, "<< minutes << " mins, "<< seconds << " secs.";
		getch();
		break;
		}
		case 'B': {
			float side1, side2, side3;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 TRIANGLE AREA                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"         Enter the lengths of the sides           ";
			gotoxy(20,7);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<"Side 1: ";
			cin>> side1;
			gotoxy(20,0);
			cout<<"Side 2: ";
			cin>> side2;
			gotoxy(20,0);
			cout<<"Side 3: ";
			cin>> side3;
			gotoxy(20,0);
	        cout<<"==================================================";
			float area = areaOfTriangle(side1, side2, side3);
			gotoxy(20,12);
			cout<<"Area of the triangle is: "<<area;
		getch();
		break;
		}
		case 'C': {
			int angle1, angle2, angle3;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                   THIRD ANGLE                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter the first angle of the triangle: ";
			cin>>angle1;
			gotoxy(20,0);
			cout<<"Enter the second angle of the triangle: ";
			cin>>angle2;
			angle3 = calculateThirdAngle(angle1, angle2);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,9);
			cout << "The third angle of the triangle is: " << angle3 << " degrees";
		getch();
		break;
		}
		case 'D': {
			float kph, mph;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                   KPH TO MPH                     ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<< "Enter speed in kilometers per hour (km/h): ";
			cin>>kph;
			mph = kph_to_mph(kph);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout << "Speed in miles per hour (mph): "<< mph;
		getch();
		break;
		}
		case 'E': {
			double P, T, R;
			system("cls");
			gotoxy(20,4);
	    	cout<<"           CALCULATE COMPOUND INTEREST            ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout << "Enter Principal Amount (P): ";
			cin >> P;
			gotoxy(20,0);
			cout << "Enter Time Period in Years (T): ";
			cin >> T;
			gotoxy(20,0);
			cout << "Enter Annual Interest Rate (R): ";
			cin >> R;
			double interest = calculateCompoundInterest(P, T, R);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,10);
			cout << "Compound Interest = " << interest;
		getch();
		break;
		}
		case 'F': {
			float ar, s, n;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                AREA OF POLYGON                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input the number of sides of the polygon: ";
    		cin>>n;
			gotoxy(20,0);
			cout<<"Input the length of each side of the polygon: "; 
    		cin>>s;
			ar = calculateArea(n, s);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,9);
			cout<<"The area of the polygon is: " << ar;
		getch();
		break;
		}
		case 'G': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"                MIN & MAX LIMIT                   ";
            gotoxy(20,5);
			cout<<"==================================================";
			gotoxy(20,6);
			cout<<"The maximum limit of int data type : " << INT_MAX;
			gotoxy(20,7);
			cout<<"The minimum limit of int data type : " << INT_MIN;
			gotoxy(20,8);
			cout<<"The maximum limit of unsigned int data type : " << UINT_MAX;
			gotoxy(20,9);
			cout<<"The Bits contain in char data type : " << CHAR_BIT;
			gotoxy(20,10);
			cout<<"The maximum limit of char data type : " << CHAR_MAX;
			gotoxy(20,11);
			cout<<"The minimum limit of char data type : " << CHAR_MIN;
			gotoxy(20,12);
			cout<<"The maximum limit of signed char data type : " << SCHAR_MAX;
			gotoxy(20,13);
			cout<<"The minimum limit of signed char data type : " << SCHAR_MIN;
			gotoxy(20,14);
			cout<<"The maximum limit of unsigned char data type : " << UCHAR_MAX;
			gotoxy(20,15);
			cout<<"The minimum limit of short data type : " << SHRT_MIN;
			gotoxy(20,16);
			cout<<"The maximum limit of short data type : " << SHRT_MAX;
			gotoxy(20,17);
			cout<<"The maximum limit of unsigned short data type : " << USHRT_MAX;
		getch();
		break;
		}
		case 'H': {
			int rad1; 
    		float volsp;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 SPHERE VOLUME                    ";
            gotoxy(20,5);
			cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input the radius of a sphere : "; 
    		cin>>rad1;
			volsp = calculateSphere(rad1);
			gotoxy(20,0);
			cout<<"==================================================";
			gotoxy(20,8);
			cout<<"The volume of a sphere is : "<< volsp;
		getch();
		break;
		}
		case 'I': {
			int side;
    		float volume;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 SPHERE VOLUME                    ";
            gotoxy(20,5);
			cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input the side of a cube : "; 
    		cin>>side;
			volume = calculateCube(side);
			gotoxy(20,0);
			cout<<"==================================================";
			gotoxy(20,8);
			cout<<"The volume of a cube is : "<<volume;
		getch();
		break;
		}
		case 'J': {
			system("cls");
			break;
		}
		default: {
			system("cls");
            gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
        }
    }
    }while(choice!='J' && choice!= 'j');
}//end of sequence2 function

//start of selection2 function
void selection2() {
	char choice;
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"               EXTRA SELECTION CODES              ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Leap Year";
    gotoxy(20,7);
    cout<<"B - Absolute Difference";
    gotoxy(20,8);
	cout<<"C - Check if 30";
	gotoxy(20,9);
    cout<<"D - Check if within 10";
	gotoxy(20,10);
	cout<<"E - Temperature Check";
	gotoxy(20,11);
	cout<<"F - Range of 20-50";
	gotoxy(20,12);
	cout<<"G - Range of 100-200";
	gotoxy(20,13);
	cout<<"H - Check Range if 20-30";
	gotoxy(20,14);
	cout<<"I - Orthogonal or Not";
	gotoxy(20,15);
	cout<<"J - Check Range if 40-50 or 50-60";
	gotoxy(20,16);
	cout<<"K - Exit";
    gotoxy(20,17);
	cout<<"==================================================";
	gotoxy(20,18);
	cout<<"Enter your choice: ";
    cin>>choice;

	if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
        case 'A': {
			system("cls");
            int year;
            gotoxy(20,4);
	    	cout<<"                   LEAP YEAR                      ";
            gotoxy(20,5);
	        cout<<"==================================================";
	    	gotoxy(20,6);
	   	 	cout<<"Enter a year: ";
            cin>> year;
            gotoxy(20,0);
	        cout<<"==================================================";
			if (isLeapYear(year)) {
			gotoxy(20,8);
			cout << year << " is a leap year." << endl;
			} else {
			gotoxy(20,8);
			cout << year << " is not a leap year." << endl;
			}
	    getch();
	    break;
		}
		case 'B': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"               ABSOLUTE DIFFERENCE                ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"53";
			gotoxy(20,7);
			cout<<"30";
			gotoxy(20,8);
			cout<<"51";
			gotoxy(20,9);
	        cout<<"==================================================";
			gotoxy(20,10);
			cout << abso(53);
			gotoxy(20,11);
    		cout << abso(30); 
			gotoxy(20,12); 
    		cout << abso(51); 
			getch();
			break; 
		}
		case 'C': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"                    TRUE IF 30                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
	        cout<<"(30, 0)";
			gotoxy(20,7);
			cout<<"(25, 5)";
			gotoxy(20,8);
			cout<<"(20, 30)";
			gotoxy(20,9);
			cout<<"(20, 25)";
			gotoxy(20,10);
	        cout<<"==================================================";
			gotoxy(20,11);
			cout << truth(30, 0);  
			gotoxy(20,12);
			cout << truth(25, 5); 
			gotoxy(20,13);
			cout << truth(20, 30);  
			gotoxy(20,14);
			cout << truth(20, 25);   
    	getch();
		break;
		}
		case 'D': {
			system("cls");
			int num;
			gotoxy(20,4);
	    	cout<<"                   WITHIN 10                      ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout << "Enter an integer: ";
			cin >> num;
			gotoxy(20,0);
	        cout<<"==================================================";
			if (within10(num)) {
				gotoxy(20,8);
				cout << "The number is within 10 of 100 or 200." << endl;
			} else {
				gotoxy(20,8);
				cout << "The number is not within 10 of 100 or 200." << endl;
			}
		getch();
		break;
		}
		case 'E': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"                TEMPERATURE CHECK                 ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"(120, -1)";
			gotoxy(20,7);
			cout<<"(-1, 120)";
			gotoxy(20,8);
			cout<<"(2, 120)";
			gotoxy(20,9);
	        cout<<"==================================================";
			gotoxy(20,10);
			cout << tempcheck(120, -1);
			gotoxy(20,11);
			cout << tempcheck(-1, 120);
			gotoxy(20,12);
			cout << tempcheck(2, 120);
		getch();
		break;
		}
		case 'F': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"                  RANGE OF 20-50                  ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"(11, 20, 12)";
			gotoxy(20,7);
			cout<<"(30, 30, 17)";
			gotoxy(20,8);
			cout<<"(25, 35, 50)";
			gotoxy(20,9);
			cout<<"(15, 12, 8)";
			gotoxy(20,10);
	        cout<<"==================================================";
			gotoxy(20,11);
			cout << range(11, 20, 12);  
			gotoxy(20,12);
			cout << range(30, 30, 17);   
			gotoxy(20,13);
			cout << range(25, 35, 50);   
			gotoxy(20,14);
			cout << range(15, 12, 8);
		getch();
		break;
		}
		case 'G': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"               RANGE OF 100-200                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"(100, 199)";
			gotoxy(20,7);
			cout<<"(250, 300)";
			gotoxy(20,8);
			cout<<"(105, 190)";
			gotoxy(20,9);
	        cout<<"==================================================";
			gotoxy(20,10);
			cout << rangehundred(100, 199); 
    		gotoxy(20,11);
			cout << rangehundred(250, 300); 
    		gotoxy(20,12);
			cout << rangehundred(105, 190);
		getch();
		break;
		}
		case 'H': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 RANGE OF 20-30                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"(78, 95)";
			gotoxy(20,7);
			cout<<"(20, 30)";
			gotoxy(20,8);
			cout<<"(21, 25)";
			gotoxy(20,9);
			cout<<"(28, 28)";
			gotoxy(20,10);
	        cout<<"==================================================";
			gotoxy(20,11);
			cout << check(78, 95);
			gotoxy(20,12);
			cout << check(20, 30);
			gotoxy(20,13);
			cout << check(21, 25);
			gotoxy(20,14);
			cout << check(28, 28);
		getch();
		break;
		}
		case 'I': {
			double x1, y1, x2, y2, x3, y3, x4, y4;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 ORTHOGONAL/NOT                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter coordinates of point A (x1 y1): ";
			cin>> x1 >> y1;
			gotoxy(20,0);
			cout<<"Enter coordinates of point B (x2 y2): ";
			cin>> x2 >> y2;
			gotoxy(20,0);
			cout<< "Enter coordinates of point C (x3 y3): ";
			cin>> x3 >> y3;
			gotoxy(20,0);
			cout<<"Enter coordinates of point D (x4 y4): ";
			cin>> x4 >> y4;
			gotoxy(20,0);
	        cout<<"==================================================";
			checkOrthogonal(x1, y1, x2, y2, x3, y3, x4, y4);
		getch();
		break;
		}
		case 'J': {
			system("cls");
			gotoxy(20,4);
	    	cout<<"              RANGE OF 20-30/50-60                ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"(78, 95)";
			gotoxy(20,7);
			cout<<"(25, 35)";
			gotoxy(20,8);
			cout<<"(40, 50)";
			gotoxy(20,9);
			cout<<"(55, 60)";
			gotoxy(20,10);
	        cout<<"==================================================";
			gotoxy(20,11);
			cout << forty(78, 95);
			gotoxy(20,12);
			cout << forty(25, 35);
			gotoxy(20,13);
			cout << forty(40, 50);
			gotoxy(20,14);
			cout << forty(55, 60);
		getch();
		break;
		}
		case 'K': {
			system("cls");
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
		}
    }
    }while(choice!='K' && choice!= 'k');
	getch();
}//end of selection2 function

//start of mainloop2 function
void mainloop2() {
	char choice;
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"                EXTRA LOOP CODES                  ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Sum of first 10 Numbers";
    gotoxy(20,7);
    cout<<"B - Sum of n Numbers";
    gotoxy(20,8);
	cout<<"C - Perfect Numbers Between 1 & 500";
	gotoxy(20,9);
	cout<<"D - Last Prime Before";
	gotoxy(20,10);
	cout<<"E - Sum of Digits";
	gotoxy(20,11);
	cout<<"F - Sum of Series (Power)";
	gotoxy(20,12);
	cout<<"G - Sum of Series";
	gotoxy(20,13);
	cout<<"H - Multiplication Table";
	gotoxy(20,14);
	cout<<"I - Add Binary";
	gotoxy(20,15);
	cout<<"J - Sum of Series";
	gotoxy(20,16);
	cout<<"K - Convert Octal to Decimal";
	gotoxy(20,17);
    cout<<"L - Exit";
    gotoxy(20,18);
	cout<<"==================================================";
	gotoxy(20,19);
	cout<<"Enter your choice: ";
    cin>>choice;

	if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
        case 'A': {
			system("cls");
			int n = 10;
			int sum = sumOfNaturalNumbers(n);
			int ctr = 6;
			gotoxy(20,4);
	    	cout<<"                SUM OF FIRST 10                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			for(int i = 1; i <= n; ++i) {\
				gotoxy(20,ctr);
				cout << i << " ";
				ctr++;
			}
			gotoxy(20,ctr);
	        cout<<"==================================================";
			ctr++;
			gotoxy(20,ctr);
			cout<<"The sum of the first "<<n<<" natural numbers is: "<<sum;
		getch(); 
		break;
		}
		case 'B': {
			system("cls");
			int i, n;
			int ctr = 9;
			gotoxy(20,4);
	    	cout<<"               SUM OF N NUMBERS                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter the number of terms: ";
			cin>>n;
			gotoxy(20,0);
			cout<<"The first "<<n<<" natural numbers are: ";
			gotoxy(20,8);
	        cout<<"==================================================";
			for (i = 1; i <= n; i++) {
				gotoxy(20,ctr);
				cout << i << " ";
				ctr++;
			}
			gotoxy(20,ctr);
			cout<<"==================================================";
			ctr++;
			gotoxy(20,ctr);
			int n2sum = displayAndSumNaturalNumbers(n);
			cout<<"The sum of the first "<<n<<" natural numbers is: "<<n2sum;
		getch(); 
		break;
		}
		case 'C': {
			system("cls");
			int ctr = 8;
			int i;
			gotoxy(20,4);
	    	cout<<"              PERFECT BETWEEN 1&500               ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Perfect numbers between 1 and 500 are: ";
			gotoxy(20,7);
	        cout<<"==================================================";
			for (i = 1; i <= 500; ++i) {
				if (isPerfect(i)) {
					gotoxy(20,ctr);
					cout<<i<<" ";
					ctr++;
				}
			}
		getch(); 
		break;
		}
		case 'D': {
			system("cls");
			int num;
			gotoxy(20,4);
	    	cout<<"             LAST PRIME NUMBER OCCUR              ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter a number: ";
			cin>>num;
			int result = lastPrimeBefore(num);
			gotoxy(20,0);
	        cout<<"==================================================";
			if (result == -1){
				gotoxy(20,8);
				cout<<"No prime number found before "<<num;
			} else {
				gotoxy(20,8);
				cout<<"The largest prime number before "<<num<<" is "<<result;
			}
		getch();
		break;
		}
		case 'E': {
			system("cls");
			int num;
			gotoxy(20,4);
	    	cout<<"                  SUM OF DIGITS                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter a number: ";
			cin>>num;
			int sum = sumOfDigits(num);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<"Sum of digits of "<<num<<" is: "<<sum;
		getch();
		break;
		}
		case 'F': {
			system("cls");
			int n;
			double result;
			gotoxy(20,4);
	    	cout<<"                 SUM OF SERIES                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Enter the value of n: ";
			cin>>n;
			result = sumSeries(n);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<"Sum of the series up to "<<n<<" terms is: "<<result;
		getch();
		break;
		}
		case 'G': {
			system("cls");
			int n;
			gotoxy(20,4);
	    	cout<<"                  SUM OF SERIES                   ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout << "Enter the value of n: ";
			cin >> n;
			int result = sumOfSquares(n);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<"Sum of the series (1*1) + (2*2) + ... + ("<<n<<"*"<<n<<") = "<<result;
		getch(); 
		break;
		}
		case 'H': {
			int a;
			system("cls");
			printMultiplicationTable(a);
		getch();
		break;
		}
		case 'I': {
			long bn1, bn2;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                    ADD BINARY                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input the 1st binary number: ";
			cin>>bn1;
			gotoxy(20,0);
			cout<<"Input the 2nd binary number: ";
			cin>>bn2;
			long long sum = addBinary(bn1, bn2);
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,9);
			cout<<"The sum of two binary numbers is: " << sum;
		getch();
		break;
		}
		case 'J': {
			int n;
			int ctr = 8;
			system("cls");
			gotoxy(20,4);
	    	cout<<"                 SUM OF SERIES                    ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input number of terms: "; 
    		cin>>n;
			gotoxy(20,0);
	        cout<<"==================================================";
			int t = 1; 
			for (int i = 1; i <= n; i++) {
				gotoxy(20,ctr);
				cout<< t; 
				ctr++;
				if (i < n) 
				{
					cout << " + "; 
				}
				t = (t * 10) + 1; 
			}
			int sum = calculateSeriesSum(n); 
			gotoxy(20,ctr);
			cout<<" The sum of the series is: " << sum;
		getch();
		break;
		}
		case 'K': {
			long octal_num, decimal_num = 0; 
    		int i = 0; 
			system("cls");
			gotoxy(20,4);
	    	cout<<"             CONVERT OCTAL TO DECIMAL             ";
            gotoxy(20,5);
	        cout<<"==================================================";
			gotoxy(20,6);
			cout<<"Input any octal number: "; 
    		cin>>octal_num; 
			while (octal_num != 0) {
				decimal_num = (long)(decimal_num + (octal_num % 10) * pow(8, i++)); 
				octal_num = octal_num / 10; 
			}
			gotoxy(20,0);
	        cout<<"==================================================";
			gotoxy(20,8);
			cout<<"The equivalent decimal number: "<<decimal_num;
		getch();
		break;
		}
		case 'L': {
			system("cls");
			break;
		}
		default: {
			system("cls");
            gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
        }
    }
    }while(choice!='L' && choice!= 'l');
}//end of mainloop2 function

//start of oned2 function
void oned2() {
	int size2 = 100;
	char choice;
	system("cls");
	gotoxy(20,4);
	cout<<"==================================================";
	gotoxy(20,5);
	cout<<"Enter the size of array (max. 100): ";
	cin>>size2;
		if(size2 < 1 || size2 > 100) {
			system("cls");
			gotoxy(20,10);
			cout<<"Invalid input. Row size must be between 1 to 100.";
			getch();
			return;
		}
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"         EXTRA ONE DIMENSIONAL ARRAY CODES        ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Input Array";
    gotoxy(20,7);
    cout<<"B - Display Array";
    gotoxy(20,8);
	cout<<"C - Find K Largest";
	gotoxy(20,9);
	cout<<"D - Atleast 2 Greater Elements";
	gotoxy(20,10);
	cout<<"E - Rearrange in Zigzag";
	gotoxy(20,11);
	cout<<"F - Seperate Even and Odds";
	gotoxy(20,12);
	cout<<"G - Sum Equal to Largest Number";
	gotoxy(20,13);
	cout<<"H - Sum Equal to Specified Number";
	gotoxy(20,14);
    cout<<"I - Exit";
    gotoxy(20,15);
	cout<<"==================================================";
	gotoxy(20,16);
	cout<<"Enter your choice: ";
    cin>>choice;

	if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
        case 'A': {
			system("cls");
			input2(arr1d2,size2);
			break;
		}
		case 'B': {
			system("cls");
			display2(arr1d2, size2);
			break;
		}
		case 'C': {
			system("cls");
			int k, i;
			display2(arr1d2, size2);
			cout<<"\nEnter the value of k: ";
			cin>>k;
			findKLargest(arr1d2, size2, k);
		getch();
		break;
		}
		case 'D': {
			system("cls");
			cout<<"Original Array: "<<endl;
			display2(arr1d2, size2);
			twosigni(arr1d2, size2);
		getch();
		break;
		}
		case 'E': {
			system("cls");
			cout<<"Original Array: "<<endl;
			display2(arr1d2, size2);
			cout<<"\n\nNew array elements: "<<endl;
			zigzag(arr1d2, size2);
			display2(arr1d2, size2);
		getch();
		break;
		}
		case 'F': {
			system("cls");
			cout<<"Original Array: "<<endl;
			display2(arr1d2, size2);
			cout<<"\n\nArray after segregation: "<<endl;
			segregateEvenOdd(arr1d2, size2);
			display2(arr1d2, size2);	
		break;	
		}
		case 'G': {
			system("cls");
			cout<<"Original Array: "<<endl;
			display2(arr1d2, size2);
			int result = sumEqualToLargest(arr1d2, size2);
			if (result == 1) {
				cout << "\n\nTrue" << endl;
			} else {
				cout << "\n\nFalse" << endl;
			}
		getch();
		break;
		}
		case 'H': {
			int targetSum;
			system("cls");
			findPairs(arr1d2, size2, targetSum);
			
		getch();
		break;
		}
		case 'I': {
			system("cls");
			break;
		}
		default: {
			system("cls");
            gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
        }
    }
    }while(choice!='I' && choice!= 'i');
}//end of oned2 function

//start of twod2 function
void twod2() {
	char choice;
	system("cls");
	gotoxy(20,4);
	cout<<"=========================================";
	gotoxy(20,5);
	cout<<"Enter row size (max. 100): ";
	cin>>rwsize2;

	if(rwsize2 < 1 || rwsize2 > 100) {
		system("cls");
		gotoxy(20,10);
		cout<<"Invalid input. Row size must be between 1 to 100.";
		getch();
		return;
	}
	gotoxy(20,0);
	cout<<"Enter column size (max. 100): ";
	cin>>clmsize2;

	if(clmsize2 < 1 || clmsize2 > 100) {
		system("cls");
		gotoxy(20,10);
		cout<<"Invalid input. Column size must be between 1 and 100.";
		getch();
		return;
	}
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"        EXTRA TWO DIMENSIONAL ARRAY CODES         ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Input Array";
    gotoxy(20,7);
    cout<<"B - Display Array";
	gotoxy(20,8);
	cout<<"C - Magic Square";
    gotoxy(20,9);
	cout<<"D - Find K Largest";
	gotoxy(20,10);
	cout<<"E - Atleast 2 Greater Elements";
	gotoxy(20,11);
	cout<<"F - Rearrange in Zigzag";
	gotoxy(20,12);
	cout<<"G - Seperate Even and Odds";
	gotoxy(20,13);
	cout<<"H - Sum Equal to Largest Number";
	gotoxy(20,14);
	cout<<"I - Sum Equal to Specified Number";
	gotoxy(20,15); 
    cout<<"J - Exit";
    gotoxy(20,16);
	cout<<"==================================================";
	gotoxy(20,17);
	cout<<"Enter your choice: ";
    cin>>choice;

	if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
		case 'A': {
			system("cls");
			input3(arr2d2, rwsize2, clmsize2);
			break;
		}
		case 'B': {
			system("cls");
			display3(arr2d2, rwsize2, clmsize2);
			break;
		}
        case 'C': {
			system("cls");
			int rw, clm;
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			if (isMagicSquare(arr2d2, rwsize2, clmsize2)) {
				cout << "\n\nThe matrix is a magic square." << endl;
			} else {
				cout << "\n\nThe matrix is not a magic square." << endl;
			}
			getch();
			break;
		}
		case 'D': {
			system("cls");
			int k, rw, clm;
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			cout<<"\n\nEnter the value of k: ";
			cin>>k;
			findKLargest2(arr2d2, rwsize2, clmsize2, k);
		break;
		}
		case 'E': {
			system("cls");
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			twosigni2(arr2d2, rwsize2, clmsize2);
		break;
		}
		case 'F': {
			system("cls");
			int rw, clm;
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			cout<<"\n\nNew array elements: "<<endl;
			zigzag2(arr2d2, rwsize2, clmsize2);
			display3(arr2d2, rwsize2, clmsize2);
		break;
		}
		case 'G': {
			system("cls");
			int rw, clm;
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			cout<<"\n\nArray after segregation: "<<endl;
			segregateEvenOdd2(arr2d2, rwsize2, clmsize2);
			display3(arr2d2, rwsize2, clmsize2);
		break;
		}
		case 'H': {
			int rw, clm;
			system("cls");
			cout<<"Original Array: "<<endl;
			display3(arr2d2, rwsize2, clmsize2);
			int result = sumEqualToLargest2(arr2d2, rwsize2, clmsize2);
			if (result == 1) {
				cout << "\n\nTrue";
			} else {
				cout << "\n\nFalse";
			}
		getch();
		break;
		}
		case 'I': {
			int targetSum2;
			system("cls");
			findPairs2(arr2d2,  rwsize2, clmsize2, targetSum2);
		getch();
		break;
		}
		case 'J': {
			system("cls");
			break;
		}
		default: {
			system("cls");
            gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
        }
    }
    }while(choice!='J' && choice!= 'j');
}//end of twod2 function

//start of main2 function
void main2() {
    char choice;
    do{
    system("cls");
    gotoxy(20,4);
    cout<<"               EXTRA DAILY CODINGS                ";
    gotoxy(20,5);
	cout<<"==================================================";
    gotoxy(20,6);
    cout<<"A - Sequence";
    gotoxy(20,7);
    cout<<"B - Selection";
	gotoxy(20,8);
	cout<<"C - Loop/Iteration";
	gotoxy(20,9);
	cout<<"D - One Dimensional Array";
	gotoxy(20,10);
	cout<<"E - Two Dimensional Array";
    gotoxy(20,11);
    cout<<"F - Exit";
    gotoxy(20,12);
	cout<<"==================================================";
	gotoxy(20,13);
	cout<<"Enter your choice: ";
    cin>>choice;

    if(choice>='a' && choice<='z') {
        choice = choice - 32;
    }

    switch(choice) {
        case 'A': {
			sequence2();
	    	break;
		}
		case 'B': {
			selection2();			
			break;
		} 
		case 'C': {
			mainloop2();
			break;
		}
		case 'D': {
			oned2();
			break;
		}
		case 'E': {
			twod2();
			break;
		}
		case 'F': {
			system("cls");
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
		}
	}
    }while(choice!='F' && choice!= 'f');
}//end of main2 function

int main() {
	int i = 0;
    char username[20], password[20], ch;
    system("cls");
    system("Color 09");
    gotoxy(20, 6);
    printf("ooooo         ooooooo     ooooooo8 ooooo oooo   oooo");
    gotoxy(20, 7);
    printf(" 888        o888   888o o888    88  888   8888o  88 ");
    gotoxy(20, 8);
    printf(" 888        888     888 888    oooo 888   88 888o88 ");
    gotoxy(20, 9);
    printf(" 888      o 888o   o888 888o    88  888   88   8888 ");
    gotoxy(20, 10);
    printf("o888ooooo88   88ooo88    888ooo888 o888o o88o    88 ");
    gotoxy(20,11);
    cout << "Enter username: ";
    cin >> username;
    gotoxy(20,0);
    cout << "Enter password: ";
	while ((ch = getch()) != 13) {
		if (ch == 8) {
			if (i > 0) {
				password[i] = 0;
				cout << "\b \b";
				i--;
			}
		} else {
		password[i] = ch;
		cout << "*";
		i++;
		}
	}
	password[i] = '\0';

    if (strcmp(username, "KYLE") == 0 && strcmp(password, "0012") == 0) {
	system("cls");
	gotoxy(20,10);
	cout << "Login successful!";
    } else {
	system("cls");
	gotoxy(20,10);
	cout << "Login failed. Invalid username or password.";
	getch();
	return 0;
    }
getch();

	char choice;
	do {
	system("cls");
	gotoxy(20,4);
	cout<<"========================================";
	gotoxy(20,5);
	cout<<"    PROGRAMMING CONSTRUCTS MAIN MENU    ";
	gotoxy(20,6);
	cout<<"========================================";
	gotoxy(20,7);
	cout<<"A - Sequence";
	gotoxy(20,8);
	cout<<"B - Selection";
	gotoxy(20,9);
	cout<<"C - Loop/Iteration";
	gotoxy(20,10);
	cout<<"D - One Dimensional Array";
	gotoxy(20,11);
	cout<<"E - Two Dimensional Array";
	gotoxy(20,12);
	cout<<"F - Additional Daily Codings";
	gotoxy(20,13);
	cout<<"G - Exit";
	gotoxy(20,14);
	cout<<"----------------------------------------";
	gotoxy(20,15);
	cout<<"Enter your choice: ";
	cin>>choice;
	
	if(choice>='a' && choice<='z') {
		choice = choice - 32;
	}

	switch(choice) {
		case 'A': {
			sequence();
			break;
		}
		case 'B': {
			selection();
			break;
		}
		case 'C': {
			mainloop();
			break;
		}
		case 'D': {
			onedime();
			break;
		}
		case 'E': {
			twodime();
			break;
		}
		case 'F': {
			main2();
			break;
		}
		case 'G': {
			system("cls");
			break;
		}
		default: {
			system("cls");
			gotoxy(20,12);
			cout<<"Invalid Section";
			getch();
		}
	}
	}while(choice!='G' && choice!='g');
getch();
}