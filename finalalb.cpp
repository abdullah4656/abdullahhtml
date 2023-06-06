#include<stdio.h>
int main(){
	int i,j;
	float salary[5];
	float basic_salary[5];
	float total_tax[5];
	float without_tax[5];
	float tax1month,tax2month,tax3month;
	float find1month,find2month,find3month;
	float Total_salary[3],tax[3];
	//printf("MONTHLY ANALYSIS:\n");
printf("\n\n--------first Month------\n\n");
	for(i=0;i<5;i++){
	printf("enter basic salary of employ:");
	scanf("%f",&basic_salary[i]);
salary[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-(basic_salary[i]*0.05);
//	printf("%.2f\n",salary[i]);
	total_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-salary[i];
    //printf("totaltax:%.2f\n",total_tax[i]);
	without_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45);
	//printf("%.2f\n",without_tax[i]);
		tax[0]+=total_tax[i];
		
		//total_salary[0]=without_tax[i];
	}
	{
	printf("Total tax\t tax before test\n");
	printf("%.1f\t       %.1f\n",tax[0],//total[salary]);}



	// 2 month analysis
	//printf("\n\n-----2nd Month------\n\n");
	//for(i=0;i<5;i++){
	//printf("enter basic salary of employ:");
	scanf("%f",&basic_salary[i]);
salary[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-(basic_salary[i]*0.05);
//	printf("%.2f\n",salary[i]);
	total_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-salary[i];
    //printf("totaltax:%.2f\n",total_tax[i]);
	without_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45);
	//printf("%.2f\n",without_tax[i]);
		tax2month+=total_tax[i];
		
		find2month+=without_tax[i];
	}
	{
	printf("Total tax\t tax before test\n");
	printf("%.1f\t       %.1f\n",tax2month,find2month);}
	

//3rd month
	printf("\n\n--------3rd Month--------\n\n");
	for(i=0;i<5;i++){
	printf("enter basic salary of employ:");
	scanf("%f",&basic_salary[i]);
salary[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-(basic_salary[i]*0.05);
//	printf("%.2f\n",salary[i]);
	total_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45)-salary[i];
    //printf("totaltax:%.2f\n",total_tax[i]);
	without_tax[i]=basic_salary[i]+(basic_salary[i]*0.75)+(basic_salary[i]*0.45);
	//printf("%.2f\n",without_tax[i]);
		tax3month+=total_tax[i];
		
		find3month+=without_tax[i];
	}
	{
	printf("Total tax\t tax before test\n");
	printf("%.1f\t       %.1f\n",tax3month,find3month);}
	
	printf("\n\n-------3 MONTHS ANALYSIS---------\n\n");
	tax=tax1month+tax2month+tax3month;
	
	find=find1month+find2month+find3month;
	//printf("\ntotal tax deuction of 3 month\ttotal salry of three months\n\");
	printf("%.1f    \t      %.1f  ",tax,find);
	printf("");
	
	return 0;
}
