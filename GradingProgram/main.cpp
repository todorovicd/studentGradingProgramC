

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	char name[25];
	int classhrs[7];
	int classnumber;
	char classname[50];
	char classname2[50];
	char classname3[25];
	char classname4[50];
	char classname5[50];
	char classname6[50];
	char classname7[50];
	char classid[25];
	char classid2[25];
	char classid3[25];
	char classid4[25];
	char classid5[25];
	char classid6[25];
	char classid7[25];
	char classgrade[7];
	int grade;
	float gpa;
	int classflag1;
	int classflag2;
	int classflag3;
	int classflag4;
	int classflag5;
	int classflag6;
	int classflag7;
	float totalhrs = 0;
	float totalpts = 0;


	printf("Enter student Name: ");
	gets(name);
	printf("Enter number of clases: ");
	scanf("%d", &classnumber);
	if (classnumber < 1) {
		printf("Most Enter at least one class");
	}

	// Number of classes (how many) we are calculating //

	if (classnumber >= 1) {
		classflag1 = TRUE;
	}
	else {
		classflag1 = FALSE;
	}

	if (classnumber >= 2) {
		classflag2 = TRUE;
	}
	else {
		classflag2 = FALSE;
	}

	if (classnumber >= 3) {
		classflag3 = TRUE;
	}
	else {
		classflag3 = FALSE;
	}

	if (classnumber >= 4) {
		classflag4 = TRUE;
	}
	else {
		classflag4 = FALSE;
	}

	if (classnumber >= 5) {
		classflag5 = TRUE;
	}
	else {
		classflag5 = FALSE;
	}

	if (classnumber >= 6) {
		classflag6 = TRUE;
	}
	else {
		classflag6 = FALSE;
	}

	if (classnumber >= 7) {
		classflag7 = TRUE;
	}
	else {
		classflag7 = FALSE;
	}

	if (classflag1 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid);
		printf("Enter class name: ");
		gets(classname);

		// Deleted the command for the extra line //

		fgets(classname, 50, stdin);
		char * bug = classname;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[0]);


		if (classhrs[0] < 1 || classhrs[0] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[0]);


		// If the entered is in lower case //

		if (strcmp("A", &classgrade[0]) != 0
			&& strcmp("a", &classgrade[0]) != 0
			&& strcmp("B", &classgrade[0]) != 0
			&& strcmp("b", &classgrade[0]) != 0
			&& strcmp("C", &classgrade[0]) != 0
			&& strcmp("c", &classgrade[0]) != 0
			&& strcmp("D", &classgrade[0]) != 0
			&& strcmp("d", &classgrade[0]) != 0
			&& strcmp("F", &classgrade[0]) != 0
			&& strcmp("f", &classgrade[0]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[0]) == 0 || strcmp("a", &classgrade[0]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[0]) == 0 || strcmp("b", &classgrade[0]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[0]) == 0 || strcmp("c", &classgrade[0]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[0]) == 0 || strcmp("d", &classgrade[0]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[0];
		totalpts = totalpts + (classhrs[0] * grade);

	}


	if (classflag2 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid2);
		printf("Enter class name: ");
		gets(classname2);

		// Deleted the command for the extra line //

		fgets(classname2, 50, stdin);
		char * bug = classname2;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[1]);


		if (classhrs[1] < 1 || classhrs[1] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[1]);

		// If the entered is in lower case //

		if (strcmp("A", &classgrade[1]) != 0
			&& strcmp("a", &classgrade[1]) != 0
			&& strcmp("B", &classgrade[1]) != 0
			&& strcmp("b", &classgrade[1]) != 0
			&& strcmp("C", &classgrade[1]) != 0
			&& strcmp("c", &classgrade[1]) != 0
			&& strcmp("D", &classgrade[1]) != 0
			&& strcmp("d", &classgrade[1]) != 0
			&& strcmp("F", &classgrade[1]) != 0
			&& strcmp("f", &classgrade[1]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[1]) == 0 || strcmp("a", &classgrade[1]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[1]) == 0 || strcmp("b", &classgrade[1]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[1]) == 0 || strcmp("c", &classgrade[1]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[1]) == 0 || strcmp("d", &classgrade[1]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[1];
		totalpts = totalpts + (classhrs[1] * grade);

	}


	if (classflag3 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid3);
		printf("Enter class name: ");
		gets(classname3);
		fgets(classname3, 50, stdin);

		// Deleted the command for the extra line //

		char * bug = classname3;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[2]);


		if (classhrs[2] < 1 || classhrs[2] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[2]);

		// If the entered is in lower case //

		if (strcmp("A", &classgrade[2]) != 0
			&& strcmp("a", &classgrade[2]) != 0
			&& strcmp("B", &classgrade[2]) != 0
			&& strcmp("b", &classgrade[2]) != 0
			&& strcmp("C", &classgrade[2]) != 0
			&& strcmp("c", &classgrade[2]) != 0
			&& strcmp("D", &classgrade[2]) != 0
			&& strcmp("d", &classgrade[2]) != 0
			&& strcmp("F", &classgrade[2]) != 0
			&& strcmp("f", &classgrade[2]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[2]) == 0 || strcmp("a", &classgrade[2]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[2]) == 0 || strcmp("b", &classgrade[2]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[2]) == 0 || strcmp("c", &classgrade[2]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[2]) == 0 || strcmp("d", &classgrade[2]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[2];
		totalpts = totalpts + (classhrs[2] * grade);

	}

	if (classflag4 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid4);
		printf("Enter class name: ");
		gets(classname4);
		fgets(classname4, 50, stdin);

		// Deleted the command for the extra line //

		char * bug = classname4;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[3]);


		if (classhrs[3] < 1 || classhrs[3] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[3]);

		// If the entered is in lower case //

		if (strcmp("A", &classgrade[3]) != 0
			&& strcmp("a", &classgrade[3]) != 0
			&& strcmp("B", &classgrade[3]) != 0
			&& strcmp("b", &classgrade[3]) != 0
			&& strcmp("C", &classgrade[3]) != 0
			&& strcmp("c", &classgrade[3]) != 0
			&& strcmp("D", &classgrade[3]) != 0
			&& strcmp("d", &classgrade[3]) != 0
			&& strcmp("F", &classgrade[3]) != 0
			&& strcmp("f", &classgrade[3]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[3]) == 0 || strcmp("a", &classgrade[3]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[3]) == 0 || strcmp("b", &classgrade[3]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[3]) == 0 || strcmp("c", &classgrade[3]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[3]) == 0 || strcmp("d", &classgrade[3]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[3];
		totalpts = totalpts + (classhrs[3] * grade);

	}

	if (classflag5 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid5);
		printf("Enter class name: ");
		gets(classname5);
		fgets(classname5, 50, stdin);

		// Deleted the command for the extra line //

		char * bug = classname5;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[4]);


		if (classhrs[4] < 1 || classhrs[4] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[4]);

		// If the entered is in lower case //

		if (strcmp("A", &classgrade[4]) != 0
			&& strcmp("a", &classgrade[4]) != 0
			&& strcmp("B", &classgrade[4]) != 0
			&& strcmp("b", &classgrade[4]) != 0
			&& strcmp("C", &classgrade[4]) != 0
			&& strcmp("c", &classgrade[4]) != 0
			&& strcmp("D", &classgrade[4]) != 0
			&& strcmp("d", &classgrade[4]) != 0
			&& strcmp("F", &classgrade[4]) != 0
			&& strcmp("f", &classgrade[4]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[4]) == 0 || strcmp("a", &classgrade[4]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[4]) == 0 || strcmp("b", &classgrade[4]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[4]) == 0 || strcmp("c", &classgrade[4]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[4]) == 0 || strcmp("d", &classgrade[4]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[4];


		if (totalhrs > 21) {
			printf("You have exceeded the maximum amount of credits");
			classgrade[4] = 0;
			totalhrs = totalhrs - classhrs[4];
			classhrs[4] = 0;
		}
		else {
			totalpts = totalpts + (classhrs[4] * grade);
		}

	}

	if (classflag6 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid6);
		printf("Enter class name: ");
		gets(classname6);
		fgets(classname6, 50, stdin);

		// Deleted the command for the extra line //

		char * bug = classname6;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[5]);


		if (classhrs[5] < 1 || classhrs[5] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[5]);

		// If the entered is in lower case //

		if (strcmp("A", &classgrade[5]) != 0
			&& strcmp("a", &classgrade[5]) != 0
			&& strcmp("B", &classgrade[5]) != 0
			&& strcmp("b", &classgrade[5]) != 0
			&& strcmp("C", &classgrade[5]) != 0
			&& strcmp("c", &classgrade[5]) != 0
			&& strcmp("D", &classgrade[5]) != 0
			&& strcmp("d", &classgrade[5]) != 0
			&& strcmp("F", &classgrade[5]) != 0
			&& strcmp("f", &classgrade[5]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[5]) == 0 || strcmp("a", &classgrade[5]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[5]) == 0 || strcmp("b", &classgrade[5]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[5]) == 0 || strcmp("c", &classgrade[5]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[5]) == 0 || strcmp("d", &classgrade[5]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[5];

		if (totalhrs > 21) {
			printf("You have exceeded the maximum amount of credits");
			classgrade[4] = 0;
			totalhrs = totalhrs - classhrs[4];
			classhrs[4] = 0;
		}
		else {
			totalpts = totalpts + (classhrs[4] * grade);
		}

	}

	if (classflag7 == TRUE) {
		printf("Enter class ID (NO SPACE): ");
		scanf("%s", &classid7);
		printf("Enter class name: ");
		gets(classname7);
		fgets(classname7, 50, stdin);

		// Deleted the command for the extra line //

		char * bug = classname7;
		while (*bug != '\0') {
			if (*bug == '\n') {
				*bug = '\0';
			}
			bug++;
		}
		printf("Enter class hours: ");
		scanf("%d", &classhrs[6]);


		if (classhrs[6] < 1 || classhrs[6] > 5) {
			printf("Class Hours must not exceed 5.\n\n");
			system("pause");
			return (-1);
		}

		printf("Enter grade: ");
		scanf("%s", &classgrade[6]);

		// If the entered is in lower case or Caps Lock //

		if (strcmp("A", &classgrade[6]) != 0
			&& strcmp("a", &classgrade[6]) != 0
			&& strcmp("B", &classgrade[6]) != 0
			&& strcmp("b", &classgrade[6]) != 0
			&& strcmp("C", &classgrade[6]) != 0
			&& strcmp("c", &classgrade[6]) != 0
			&& strcmp("D", &classgrade[6]) != 0
			&& strcmp("d", &classgrade[6]) != 0
			&& strcmp("F", &classgrade[6]) != 0
			&& strcmp("f", &classgrade[6]) != 0) {

			printf("Invalid grade choice.\n\n");
			system("pause");
			return(-1);
		}

		if (strcmp("A", &classgrade[6]) == 0 || strcmp("a", &classgrade[6]) == 0)
		{
			grade = 4;
		}
		else if (strcmp("B", &classgrade[6]) == 0 || strcmp("b", &classgrade[6]) == 0)
		{
			grade = 3;
		}
		else if (strcmp("C", &classgrade[6]) == 0 || strcmp("c", &classgrade[6]) == 0)
		{
			grade = 2;
		}
		else if (strcmp("D", &classgrade[6]) == 0 || strcmp("d", &classgrade[6]) == 0)
		{
			grade = 1;
		}
		else
		{
			grade = 0;
		}

		totalhrs = totalhrs + classhrs[6];

		if (totalhrs > 21) {
			printf("You have exceeded the maximum amount of credits");
			classgrade[4] = 0;
			totalhrs = totalhrs - classhrs[4];
			classhrs[4] = 0;
		}
		else {
			totalpts = totalpts + (classhrs[4] * grade);
		}

	}

	gpa = totalpts / totalhrs;


	printf("\n*************************** Grade Report  ********************************");
	printf("\n\n--------------------------------------------------------------------------");
	printf("\n%s", name);
	printf("\n\n%-10s \t%-30s \t%12s \t%12s", "Class ID", "Class Name", "Class Hours", "Class Grade");

	if (classflag1) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid, classname, classhrs[0], classgrade[0]);
	}
	if (classflag2) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid2, classname2, classhrs[1], classgrade[1]);
	}
	if (classflag3) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid3, classname3, classhrs[2], classgrade[2]);
	}
	if (classflag4) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid4, classname4, classhrs[3], classgrade[3]);
	}
	if (classflag5) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid5, classname5, classhrs[4], classgrade[4]);
	}
	if (classflag6) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid6, classname6, classhrs[5], classgrade[5]);
	}
	if (classflag7) {
		printf("\n\n%-10s \t%-30s \t%12d \t%12c", classid7, classname7, classhrs[6], classgrade[6]);
	}

	printf("\n\n\n\n%-10s \t%-12s \t%12.02s", "Total Hours", "Total Points", "GPA");
	printf("\n\n\%10.0f \t%16.0f \t%13.1f\n", totalhrs, totalpts, gpa);
	printf("--------------------------------------------------------------------------\n\n");


	system("pause");
	return 0;



}