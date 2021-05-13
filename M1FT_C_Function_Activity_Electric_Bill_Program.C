#include<stdio.h>
#include <stdlib.h>
//variable section
int customer_id;
float Unit_consumed, Unit_Charges, Surcharge, Customer_Total_Bil;
//function prototype section
float look_charge(float Unit_consumed);
float calc_chrg(float Unit_consumed, float Unit_Charges);
float surcharge_calc(float T_chrg);
float Total_bill(float Surcharge, float T_chrg);
//body
int main()
{
//input section
	printf("Enter the customer id ............ : ");
	scanf("%d", &customer_id);
	printf("Enter the Consumed unit kw/h ..... : ");
	scanf("%f", &Unit_consumed);
//this is function call section
	Unit_Charges = look_charge(Unit_consumed);				 //to determine charges
	float T_chrg = calc_chrg(Unit_consumed, Unit_Charges);	//compute for the charge
	Surcharge = surcharge_calc(T_chrg);						//compute for the surcharge
	Customer_Total_Bil = Total_bill(Surcharge, T_chrg);		//comput for the bill
 //this is the output section
 	system("cls");
	printf("Electricity Bill\n\n\n");
	printf("Customer ID................... : %d\n", customer_id );
	printf("Consumed Unit................. : %.2f kw/h \n", Unit_consumed);
	printf("Total amount charge @%.2f..... : %.2f\n", Unit_Charges, T_chrg);
	printf("Amount Surcharge.............. : %.2f\n", Surcharge);
	printf("Total amount bill............. : %.2f\n", Customer_Total_Bil);
	return 0;
}
//end function body
//this function is to determine the charge
float look_charge(float Unit_consumed)
{
	if(Unit_consumed > 199 && Unit_consumed <= 250)
		return 1.50;
	else if(Unit_consumed > 250 && Unit_consumed <= 400)
		return 1.60;
	else if(Unit_consumed > 400 && Unit_consumed <= 600)
		return 1.85;
	else if(Unit_consumed > 600)
		return 2.00;
	else
		return 0;
}
//this function is to calculate charge per unit.
float calc_chrg(float Unit_consumed, float Unit_Charges)
{
	if(Unit_consumed > 199)
	{
		float T_chrg = Unit_consumed * Unit_Charges;
		return T_chrg;
	}
	else
		return 100;
}
//this function will calculate for the surcharge
float surcharge_calc(float T_chrg)
{
	if(T_chrg < 401)
		return 0;
	else
	Surcharge = T_chrg * 0.10;
	return Surcharge;
}
//this function is to calculate the total bill
float Total_bill(float Surcharge, float T_chrg)
{
		return T_chrg + Surcharge;
}