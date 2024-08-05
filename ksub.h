#ifndef KSUB_H
#define KSUB_H

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void gotoxy(int x, int y) { //gotoxy in gcc
  if (y!=0)
  cout<<endl;
  for (int z=1; z<=x; z++){
  cout<<"  ";
  }
}

void SDPQ(int N1, int N2) { /*with args no return*/
	int S=N1+N2;
	int D=N1-N2;
	int P=N1*N2;
	int Q=N1/N2;

	gotoxy(20,0);
	cout<<"=======================================================";
	gotoxy(20,9);
	cout<<"Sum:"<<S;
	gotoxy(20,10);
	cout<<"Difference:"<<D;
	gotoxy(20,11);
	cout<<"Product:"<<P;
	gotoxy(20,12);
	cout<<"Quotient:"<<Q;
	gotoxy(20,13);
	cout<<"-------------------------------------------------------";
	getch();
}

void printname() { /*no args no return*/
	system("cls");
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"     Aaron Kyle D. Efondo     ";
	gotoxy(20,8);
	cout<<"     Aaron Kyle D. Efondo     ";
	gotoxy(20,9);
	cout<<"     Aaron Kyle D. Efondo     ";
	gotoxy(20,10);
	cout<<"     Aaron Kyle D. Efondo     ";
	gotoxy(20,11);
	cout<<"     Aaron Kyle D. Efondo     ";
	gotoxy(20,12);
	cout<<"==============================";
	getch();
}

void areacirc(float diameter) { /*with args no return*/
	float radius = diameter/2;
	float c=2*3.1416*radius;
	float a=3.1416*radius*radius;
	gotoxy(20,9);
	cout<<"Circumference:"<<c;
	gotoxy(20,10);
	cout<<"Area:"<<a;
	gotoxy(20,11);
	cout<<"----------------------------------------";
	getch();
}

float average(float prelim, float midterm, float final) { /*with args with return*/
	return (prelim + midterm + final) / 3;
}

float totalsale() { /*no args with return*/
	float salesman_number, unit_price, unit_sold;
	char salesman_name[10];
	system("cls");
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"         TOTAL SALES          ";
	gotoxy(20,6);
	cout<<"==============================";

	gotoxy(20,7);
	cout<<"Salesman Number:";
	cin>>salesman_number;
	gotoxy(20,0);
	cout<<"Saleman Name:";
	cin>>salesman_name;
	gotoxy(20,0);
	cout<<"Unit Sold:";
	cin>>unit_sold;
	gotoxy(20,0);
	cout<<"Unit Price:";
	cin>>unit_price;
	gotoxy(20,0);
	cout<<"==============================";

	return unit_sold * unit_price;
}

void swap () { /*no args no return*/
	int a1, b1, temp;
	a1 = 5;
	b1 = 6;
	temp = 0;
	system("cls");
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"         SWAP VALUES          ";
	gotoxy(20,6);
	cout<<"==============================";

	temp = a1;
	a1 = b1;
	b1 = temp;
	gotoxy(20,7);
	cout<<"a = "<<a1;
	gotoxy(20,8);
	cout<<"b = "<<b1;
	gotoxy(20,9);
	cout<<"------------------------------";
	getch();
}

void squarecube(int N) { /*with args no return*/
	int Square = N * N;
	int Cube = N * N * N;
	gotoxy(20,9);
	cout<<"Square:"<<Square;
	gotoxy(20,10);
	cout<<"Cube:"<<Cube;
	gotoxy(20,11);
	cout<<"------------------------------";
	getch();
}

int grosspay(int Hourswork, int Rate) { /*with args with return*/
	return Hourswork * Rate;
}

void temp(float Celsius) { /*with args no return*/
	float Fahrenheit = (Celsius * 1.8) + 32;
	gotoxy(20,0);
	cout<<"==============================";
	gotoxy(20,9);
	cout<<"Fahrenheit:"<<Fahrenheit;
	gotoxy(20,10);
	cout<<"------------------------------";
	getch();
}

