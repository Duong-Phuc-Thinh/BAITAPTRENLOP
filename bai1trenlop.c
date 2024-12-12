#include <stdio.h>

int main() {
    int choice, amount;
    double result;
    const double usdToVnd = 23500, eurToVnd = 25000, gbpToVnd = 28000, jpyToVnd = 180;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");

    printf("Nhap don vi tien te ban muon chuyen doi (1-8): ");
    scanf("%d", &choice);

    printf("Nhap so tien can chuyen doi: ");
    scanf("%d", &amount);

    switch (choice) {
        case 1:
            result = amount * usdToVnd;
            printf("%d USD = %.0f VND\n", amount, result);
            break;
        case 2:
            result = amount * eurToVnd;
            printf("%d EUR = %.0f VND\n", amount, result);
            break;
        case 3:
        	result = amount * gbpToVnd;
        	printf("% GBP = %.0f VND\n", amount, result);
			break;
		case 4: 
			result = amount * jpyToVnd;
			printf("% JPY = %.0f VND\n", amount, result);
			break;
		case 5:
    		result = amount / usdToVnd;
    		printf("%.0f VND = %.2f USD\n", amount, result);
    		break;     	
    	case 6:
    		result = amount / eurToVnd;
    		printf("%.0f VND = %.2f EUR\n", amount, result);
    		break;

		case 7:
    		result = amount / gbpToVnd;
    		printf("%.0f VND = %.2f GBP\n", amount, result);
    		break;

		case 8:
    		result = amount / jpyToVnd;
    		printf("%.0f VND = %.0f JPY\n", amount, result);
    		break;
        default:
            printf("Lua chon khong hop le!\n");
    }

    return 0;
}
