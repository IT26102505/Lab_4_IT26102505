#include <stdio.h>
int main (void)

{	
	int fp_match,ret_match,ac_match;

	printf("Enter Your fingerprint(1/0):");
	scanf("%d",&fp_match);
	printf("Scan your retinal(1/0):");
	scanf("%d",&ret_match);
	printf("Enter the access card(1/0):");
	scanf("%d",&ac_match);

	if ((fp_match!=1&&fp_match!=0)||(ret_match!=1&&ret_match!=0)||(ac_match!=1&&ac_match!=0))
	{
		printf("Invalid Input!\n");
		return 1;
	}


	if ((fp_match&&ret_match||fp_match&&ac_match||ret_match&&ac_match||fp_match&&ret_match&&ac_match) == 1)
	{
		printf("Access Granted\n");
	}
	else
	{
		printf("Access Denied\n");
	}
	return 0;
}