void areaperi() { /*no args no return*/
	float Width, Length, Perimeter, Area;
	system("cls");
	
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"PERIMETER & AREA OF RECTANGLE ";
	gotoxy(20,6);
	cout<<"==============================";

	gotoxy(20,7);
	cout<<"Width:";
	cin>>Width;
	gotoxy(20,0);
	cout<<"Length:";
	cin>>Length;

	Perimeter = 2 * (Length + Width);
	Area = Width * Length;

	gotoxy(20,0);
	cout<<"==============================";
	gotoxy(20,10);
	cout<<"Perimeter:"<<Perimeter;
	gotoxy(20,11);
	cout<<"Area:"<<Area;
	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

void posinega(float Num1) { /*with args no return*/
	if (Num1>0){
		gotoxy(20,9);
		cout<<"Positive";

	} else {
		gotoxy(20,9);
		cout<<"Negative";
	}
	gotoxy(20,10);
	cout<<"------------------------------";
	getch();
}

void oddoreven() { /*no args no return*/
	int Num2;
	system("cls");
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"         EVEN OR ODD          ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"Input a number:";
	cin>>Num2;
	gotoxy(20,0);
	cout<<"==============================";

	if (Num2 % 2 == 0){
		gotoxy(20,9);
		cout<<"Even number";
	}
	else {
		gotoxy(20,9);
		cout<<"Odd number";
	}
	gotoxy(20,10);
	cout<<"------------------------------";
	getch();
}
int passorfail() { /*no args with return*/
	float Prelim1, Midterm1, Final1, Ave1;
	system("cls");

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"          AVERAGE             ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"Prelim Grade:";
	cin>>Prelim1;
	gotoxy(20,0);
	cout<<"Midterm Grade:";
	cin>>Midterm1;
	gotoxy(20,0);
	cout<<"Final Grade:";
	cin>>Final1;

	return (Prelim1 + Midterm1 + Final1) / 3;
}
float commission(float Unit_sold, float Unit_price) { /*with args with return*/
	return Unit_sold * Unit_price;
}

void equivgrade() { /*no args no return*/
	float Prelim2, Midterm2, Final2, Ave2;
	system("cls");
	

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"      EQUIVALENT GRADE        ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"Prelim Grade:";
	cin>>Prelim2;
	gotoxy(20,0);
	cout<<"Midterm Grade:";
	cin>>Midterm2;
	gotoxy(20,0);
	cout<<"Final Grade:";
	cin>>Final2;
	gotoxy(20,0);
	cout<<"==============================";

	Ave2 = (Prelim2 + Midterm2 + Final2) / 3;

	gotoxy(20,11);
	cout<<"Average:"<<Ave2;

	if (Ave2>=97) {
		gotoxy(20,12);
		cout<<"1.0";
		}
	else if (Ave2>=94) {
		gotoxy(20,12);
		cout<<"1.25";
		}
	else if (Ave2>=91) {
		gotoxy(20,12);
		cout<<"1.5";
		}
	else if (Ave2>=88) {
		gotoxy(20,12);
		cout<<"1.75";
		}
	else if (Ave2>=85) {
		gotoxy(20,12);
		cout<<"2.0";
		}
	else if (Ave2>=82) {
		gotoxy(20,12);
		cout<<"2.25";
		}
	else if (Ave2>=79) {
		gotoxy(20,12);
		cout<<"2.5";
		}
	else if (Ave2>=76) {
		gotoxy(20,12);
		cout<<"2.75";
		}
	else if (Ave2==75) {
		gotoxy(20,12);
		cout<<"3.00";
		}
	else {
		gotoxy(20,12);
		cout<<"5.0";
		}
	gotoxy(20,13);
	cout<<"------------------------------";
	getch();
}

void triplesum(int Num3, int Num4) { /* with args no return*/
	int Sum = Num3 + Num4;

	if (Num3==Num4) {
		Sum = Sum * 3;
		gotoxy(20,10);
		cout<<"Sum:"<<Sum;
		}
	else {
		gotoxy(20,10);
		cout<<"Sum:"<<Sum;
		}
	gotoxy(20,11);
	cout<<"------------------------------";
	getch();
}
void multiple() { /*no args no return*/
	int Num5;
	system("cls");
	
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"      MULTIPLE BY 3 & 7       ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"Input a number:";
	cin>>Num5;
	gotoxy(20,0);
	cout<<"==============================";

	if (Num5%3==0) {
		gotoxy(20,9);
		cout<<"It is multiple by 3";
		}
		 if (Num5%7==0) {
			gotoxy(20,10);
			cout<<"It is multiple by 7";
			}
			else {
			if (Num5%7==0) {
			gotoxy(20,10);
			cout<<"It is multiple by 7";
			}
		}
	gotoxy(20,11);
	cout<<"------------------------------";
	getch();
}

float largest(float N1, float N2) { /*with args with return*/
	if (N1>N2)
		return N1;
	else
		return N2;
}
float smallest() { /*no args with return*/
	float N3, N4, N5;
	system("cls");
	
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"       SMALLEST NUMBER        ";
	gotoxy(20,6);
	cout<<"==============================";

	gotoxy(20,7);
	cout<<"Input 1st number:";
	cin>>N3;
	gotoxy(20,0);
	cout<<"Input 2nd number:";
	cin>>N4;
	gotoxy(20,0);
	cout<<"Input 3rd number:";
	cin>>N5;
	gotoxy(20,0);
	cout<<"==============================";

	if (N3<N4 && N3<N5)
		return N3;
	else if (N4<N3 && N4<N5)
		return N4;
	else
		return N5;
}

void closest () { /* no args no return*/
	float N6, N7, CV1, CV2;

	system("cls");
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"    NUMBER CLOSEST TO 100     ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"Input 1st number:";
	cin>>N6;
	gotoxy(20,0);
	cout<<"Input 2nd number:";
	cin>>N7;
	gotoxy(20,0);
	cout<<"==============================";

	if (N6==N7) {
		gotoxy(20,10);
		cout<<"0";
		}
	else {
		CV1 = 100 - N6;
		CV2 = 100 - N7;

			if (CV1<0) {
			CV1 = CV1*(-1);
			}
		 if (CV2<0) {
			CV2 = CV2*(-1);
			}
		 if (CV1<CV2) {
			gotoxy(20,10);
			cout<<N6;
			}
		else {
			gotoxy(20,10);
			cout<<N7;
			}
		}
	gotoxy(20,11);
	cout<<"------------------------------";
	getch();
}

void loop1() { /*no args no return*/
	char choice;
    do {
    system("cls");
    gotoxy(20,4);
    cout<<"==============================";
    gotoxy(20,5);
    cout<<"    PRINT GECILIE 10 TIMES    ";
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
    cin>>choice;

    if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': {
			int ctr, i;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT GECILIE 10 TIMES    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         WHILE LOOP           ";
			gotoxy(20,8);
			cout<<"==============================";

			ctr = 0;
			i = 9;
			while (ctr <= 10) {
			gotoxy (20,i);
			cout<<"Gecilie";
			ctr = ctr +1;
			i = i + 1;
			}
			gotoxy(20,19);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'B': {
			int ctr2, i2;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT GECILIE 10 TIMES    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"        DO-WHILE LOOP         ";
			gotoxy(20,8);
			cout<<"==============================";

			ctr2 = 0;
			i2 = 9;
			do {
			gotoxy (20,i2);
			cout<<"Gecilie";
			ctr2 = ctr2 +1;
			i2 = i2 + 1;
			} while (ctr2 <= 10);
			gotoxy(20,19);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'C': {
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT GECILIE 10 TIMES    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"          FOR LOOP            ";
			gotoxy(20,8);
			cout<<"==============================";

			for (int ctr3 = 0, i3 = 9; ctr3 <= 10; ++ctr3, ++i3) {
			gotoxy(20, i3);
			cout<<"Gecilie";
			}

			gotoxy(20,19);
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
	}while(choice!='D' && choice!='d');
}

void loop2() { /*no args no return*/
	char choice;
	do {
	system("cls");
    gotoxy(20,4);
    cout<<"==============================";
    gotoxy(20,5);
    cout<<"PRINT NUMBERS 1-5";
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
    cin>>choice;

	if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': {
			int number, i;
			system("cls");
			number = 1;
			i = 9;

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"     PRINT NUMBERS 1-5        ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         WHILE LOOP           ";
			gotoxy(20,8);
			cout<<"==============================";

			while (number<=5) {
				gotoxy(20,i);
				cout<<number;
				number = number + 1;
				i = i + 1;
				}
			gotoxy(20,14);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'B': { 
			int number2, i2;
			system("cls");
			number2 = 1;
			i2 = 9;

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"      PRINT NUMBERS 1-5       ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"        DO-WHILE LOOP         ";
			gotoxy(20,8);
			cout<<"==============================";

			do {
				gotoxy(20,i2);
				cout<<number2;
				number2 = number2 + 1;
				i2 = i2 + 1;
			} while (number2<=5);
			gotoxy(20,14);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'C': {
			int number3, i3;
			system("cls");
			number3 = 1;
			i3 = 9;

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"      PRINT NUMBERS 1-5       ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"          FOR LOOP            ";
			gotoxy(20,8);
			cout<<"==============================";

			for (number3 = 1; number3 <= 5; number3++) {
				gotoxy(20, i3);
				cout << number3;
				i3++;
			}
			gotoxy(20,14);
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
	}while(choice!='D' && choice!='d');
}

void loop3() { /*no args no return*/
	char choice;
	do {
	system("cls");
    gotoxy(20,4);
    cout<<"==============================";
    gotoxy(20,5);
    cout<<"      PRINT NUMBERS 5-1       ";
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
    cin>>choice;

	if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': { 
			int number, i;
			system("cls");
			
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"      PRINT NUMBERS 5-1       ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         WHILE LOOP           ";
			gotoxy(20,8);
			cout<<"==============================";

			number = 5;
			i = 9;

			while (number>0) {
				gotoxy(20,i);
				cout<<number;
				number = number - 1;
				i = i + 1;
				}
			gotoxy(20,14);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'B': { 
			int number2, i2;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"      PRINT NUMBERS 5-1       ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"        DO-WHILE LOOP         ";
			gotoxy(20,8);
			cout<<"==============================";

			number2 = 5;
			i2 = 9;

			do {
				gotoxy(20,i2);
				cout<<number2;
				number2 = number2 - 1;
				i2 = i2 + 1;
			} while (number2>0);
			gotoxy(20,14);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'C': {
			int number3, i3;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"     PRINT NUMBERS 5-1        ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"        FOR LOOP              ";
			gotoxy(20,8);
			cout<<"==============================";

			i3 = 9;

			for (number3 = 5; number3 > 0; number3--) {
				gotoxy(20, i3);
				cout << number3;
				i3 = i3 + 1;
			}
			gotoxy(20,14);
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
	}while(choice!='D' && choice!='d');
}

void loop4() { /*no args no return*/
	char choice;
	do {
	system("cls");
    gotoxy(20,4);
    cout<<"==============================";
    gotoxy(20,5);
    cout<<"   PRINT EVEN NUMBERS 5-1     ";
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
    cin>>choice;

	if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': {
			int num, i;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT EVEN NUMBERS 5-1    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         WHILE LOOP           ";
			gotoxy(20,8);
			cout<<"==============================";

			num = 5;
			i = 9;

			while (num>2) {
				num = num - 1;
					if (num%2==0) {
						gotoxy(20,i);
						cout<<num;
						i=i+1;
						}
					}
			gotoxy(20,11);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'B': {
			int num2, i2;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"   PRINT EVEN NUMBERS 5-1     ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"        DO-WHILE LOOP         ";
			gotoxy(20,8);
			cout<<"==============================";

			num2 = 5;
			i2 = 9;

			do {
				num2 = num2 - 1;
				if (num2 % 2 == 0) {
					gotoxy(20, i2);
					cout << num2;
					i2 = i2 + 1;
				}
			} while (num2 > 2);
			gotoxy(20,11);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'C': {
			int num3, i3;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT EVEN NUMBERS 5-1    ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"          FOR LOOP            ";
			gotoxy(20,8);
			cout<<"==============================";

			i3 = 9;

			for (num3 = 5; num3 >= 2; num3--) {
				if (num3 % 2 == 0) {
					gotoxy(20, i3);
					cout << num3;
					i3 = i3 + 1;
				}
			}
			gotoxy(20,11);
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
	}while(choice!='D' && choice!='d');
}

void loop5() { /*no args no return*/
	char choice;
	do {
	system("cls");
    gotoxy(20,4);
    cout<<"==============================";
    gotoxy(20,5);
    cout<<"    PRINT ODD NUMBERS 5-1     ";
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
    cin>>choice;

	if(choice>='a' && choice<='z') {
	choice = choice - 32;
    }

	switch(choice) {
		case 'A': {
			int num, i;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT ODD NUMBERS 5-1     ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         WHILE LOOP           ";
			gotoxy(20,8);
			cout<<"==============================";

			num = 5;
			i = 9;

			while (num>=1) {
				if (num%2==1) {
					gotoxy(20,i);
					cout<<num;
					i=i+1;
					}
					num = num - 1;
				}
			gotoxy(20,12);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'B': {
			int num2, i2;
			system("cls");

			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"PRINT ODD NUMBERS 5-1";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"DO-WHILE LOOP";
			gotoxy(20,8);
			cout<<"==============================";

			num2 = 5;
			i2 = 9;

			do {
				if (num2 % 2 == 1) {
					gotoxy(20, i2);
					cout << num2;
					i2 = i2 + 1;
				}
				num2 = num2 - 1;
			} while (num2 >= 1);
			gotoxy(20,12);
			cout<<"------------------------------";
			getch();
			break;
		}
		case 'C': {
			int i3;
			system("cls");
			gotoxy(20,4);
			cout<<"==============================";
			gotoxy(20,5);
			cout<<"    PRINT ODD NUMBERS 5-1     ";
			gotoxy(20,6);
			cout<<"==============================";
			gotoxy(20,7);
			cout<<"         FOR LOOP             ";
			gotoxy(20,8);
			cout<<"==============================";

			i3 = 9;

			 for (int num3 = 5; num3 >= 1; num3--) {
				if (num3 % 2 == 1) {
					gotoxy(20, i3);
					cout << num3;
					i3 = i3 + 1;
				}
			}
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
	}while(choice!='D' && choice!='d');
}

void primewhile() { /*no args no return*/
	int Num, i, c;
	system("cls");

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"  PRIME OR NOT PRIME NUMBER   ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"         WHILE LOOP           ";
	gotoxy(20,8);
	cout<<"==============================";
	i = 2;
	c = 0;

	gotoxy(20,9);
	cout<<"Enter a number: ";
	cin>>Num;
	gotoxy(20,0);
	cout<<"==============================";

	while (i<=Num) {
		if (Num%i==0) {
		c = c + 1;
		i = i + 1;
		}
		else {
		i = i + 1;
		}
	}
	if (c==1) {
	gotoxy(20,11);
	cout<<"Number is Prime";
	}

	else {
	gotoxy(20,11);
	cout<<"Number is not Prime";
	}
	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

void primedowhile() { /*no args no return*/
	int Num2, i2, c2;
	system("cls");

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"   PRIME OR NOT PRIME NUMBER  ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"         DO-WHILE LOOP        ";
	gotoxy(20,8);
	cout<<"==============================";
	i2 = 2;
	c2 = 0;

	gotoxy(20,9);
	cout<<"Enter a number: ";
	cin>>Num2;
	gotoxy(20,0);
	cout<<"==============================";

	do {
		if (Num2%i2==0) {
		c2 = c2 + 1;
		i2 = i2 + 1;
		}
		else {
		i2 = i2 + 1;
		}
	} while(i2 <= Num2);
	
	if (c2 == 1) {
	gotoxy(20,11);
	cout<<"Number is Prime";
	} else {
	gotoxy(20,11);
	cout<<"Number is not Prime";
	}
	
	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

void primefor(int Num3) { /*with args no return*/
	int c3 = 0;
	for (int i3 = 2; i3 <= Num3; i3++) {
		if (Num3 % i3 == 0) {
			c3 = c3 + 1;
		}
	}

	if (c3 == 1) {
		gotoxy(20,11);
		cout << "Number is Prime";
	} else {
		gotoxy(20,11);
		cout << "Number is not Prime";
	}

	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

void factwhile(float Num) { /*with args no return*/
	float Fact, Count;
	Fact=1;
	Count=1;	
	while (Num>=Count) {
		Fact=Fact*Count;
		Count=Count+1;
		}
	gotoxy(20,11);
	cout<<"Factorial: "<<Fact;
	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

void factdowhile() { /*no args no return*/
	float Num2, Fact2, Count2;
	system("cls");
	Fact2=1;
	Count2=1;

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"          FACTORIAL           ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"         DO-WHILE LOOP        ";
	gotoxy(20,8);
	cout<<"==============================";

	gotoxy(20,9);
	cout<<"Enter a number:";
	cin>>Num2;
	gotoxy(20,0);
	cout<<"==============================";

	do {
		Fact2 = Fact2 * Count2;
		Count2 = Count2 + 1;
	} while (Num2 >= Count2);
	
	gotoxy(20,11);
	cout<<"Factorial: "<<Fact2;
	gotoxy(20,12);
	cout<<"------------------------------";
	getch();
}

float factfor() { /* no args with return*/
	float Fact3,Num3;
	system("cls");
	Fact3=1;

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"          FACTORIAL           ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"          FOR LOOP            ";
	gotoxy(20,8);
	cout<<"==============================";

	gotoxy(20,9);
	cout<<"Enter a number:";
	cin>>Num3;
	gotoxy(20,0);
	cout<<"==============================";
	
	for (int Count3 = 1; Num3 >= Count3; Count3++) {
			Fact3 = Fact3 * Count3;
	}
	return Fact3;
}

int gcdwhile() { /*no args with return*/
	int Num1, Num2;
	system("cls");
	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"   GREATEST COMMON DIVISOR    ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"         WHILE LOOP           ";
	gotoxy(20,8);
	cout<<"==============================";

	gotoxy(20,9);
	cout<<"Input 1st number: ";
	cin>>Num1;
	gotoxy(20,0);
	cout<<"Input 2nd number: ";
	cin>>Num2;
	gotoxy(20,0);
	cout<<"==============================";
	
	while (Num1!=Num2) {
		if (Num1>Num2) {
			Num1 = Num1 - Num2;
		} else {
			Num2 = Num2 - Num1;
		}
	}
	return Num1;
}

void gcddowhile() {/*no args no return*/
	int Num3, Num4;
	system("cls");

	gotoxy(20,4);
	cout<<"==============================";
	gotoxy(20,5);
	cout<<"   GREATEST COMMON DIVISOR    ";
	gotoxy(20,6);
	cout<<"==============================";
	gotoxy(20,7);
	cout<<"       DO-WHILE LOOP          ";
	gotoxy(20,8);
	cout<<"==============================";

	gotoxy(20,9);
	cout<<"Input 1st number: ";
	cin>>Num3;
	gotoxy(20,0);
	cout<<"Input 2nd number: ";
	cin>>Num4;
	gotoxy(20,0);
	cout<<"==============================";

	 do {
		if (Num3 > Num4) {
			Num3 = Num3 - Num4;
		} else {
			Num4 = Num4 - Num3;
		}
	} while (Num3 != Num4);
		gotoxy(20, 12);
		cout << "Greatest Common Divisor: " << Num3;

	gotoxy(20,13);
	cout<<"------------------------------";
	getch();
}

int gcdfor(int Num5, int Num6) { /*with args with return*/
	for (; Num5 != Num6;) {
		if (Num5 > Num6) {
			Num5 = Num5 - Num6;
		} else {
			Num6 = Num6 - Num5;
		}
	}
	return Num5;
}

//with args no return
void input(int arr1d[], int size) {
	int i;
	for(i=0; i<size; i++) {
		if (i % 24 == 0 && i != 0) {
			system("cls");
			gotoxy (0,0);
			cout<<"Element "<<i+1<<": ";
			cin>>arr1d[i];
		}
		else {
			cout<<"Element "<<i+1<<": ";
			cin>>arr1d[i];
		}
	}
	getch();
}//end input function

//with args no return
void display(int arr1d[], int size) {
	int i;
	cout<<'{';
	for (i=0; i<size; i++) {
		if (i==size-1)
			cout << arr1d[i];
		else
			cout << arr1d[i] << ", ";
	}
	cout<<'}';
	getch();
}//end display function

//with args with return
int sumofelements(int arr1d[], int size) {
	system("cls");
	int i, sum = 0;
	for(i = 0; i<size; i++) {
		sum = sum+arr1d[i];
	}
	return sum;
}//end sumofelements function

//with args with return
int sumnegative(int arr1d[], int size) {
	system("cls");
	int i, nsum = 0;
	for(i = 0; i<size; i++) {
		if(arr1d[i]<0) {
			nsum = nsum + arr1d[i];
		}
	}
	return nsum;
}//end sumnegative function

//with args no return
void maxnmin(int arr1d[], int size) {
	system("cls");
	int i, smindex = 0, lgindex = 0;
	int smal = arr1d[0];
	int larg = arr1d[0];
	display(arr1d, size);
	for(i = 0; i<size; i++) {
		if(arr1d[i]>larg) {
			larg = arr1d[i];
			lgindex = i;
		} if(arr1d[i]<smal) {
			smal = arr1d[i];
			smindex = i;
		}
	}
	cout<<"\n\nLowest Value = "<<smal<<", can be found in index "<<smindex<<endl;
	cout<<"Highest Value = "<<larg<<", can be found in index "<<lgindex<<endl;
	getch();
}//end maxnmin function

//with args with return
int occurence(int arr1d[], int size, int num) {
	int i, sum = 0;
	for(i = 0; i<size; i++) {
		if(arr1d[i] == num) {
			sum = sum + 1;
		}
	}
	return sum;
}//end occurence function

//with args no return
void reverse(int arr1d[], int size) {
	int i;
	system("cls");
	cout<<"Original array: ";
	for(i=0; i<size; i++) {
		if(i<size-1)
			cout<<arr1d[i]<<", ";
		else
			cout<<arr1d[i]<<endl;
	}
	cout<<"Reversed array: ";
	for(i=size-1; i>=0; i--) {
		if(i>0)
			cout<<arr1d[i]<<", ";
		else
			cout<<arr1d[i]<<endl;
	}
	getch();
}//end reversing function

//with args with return
int seclargest(int arr1d[], int size) {
	int first, second, third; 
	int i;
	third = first = second = INT_MIN;
	for (i = 0; i < size; i++) {
		if (arr1d[i] > first) {
			second = first;
			third = second;
			first = arr1d[i];
		}
		else if (arr1d[i] > second && arr1d[i] != first) {
			third = first;
			second = arr1d[i];
		}
		else if (arr1d[i] > third && arr1d[i] != second && arr1d[i] != first) {
			third = arr1d[i];
		}
	}
	return second;
}//end seclargest function

//with args no return
void copied(int array1d2[], int arr1d[], int size) {
	int i;
	for(i = 0; i<size; i++) {
		array1d2[i] = arr1d[i];
	}
}//end copied function 

//with args with return
int search(int originalArr5d[], int size, int num) {
	int first = 0;
	int last = (size-1);
	int middle = (first+last)/2;
	
	while(first<=last) {
		middle = (first + last) / 2;
		if(originalArr5d[middle]<num)
			first = middle+1;
		else if(originalArr5d[middle]==num) {
			return middle;
		} else
			last = middle-1;
	}
	return -1;
}// end search function

//with args no return
void bubble(int originalArr1d[], int size) {
	int i, j, temp;

	for(i = 0; i<size; i++) {
		for(j = i + 1; j<size; j++) {
			if(originalArr1d[j] < originalArr1d[i]) {
				temp = originalArr1d[i];
				originalArr1d[i] = originalArr1d[j];
				originalArr1d[j] = temp;
			}
		}
	}
}//end bubble function

//with args no return
void insertion(int originalArr21d[], int size) {
	int i, j, num, temp;

	for(i = 1; i<=size-1; i++) {
		temp = originalArr21d[i];
		j = i - 1;
		while((temp<originalArr21d[j])&&(j>=0)) {
			originalArr21d[j+1] = originalArr21d[j];
			j = j - 1;
		}
		originalArr21d[j+1] = temp;
	}
}//end insertion function

//with args no return
void select(int originalArr31d[], int size) {
	int i, j, P, temp, min;

	for(i = 0; i<size-1; i++) {
		min = originalArr31d[i];
		P = i;
		for(j = i + 1; j<size; j++) {
			if(min>originalArr31d[j]) {
				min = originalArr31d[j];
				P = j;
			}
		}
		temp = originalArr31d[i];
		originalArr31d[i] = originalArr31d[P];
		originalArr31d[P] = temp;
	}
}//end select function

void multinp(int arrmulti[], int size) {
	int i;

	if(size<=1)
		return;

	int prev_element = arrmulti[0];
	arrmulti[0] = arrmulti[0] * arrmulti[1];

	for(i = 1; i<size - 1; i++) {
		int curr_element = arrmulti[i];
		arrmulti[i] = prev_element * arrmulti[i+1];
		prev_element = curr_element;
	}
	arrmulti[size - 1] = prev_element * arrmulti[size - 1];
}

void vowelelem(char letter[], int size) {
	int i, j, vowel = 0;
	for(i=0; i<size; i++) {
		if (i % 24 == 0 && i != 0) {
			gotoxy (0,0);
			cout<<"Element "<<i+1<<": ";
			cin>>letter[i];
		}
		else {
			cout<<"Element "<<i+1<<": ";
			cin>>letter[i];
		}
	}
	cout<<"\n\n";
	cout<<'{';
	for (i=0; i<size; i++) {
		if (i==size-1)
			cout << letter[i];
		else
			cout << letter[i] << ", ";
	}
	cout<<'}';
	for(i = 0; i<size; i++) {
		if(letter[i]=='a' || letter[i]=='A')
			vowel++;
		if(letter[i]=='e' || letter[i]=='E')
			vowel++;
		if(letter[i]=='i' || letter[i]=='I')
			vowel++;
		if(letter[i]=='o' || letter[i]=='O')
			vowel++;
		if(letter[i]=='u' || letter[i]=='U')
			vowel++;
	}
	cout<<"\nThe vowel is = "<<vowel;
}

int smallmissing(int originalArr19d[], int spos, int epos) {
	if(spos>epos) {
		return epos + 1;
	}

	if(spos != originalArr19d[spos]) {
		return spos;
	}

	int mid = (spos + epos) / 2;

	if(originalArr19d[mid]==mid) {
		return smallmissing(originalArr19d, mid+1, epos);
	}
	return smallmissing(originalArr19d, spos, mid);
}

int absolutediff(int a, int b, int value) {
    if (abs(a - value) > abs(b - value))
        return 1;
    else
        return 0;
}

int oddoccurrence(int arr1d[], int size) {
	int i, j;
	for(i = 0; i<size; i++) {
		int count = 0;
		for(j = 0; j<size; j++) {
			if(arr1d[i] == arr1d[j])
				count++;
		}
		if(count%2!=0)
			return arr1d[i];
	}
	return -1;
}

//with args no return
void input(int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm;
	system("cls");
	for(rw=0; rw<rwsize; rw++) {
		for(clm=0; clm<clmsize; clm++) {
      if (rw*clm == 25) {
        system("cls");
        gotoxy(0,0);
        cout<<"Index ["<<rw<<"]["<<clm<<"]: ";
			  cin>>arr2d[rw][clm];
      }
      else {
        cout<<"Index ["<<rw<<"]["<<clm<<"]: ";
			  cin>>arr2d[rw][clm];
      }
    }
  }
  getch();
}//end input function

//with args no return
void display(int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm;
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
}//end display function

// with args with return
int sumofelements(int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm, sum = 0;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			sum = sum + arr2d[rw][clm];
		}
	}
	return sum;
}//end sumofelements function

//with args with return
int sumofnegelements(int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm, nsum = 0;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			if(arr2d[rw][clm]<0) {
				nsum = nsum + arr2d[rw][clm];
			}
		}
	}
	return nsum;
}//end sumofnegelements function

//with args no return
void maxnmin(int arr2d[][100], int rwsize, int clmsize) {
	system("cls");
	int rw, clm;
	int i, lgindexcolumn = 0, lgindexrow = 0, smindexrow = 0, smindexcolumn = 0;
	int smal = arr2d[0][0];
	int larg = arr2d[0][0];
	display(arr2d, rwsize, clmsize);
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			if(arr2d[rw][clm]>larg) {
				larg = arr2d[rw][clm];
				lgindexrow = rw;
				lgindexcolumn = clm;
			} if(arr2d[rw][clm]<smal) {
				smal = arr2d[rw][clm];
				smindexrow= rw;
				smindexcolumn = clm;
			}
		}
	}
	cout<<"\n\nLowest Value = "<<smal<<" can be found in index["<<smindexrow<<"]"<<"["<<smindexcolumn<<"]"<<endl;
	cout<<"Highest Value = "<<larg<<" can be found in index["<<lgindexrow<<"]"<<"["<<lgindexcolumn<<"]"<<endl;
	getch();
}//end maxnmin function

//with args with return
int occurence(int arr2d[][100], int rwsize, int clmsize, int numb) {
	int sum = 0, rw, clm;
	for (rw = 0; rw <rwsize; rw++) {
		for (clm = 0; clm <clmsize; clm++) {
			if (arr2d[rw][clm] == numb) {
				sum = sum + 1;
			}
		}
	}
	return sum;
}//end occurrence function

//with args no return
void sumdiagonal(int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm;
	int sum = 0, asum = 0;
	system("cls");
	display(arr2d, rwsize, clmsize);
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			if(rw==clm) {
				sum = sum + arr2d[rw][clm];
			}
		}
	}
	rw = 0;
	for (clm = clmsize-1; clm>=0; clm--) {
		asum = asum + arr2d[rw][clm];
		rw++;
	}
	cout<<"\n\nSum of Main Diagonal = " << sum << endl;
	cout<<"Sum of Alternate Diagonal = " << asum << endl;
}//end sumdiagonal function

//with args with return
int seclargest(int arr2d[][100], int rwsize, int clmsize) {
	int first, second, third;
	int rw, clm;
	third = first = second = INT_MIN;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			if(arr2d[rw][clm] > first) {
				second = first;
				third = second;
				first = arr2d[rw][clm];
			} else if(arr2d[rw][clm] > second && arr2d[rw][clm] != first) {
				third = first;
				second = arr2d[rw][clm];
			} else if(arr2d[rw][clm] > third && arr2d[rw][clm] != second && arr2d[rw][clm] != first) {
				third = arr2d[rw][clm];
			}
		}
	}
	return second;
}//end seclargest function

//with args no return
void copied(int array2d2[][100], int arr2d[][100], int rwsize, int clmsize) {
	int rw, clm;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			array2d2[rw][clm] = arr2d[rw][clm];
		}
	}
}//end copied function

//with args with return
int search(int originalArr42d[][100], int rwsize, int clmsize, int num) {
	int first = 0;
	int last = rwsize*clmsize - 1;
	int middle;
	while(first<=last) {
		middle = (first + last) / 2;
	int middleRow = middle / clmsize;
	int middleCol = middle % clmsize;
	if (originalArr42d[middleRow][middleCol] < num)
	    first = middle + 1;
	else if (originalArr42d[middleRow][middleCol] == num)
	    return middle;
	else
	    last = middle - 1;
    }
    return -1;
}//end search function

//with args no return
void bubble(int originalArr2d[][100], int rwsize, int clmsize) {
	int rw, clm, j, temp;
	for (rw = 0; rw < rwsize * clmsize - 1; rw++) {
		for (clm = 0; clm < rwsize * clmsize - rw - 1; clm++) {
			if (originalArr2d[clm / clmsize][clm % clmsize] > originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize]) {
				temp = originalArr2d[clm / clmsize][clm % clmsize];
				originalArr2d[clm / clmsize][clm % clmsize] = originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize];
				originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize] = temp;
			}
		}
	}
	for (rw = 0; rw < rwsize * clmsize - 1; rw++) {
		for (clm = 0; clm < rwsize * clmsize - rw - 1; clm++) {
			if (originalArr2d[clm / clmsize][clm % clmsize] > originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize]) {
				temp = originalArr2d[clm / clmsize][clm % clmsize];
				originalArr2d[clm / clmsize][clm % clmsize] = originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize];
				originalArr2d[(clm + 1) / clmsize][(clm + 1) % clmsize] = temp;
			}
		}
	}
}//end bubble function

