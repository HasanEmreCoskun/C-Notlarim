//#include <stdio.h>

int main(){
int w1, d1, l1;
int w2, d2, l2;
int w3, d3, l3;
int p1, p2, p3;

printf("Enter w/d/l of Team 1: ");
scanf("%d %d %d", &w1, &d1, &l1);
	
printf("Enter w/d/l of Team 2: ");
scanf("%d %d %d", &w2, &d2, &l2);
		
printf("Enter w/d/l of Team 3: ");
scanf("%d %d %d", &w3, &d3, &l3);


p1 = 3 * w1 + 1 * d1;
p2 = 3 * w2 + 1 * d2;
p3 = 3 * w3 + 1 * d3;

//formatted
printf("Team\tWin\tDraw\tLost\tPoint\n");
printf("T1\t%3d\t%4d\t%4d\t%5d\n", w1, d1, l1, p1);
printf("T1\t%3d\t%4d\t%4d\t%5d\n", w2, d2, l2, p2);
printf("T1\t%3d\t%4d\t%4d\t%5d\n", w3, d3, l3, p3);

//without formatted
//printf("Team       Win        Draw      Lost       Point\n");
//printf("T1          %d          %d        %d          %d\n", w1, d1, l1, p1);
//printf("T2          %d          %d        %d          %d\n", w2, d2, l2, p2);
//printf("T3          %d          %d        %d          %d\n", w3, d3, l3, p3);
