int main(){
	int *p1,p2,*p3,p4,*p5, p6, **p7;
	p1 = (int*) malloc (sizeof (int));
	*p1 = 41;
	p2 = 17;
	p3 = (int*) malloc (sizeof (int));
	*p3 = 95;
	p4 = 29;
	p5 = &p6;
	p6 = 33;
	printf("*p1 = %d p2 = %d \n", *p1, p2); //*p1 = 41 p2 = 17
	printf("*p3 = %d p4 = %d \n", *p3, p4); //*p3 = 95 p4 = 29
	printf("*p5 = %d p6 = %d \n\n", *p5, p6); //*p5 = 33 p6 = 33	
	p1 = p5; //p1 = 6422276 
	p2 = *p3; //p2 = 95 
	p3 = &p4; //p3 = 6422280 /16
	p4 = 11; //p4 = 11 /17
	p5 = &p2; //p5 = 6422288 /18
	*p5 = 21; //*p5 = 21 /19
	p6 = p2; //p6 = 21 /20
	p7 = &p3; //p7 = 6422284 /21
	p2 = 59; 
	printf ("*p1 = %d p2 =%d \n", *p1, p2); //*p1 = 21 p2 =59 /23
	printf ("*p3 = %d p4 =%d \n", *p3, p4); //*p3 = 11 p4 =11 /24
	printf ("*p5 = %d p6 =%d \n", *p5, p6); //*p5 = 59 p6 =21	/25
	printf ("**p7 = %d", **p7); //**p7 = 11	/26

	getch();
	return 0;
}
/*
11 > *p1 = 41 p2 = 17
12 > *p3 = 95 p4 = 29,
13 > *p5 = 33 p6 = 33
14 > p1 = 6422276, 
15 > p2 = 95, 
16 > p3 = 6422280, 
17 > p4 = 11, 
18 > p5 = 6422288, 
19 > *p5 = 21, 
20 > p6 = 21, 
21 > p7 = 6422284, 
23 > *p1 = 21 p2 =59, 
24 > *p3 = 11 p4 =11, 
25 > *p5 = 59 p6 =21,
26 > **p7 = 11	
*/