//with args no return
void insertion(int originalArr22d[][100], int rwsize, int clmsize) {
	int k, flatarr2d[100], i, rw, clm, j, temp;
	k = 0;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			flatarr2d[k++] = originalArr22d[rw][clm];
		}
	}
	for(i = 1; i < rwsize * clmsize; i++) {
			temp = flatarr2d[i];
			j = i - 1;
			while(temp<flatarr2d[j]&&j>=0) {
				flatarr2d[j+1] = flatarr2d[j];
				j = j - 1;
			}
			flatarr2d[j + 1] = temp;
		}
	k = 0;
	for(rw = 0; rw<rwsize; rw++) {
		for(clm = 0; clm<clmsize; clm++) {
			originalArr22d[rw][clm] = flatarr2d[k++];
		}
	}
}//end insertion function

//with args no return
void select(int originalArr32d[][100], int rwsize, int clmsize) {
	int rw, clm, i, j, P, temp, min;
	int totalelements = rwsize*clmsize;
	for(i = 0; i<totalelements - 1; i++) {
			min = originalArr32d[i / rwsize][i % rwsize];
			P = i;
			for(j = i + 1; j<totalelements; j++) {
				int rw1 = j / clmsize;
				int clm1 = j % clmsize;
					if(min>originalArr32d[rw1][clm1]) {
						min = originalArr32d[rw1][clm1];
						P = j;
					}
			}
			temp = originalArr32d[i / rwsize][i % clmsize];
			originalArr32d[i / rwsize][i % clmsize] = originalArr32d[P / rwsize][P % clmsize];
			originalArr32d[P / rwsize][P % clmsize] = temp;
		}
}//end select function

