#ifndef POW_N
#define POW_N

double power(int base, int pow){
	double result = 0;
	int casa;
	if(pow == 0){
		result = 1;
	}
	else
		if(base > 0 && pow > 0){
			while(pow > 0){
				result = base;
				pow--;
				while(pow > 0){
					result *= base;
					pow--;
				}
			}
		}
	else
		if(base > 0 && pow < 0){
			printf("Entro");
			int casa = 1;
			pow++;
			while (pow < 0){
				casa *= 10;
				pow++;
			}
			result = (1.0*casa)/base;
		}
	return result;
}
#endif

