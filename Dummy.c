#include <stdio.h>
/**************Functin Prototypes*****************/
int School(void);
int Display(int u32Display_Mode);

/*************************************************
 *	@Description: Main Function of this project.
 *	@Function_Name: main
 *	@Parameters: None.
 *	@Return: int - 0-> True, 1-> False
**************************************************/
int main(void)
{
	printf("Hi Sunil\r\n");
	School();
	School();
	return 0;
}

/*************************************************
 *	@Description: Function for school.
 *	@Function_Name: School
 *	@Parameters: None.
 *	@Return: int - 0-> True, 1-> False
**************************************************/
int School(void)
{
	printf("This is School Function\r\n");
	return 0;
}

/*************************************************
 *	@Description: Function for display.
 *	@Function_Name: Display
 *	@Parameters: int u32Display_Mode - 1 - Big Display, 0 - Small Display.
 *	@Return: int - 0-> True, 1-> False
**************************************************/
int Display(int u32Display_Mode)
{
	if(u32Display_Mode)
	{
		printf("This is Big Display\r\n");
	}
	else
	{
		printf("This is Small Display\r\n");
	}
	return 0;
}