//with args no return
void reversediagonal(int originalArr52d[][100], int rwsize) {
	int rw, temp;
	for(rw = 0; rw<rwsize / 2; rw++) {
		temp = originalArr52d[rw][rw];
		originalArr52d[rw][rw] = originalArr52d[rwsize - 1 - rw][rwsize - 1 - rw];
		originalArr52d[rwsize - 1 - rw][rwsize - 1 - rw] = temp;
	}
}//end reversediagonal function

//with args no return
void sumrwclm(int arr2d[][100], int rwsize, int clmsize) {
	system("cls");
	int rw, clm;
	int rowSum, colSum;
	cout<<"Original Array: "<<endl;
	display(arr2d, rwsize, clmsize); 
	cout<<"\n\nSum of Rows: "<<endl;
    for (rw = 0; rw<rwsize; rw++) {
		rowSum = 0;
	for (clm = 0; clm<clmsize; clm++) {
	    rowSum = rowSum + arr2d[rw][clm];
	}
		cout << "Row " << rw + 1 << ": " << rowSum << endl;
		}
	cout<<"\nSum of Columns: "<<endl;
    for (clm = 0; clm<clmsize; clm++) {
		colSum = 0;
	for (rw = 0; rw<rwsize; rw++) {
	    colSum = colSum + arr2d[rw][clm];
	}
		cout << "Column " << clm + 1 << ": " << colSum << endl;
		}
	getch();
}//end sumrwclm function

