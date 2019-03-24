/*
Copyright 2019 BND Studio : DDF for C++ port
Early but stable version , it's another option to use DDF
Import Headfile :
	#include <song8448.h> 
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <Windows.h>

#define inf 10000000000
#define all -1

typedef long long lld;

const int mv=-10086,lyric=10086;

van(int computer_num) {
	if(computer_num==-1) {
		system("net start");
		system("net share");
		system("net user");
	}
	else
		system("net config");
	printf("Done.\n");
}

hop(int var) {
	if(var==lyric) {
		printf("lover lover f**ker f**ker lover");	getchar();
		printf("Мило , обичаш ли ме още?");	getchar();
		printf("Бейби , събличаш ли ме нощем?");	getchar();
		printf("Карай бавно няма да бързаш.");	getchar();
		printf("Как ще стане много мърдаш!");	getchar();
		printf("Хоп, и влиза малко по малко.");	getchar();
		printf("Хоп, движи се бавно и бавно.");	getchar();
		printf("Хоп, и вкарай го точно сега.");	getchar();
		printf("Ритъма на любовта! ");	getchar();
		printf("Хоп, и влиза малко по малко.");	getchar();
		printf("Хоп, движи се бавно и бавно.");	getchar();
		printf("Хоп, и вкарай го точно сега.");	getchar();
		printf("Ритъма на любовта! ");	getchar();
		printf("Хоп");	getchar();
	}
	else if(var==mv) 
		system("explorer \"https://www.bilibili.com/av170001\"");
	else
		printf("Error, that command cannot compile\n");
}

AssWeCan(int year,int month,int day) {
	if((year==2018&&month<=3)||year<2018||month>12||day>31)
		printf("Error, wrong date\n");
	printf("Today's date is: %d/%d/%d\n",year,month,day);
	if(month==3)
		printf("Our king of philosophie's dead month, RIP\n");
	int ly=0,lm=0;
	ly=year-2018;
	if(month>3)
		lm=15-month;
	else if(month<=3)
		lm=3-month;
	printf("%d year(s) and %d month(s) after Billy's death\n",ly,lm);
}

fuckJY() {
	system("taskkill /im studentmain.exe /f");
	printf("Yes,JYDZJS is now fuck over.\n");
}

//to be continued

/*
DDF for C++ HeadFiles at Github
Github @KonjacOfA-Only
https://github.com/KonjacOfA-Only/DDF-cpp/releases
*/ 