void multiplication (int multi[][100], int rwsize, int clmsize) {
	int i, j;
	for(i = 0; i<rwsize; i++) {
		for(j = 0; j<clmsize; j++) {
			multi[i][j] = (i+1)*(j+1);
		}
	}
}

void bsortDesc(int originalArr62d[][100], int rwsize, int clmsize) {
	int rw, clm, j, temp;

	for (rw = 0; rw < rwsize * clmsize - 1; rw++) {
				for (clm = 0; clm < rwsize * clmsize - rw - 1; clm++) {
					if (originalArr62d[clm / clmsize][clm % clmsize] < originalArr62d[(clm + 1) / clmsize][(clm + 1) % clmsize]) {
						temp = originalArr62d[clm / clmsize][clm % clmsize];
						originalArr62d[clm / clmsize][clm % clmsize] = originalArr62d[(clm + 1) / clmsize][(clm + 1) % clmsize];
						originalArr62d[(clm + 1) / clmsize][(clm + 1) % clmsize] = temp;
					}
				}
			}
}

//with args no return
void convertSeconds(int totalSeconds, int &hours, int &minutes, int &seconds) {
    hours = totalSeconds / 3600;      
    totalSeconds %= 3600;               
    minutes = totalSeconds / 60;        
    seconds = totalSeconds % 60; 
}//end of convert function

//with args with return
float areaOfTriangle(float side1, float side2, float side3) {
    float s = (side1 + side2 + side3) / 2;
    float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}//end of areatriangle function

//with args with return
int calculateThirdAngle(int angle1, int angle2) {
    int angle3 = 180 - angle1 - angle2;
    return angle3;
}//end of calculatethirdangle function

//with args with return
float kph_to_mph(float kph) {
    const float miles_per_km = 0.621371f;
    return kph * miles_per_km;
}//end of kphtomph function

//with args with return
double calculateCompoundInterest(double P, double T, double R) {
    double amount = P * pow((1 + R / 100), T);
    double compoundInterest = amount - P;
    return compoundInterest;
}//end of calculateinterest function

//with args with return
float calculateArea(float n, float s) {
    return (n * (s * s)) / (4.0 * tan(M_PI / n));
}//end of calculatearea function

//with args with return
float calculateSphere(int radius) {
    const float PI = 3.14; 
    return (4.0 / 3.0) * PI * radius * radius * radius; 
}//end of calculatesphere function

//with args with return
float calculateCube(int side) {
    return side * side * side; 
}//end of calculatecube function

// with args with return
int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1; 
    }
    if (year % 100 == 0) {
        return 0; 
    }
    if (year % 4 == 0) {
        return 1; 
    }
    return 0; 
}//end of leapyear function

//with args with return
int abso(int n) {
    const int x = 51;

    if (n > x) 
    {
        return (n - x) * 3; 
    }
    return x - n; 
}//end of abso function

//with args with return
int truth(int x, int y) {
    return x == 30 || y == 30 || (x + y == 30); 
}//end of truth function

//with args with return
int within10(int number) {
    int diff100 = number - 100;
    if (diff100 < 0) {
        diff100 = -diff100;
    }

    int diff200 = number - 200;
    if (diff200 < 0) {
        diff200 = -diff200;
    }

    if (diff100 <= 10 || diff200 <= 10) {
        return 1;
    } else {
        return 0;
    }
}//end of within10 function

//with args with return
int tempcheck(int temp1, int temp2) {
    return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
}//end of tempcheck function

//with args with return
int range(int x, int y, int z) {
    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}//end of range function 

//with args with return
int rangehundred(int x, int y) {
    return (x >= 100 && x <= 200) || (y >= 100 && y <= 200);
}//end of rangehundred function

//with args with return
int check(int x, int y) {
    if (x >= 20 && x <= 30 && y >= 20 && y <= 30)
    {
        if (x >= y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
    else if (x >= 20 && y <= 30)
    {
        return x; 
    }
    else if (y >= 20 && y <= 30)
    {
        return y; 
    }
    else
    {
        return 0;
    }
}//end of check function

//with args with return
void checkOrthogonal(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    // Calculate vectors AB and CD
    double vectorAB_x = x2 - x1;
    double vectorAB_y = y2 - y1;
    double vectorCD_x = x4 - x3;
    double vectorCD_y = y4 - y3;

    if (vectorAB_x * vectorCD_x + vectorAB_y * vectorCD_y == 0) {
		gotoxy(20,11);
        cout << "Yes" << endl; 
    } else {
		gotoxy(20,11);
        cout << "No" << endl; 
    }
}//end of checkorthogonal function

//with args with return
int forty(int x, int y) {
    return (x >= 40 && x <= 50 && y >= 40 && y <= 50) || (x >= 50 && x <= 60 && y >= 50 && y <= 60);
}//end of forty function

//with args with return
int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for(int i = 1; i <= n; ++i) {
		sum += i;
    }
    return sum;
}//end of sumnumbers function 

//with args no return
int displayAndSumNaturalNumbers(int n) {
	int n2sum = 0;
    for (int i = 1; i <= n; i++) {
        n2sum += i;
    }
    return n2sum;
}//end of sumnnumbers function 

//with args with return
int isPerfect(int num) {
    int sum = 0;
	int i;
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}//end of perfect function

//for lastprimebefore function
//with args with return
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
	    return 0;
    }
    return 1;
}//end of isprime function

// with args with return
int lastPrimeBefore(int num) {
    if (num <= 2) return -1;  
    for (int i = num - 1; i >= 2; --i) {
        if (isPrime(i))
            return i;
    }
    return -1;  
}//end of lastprimebefore function

//with args with return
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;  
        number /= 10;         
    }
    return sum;
}//end of sumofdigits function

//for sumseries function
//with args with return
double power(double base, double exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}//end of power function

//with args with return
double sumSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / power(i, i);
    }
    return sum;
}//end of sumseries function

//with args with return
int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }
    return sum;
}//end of sumofsquares function 

//with args no return
void printMultiplicationTable(int number) {
    int ctr = 8;
	gotoxy(20,4);
	cout<<"              MULTIPLICATION TABLE                ";
	gotoxy(20,5);
	cout<<"==================================================";
	gotoxy(20,6);
	cout<<"Input a number: ";
	cin>>number;
	gotoxy(20,0);
	cout<<"==================================================";
    for (int i = 1; i <= 10; i++) 
    {
		gotoxy(20,ctr);
        cout << number << " x " << i << " = " << number * i;
		ctr++;
    }
}//end of printmultiplicationtable function

//with args with return
long long addBinary(long long bn1, long long bn2) {
    int i = 0, r = 0; 
    int sum[20]; 
    while (bn1 != 0 || bn2 != 0) {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10; 
        bn2 = bn2 / 10; 
    }
    if (r != 0) { 
        sum[i++] = r;
    }
    long long result = 0;
    for (int j = i - 1; j >= 0; j--) {
        result += sum[j] * pow(10, j);
    }
    return result;
}//end of addbinary function

//with args with return
int calculateSeriesSum(int n) {
    int sum = 0; 
    int t = 1; 
    for (int i = 1; i <= n; i++) {
        sum = sum + t; 
        t = (t * 10) + 1; 
    }
    return sum; 
}//end of calculateseriessum function

//with args no return
void input2(int arr1d2[], int size2) {
	int i;
	for(i=0; i<size2; i++) {
		if (i % 24 == 0 && i != 0) {
			system("cls");
			gotoxy (0,0);
			cout<<"Element "<<i+1<<": ";
			cin>>arr1d2[i];
		}
		else {
			cout<<"Element "<<i+1<<": ";
			cin>>arr1d2[i];
		}
	}
	getch();
}//end input2 function

//with args no return
void display2(int arr1d2[], int size2) {
	int i;
	cout<<'{';
	for (i=0; i<size2; i++) {
		if (i==size2-1)
			cout << arr1d2[i];
		else
			cout << arr1d2[i] << ", ";
	}
	cout<<'}';
	getch();
}//end display2 function

//with args no return
void findKLargest(int arr1d2[], int size2, int k) {
    int i, j;
    for (i = 0; i < k; i++) {
        int max_idx = i;
	for (j = i + 1; j < size2; j++)
            if (arr1d2[j] > arr1d2[max_idx])
                max_idx = j;

        int temp = arr1d2[max_idx];
        arr1d2[max_idx] = arr1d2[i];
        arr1d2[i] = temp;
    }
    cout<<"\nLargest "<<k<<" Elements: ";
    cout<<'{';
	for (i=0; i<k; i++) {
		if (i==k-1)
			cout << arr1d2[i];
		else
			cout << arr1d2[i] << ", ";
	}
	cout<<'}';
}//end of findklargest function

//with args no return
void twosigni(int arr1d2[], int size2) {
    cout<<"\n\nElements which have at-least two greater elements: ";
    for (int i = 0; i < size2; i++) {
        int count = 0;
        for (int j = 0; j < size2; j++) {
            if (arr1d2[j] > arr1d2[i]) {
                count++;
            }
        }
        if (count >= 2) {
	    	cout << arr1d2[i] << " ";
        }
    }
}//end of twosignifant function

//for zigzag function
//with args no return
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}//end of swap function

//with args no return
void zigzag(int arr1d2[], int size2) {
    int flag = 1;
    for (int i = 0; i < size2 - 1; ++i) {
        if (flag) { 
            if (arr1d2[i] > arr1d2[i + 1])
                swap(arr1d2[i], arr1d2[i + 1]);
        } else { 
            if (arr1d2[i] < arr1d2[i + 1])
                swap(arr1d2[i], arr1d2[i + 1]);
        }
        flag = 1 - flag; 
    }
}//end of zigzag function

//for function segregateEvenOdd
//with args no return 
void swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//with args no return
void segregateEvenOdd(int nums[], int size2) {
    int left_num = 0, right_num = size2 - 1; 
    while (left_num < right_num) { 
        while (nums[left_num] % 2 == 0 && left_num < right_num)
            left_num++;

        while (nums[right_num] % 2 == 1 && left_num < right_num)
            right_num--;

        if (left_num < right_num) {
            swap2(&nums[left_num], &nums[right_num]); 
            left_num++; 
            right_num--; 
        }
    }
}//end of segregateevenodd function

//for sumEqualToLargest function
//with args no return
void sortArray(int arr1d2[], int size2) {
    for (int i = 0; i < size2 - 1; ++i) {
        for (int j = 0; j < size2 - i - 1; ++j) {
            if (arr1d2[j] > arr1d2[j + 1]) {
                int temp = arr1d2[j];
                arr1d2[j] = arr1d2[j + 1];
                arr1d2[j + 1] = temp;
            }
        }
    }
}//end of sortarray function

//with args with return
int sumEqualToLargest(int arr1d2[], int size2) {
    if (size2 < 2) {
        return 0;  
    }
    sortArray(arr1d2, size2);
    int largest = arr1d2[size2 - 1];
    int sum = 0;
    for (int i = 0; i < size2 - 1; ++i) {
        sum += arr1d2[i];
    }
    if (sum == largest)
        return 1;  
    else
        return 0;  
}//end of sumEqualToLargest function

//with args no return
void findPairs(int arr1d2[], int size2, int targetSum) {
    int i, j, count = 0, ctr = 6;
	cout<<"Original Array: "<<endl;
	display2(arr1d2, size2);
	cout<<"\nEnter the target sum: ";
    cin>> targetSum;
    for (i = 0; i < size2; i++) {
        for (j = i + 1; j < size2; j++) {
            if (arr1d2[i] + arr1d2[j] == targetSum) {
                cout <<  arr1d2[i] << "," << arr1d2[j];
				ctr++;
                count++;
            }
        }
    }
    cout<<"\n\nNumber of pairs whose sum equals " << targetSum << ": " << count;
}//end of findpairs function

//with args no return
void input3(int arr2d2[][100], int rwsize2, int clmsize2) {
	int rw, clm;
	system("cls");
	for(rw=0; rw<rwsize2; rw++) {
		for(clm=0; clm<clmsize2; clm++) {
      if (rw*clm == 25) {
        system("cls");
        gotoxy(0,0);
        cout<<"Index ["<<rw<<"]["<<clm<<"]: ";
			  cin>>arr2d2[rw][clm];
      }
      else {
        cout<<"Index ["<<rw<<"]["<<clm<<"]: ";
			  cin>>arr2d2[rw][clm];
      }
    }
  }
  getch();
}//end input function

//with args no return
void display3(int arr2d2[][100], int rwsize2, int clmsize2) {
	int rw, clm;
	cout<<'{';
	for (rw=0; rw<rwsize2; rw++) {
		cout<<"{";
		for (clm=0; clm<clmsize2; clm++) {
		if (clm==clmsize2-1) {
			if (rw==rwsize2-1) {
			cout<<arr2d2[rw][clm]<<"}";
			}
			else 
			cout<<arr2d2[rw][clm]<<"},"<<endl<<" ";
		}
		else
			cout<<arr2d2[rw][clm]<<", ";
		}
		if (rw==rwsize2-1)
		cout<<"}";
	}
	getch();
}//end display function

//with args with return
int isMagicSquare(int arr2d2[][100], int rwsize2, int clmsize2) {
	int i, j;
    if (rwsize2 != clmsize2) return 0;
    int sum = 0, sum2 = 0;
    for (j = 0; j < clmsize2; j++) {
        sum += arr2d2[0][j];
    }
    for (i = 1; i < rwsize2; i++) {
        sum2 = 0;
        for (int j = 0; j < clmsize2; j++) {
	    sum2 += arr2d2[i][j];
        }
        if (sum2 != sum) {
            return 0;
        }
    }
    for (j = 0; j < clmsize2; j++) {
        sum2 = 0;
        for (int i = 0; i < rwsize2; i++) {
            sum2 += arr2d2[i][j];
        }
        if (sum2 != sum) {
            return 0;
        }
    }
    sum2 = 0;
    for (i = 0; i < rwsize2; i++) {
        sum2 += arr2d2[i][i];
    }
    if (sum2 != sum) {
        return 0;
    }
    sum2 = 0;
    for (i = 0; i < rwsize2; i++) {
        sum2 += arr2d2[i][clmsize2 - 1 - i];
    }
    if (sum2 != sum) {
        return 0;
    }
    return 1;
}//end magicsquare function

//with args no return
void findKLargest2(int arr2d2[][100], int rwsize2, int clmsize2, int k) {
    int i, j;
    int flatArray[10000];
    int index = 0;
    for (i = 0; i < rwsize2; i++) {
        for (j = 0; j < clmsize2; j++) {
            flatArray[index++] = arr2d2[i][j];
        }
    }
    for (i = 0; i < k; i++) {
        int max_idx = i;
        for (j = i + 1; j < rwsize2 * clmsize2; j++) {
            if (flatArray[j] > flatArray[max_idx]) {
                max_idx = j;
            }
        }
        int temp = flatArray[max_idx];
        flatArray[max_idx] = flatArray[i];
        flatArray[i] = temp;
    }
    cout <<"\nLargest " << k << " Elements: ";
    cout<<'{';
	for (i=0; i<k; i++) {
		if (i==k-1)
			cout << flatArray[i];
		else
			cout << flatArray[i] << ", ";
	}
	cout<<'}';
	getch();
}//end of  findklarge function 

//with args no return
void twosigni2(int arr2d2[][100], int rwsize2, int clmsize2) {
    cout << "\n\nElements which have at-least two greater elements: ";
    for (int rw = 0; rw < rwsize2; rw++) {
        for (int clm = 0; clm < clmsize2; clm++) {
            int count = 0;
            for (int j = 0; j < rwsize2; j++) {
                for (int k = 0; k < clmsize2; k++) {
                    if (arr2d2[j][k] > arr2d2[rw][clm]) {
                        count++;
                    }
                }
            }
            if (count >= 2) {
                cout<<arr2d2[rw][clm]<<" ";
            }
        }
    }
	getch();
}//end of twosigni2 function 

//for zigzag2 function
//with args no return
void swap12(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}//end of swap12 function

//with args no return
void zigzag2(int arr2d2[][100], int rwsize2, int clmsize2) {
    for (int rw = 0; rw < rwsize2; ++rw) {
        // Toggle flag for zigzag pattern
        int flag = 1;
        for (int clm = 0; clm < clmsize2 - 1; ++clm) {
            if (flag) {
                if (arr2d2[rw][clm] > arr2d2[rw][clm + 1])
                    swap12(arr2d2[rw][clm], arr2d2[rw][clm + 1]);
            } else {
                if (arr2d2[rw][clm] < arr2d2[rw][clm + 1])
                    swap12(arr2d2[rw][clm], arr2d2[rw][clm + 1]);
            }
            flag = 1 - flag;
        }
    }
}//end of zigzag2 function

//for segregateevenodd function
//with args no return
void swap22(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}//end of swap22 function

//with args no return
void segregateEvenOdd2(int nums2[][100], int rwsize2, int clmsize2) {
    int left_num = 0, right_num = rwsize2 * clmsize2 - 1;
    while (left_num < right_num) {
        while (nums2[left_num / clmsize2][left_num % clmsize2] % 2 == 0 && left_num < right_num)
            left_num++;

        while (nums2[right_num / clmsize2][right_num % clmsize2] % 2 == 1 && left_num < right_num)
            right_num--;

        if (left_num < right_num) {
            swap2(&nums2[left_num / clmsize2][left_num % clmsize2], &nums2[right_num / clmsize2][right_num % clmsize2]);
            left_num++;
            right_num--;
        }
    }
}//end of segregateevenodd function

//for sumEqualToLargest2 function
//with args no return
void sortArray2(int arr2d2[][100], int rwsize2, int clmsize2) {
    for (int rw = 0; rw < rwsize2; ++rw) {
        for (int clm = 0; clm < clmsize2; ++clm) {
            for (int i = 0; i < clmsize2 - 1; ++i) {
                for (int j = 0; j < clmsize2 - i - 1; ++j) {
                    if (arr2d2[rw][j] > arr2d2[rw][j + 1]) {
                        int temp = arr2d2[rw][j];
                        arr2d2[rw][j] = arr2d2[rw][j + 1];
                        arr2d2[rw][j + 1] = temp;
                    }
                }
            }
        }
    }
}//end of sortarray2 function

//with args with return
int sumEqualToLargest2(int arr2d2[][100], int rwsize2, int clmsize2) {
	if (rwsize2 < 2) {
        return 0;  
    }
    sortArray2(arr2d2, rwsize2, clmsize2);
    for (int rw = 0; rw < rwsize2; ++rw) {
        for (int clm = 0; clm < clmsize2; ++clm) {
            int largest = arr2d2[rw][clmsize2 - 1];
            int sum = 0;
            for (int i = 0; i < clmsize2 - 1; ++i) {
                sum += arr2d2[rw][i];
            }
            if (sum == largest)
                return 1;  
        }
    }
    return 0;  
}//end of sumequaltolargest2 function

//with args no return
void findPairs2(int arr2d2[][100], int rwsize2, int clmsize2, int targetSum2) {
    int rw, clm, rw2, clm2, count2 = 0, ctr = 6;
	cout<<"Original Array: "<<endl;
	display3(arr2d2, rwsize2, clmsize2);
    cout << "\n\nEnter the target sum: ";
    cin >> targetSum2;
    for (rw = 0; rw < rwsize2; rw++) {
        for (clm = 0; clm < clmsize2; clm++) {
            for (rw2 = rw; rw2 < rwsize2; rw2++) {
                for (clm2 = (rw2 == rw) ? (clm + 1) : 0; clm2 < clmsize2; clm2++) {
                    if (arr2d2[rw][clm] + arr2d2[rw2][clm2] == targetSum2) {
                        cout << "\n(" << arr2d2[rw][clm] << ", " << arr2d2[rw2][clm2] << ") ";
                        count2++;
                    }
                }
            }
        }
    }
    cout << "\nNumber of pairs whose sum equals " << targetSum2 << ": " << count2;
}//end of findpairs2 function

#endif