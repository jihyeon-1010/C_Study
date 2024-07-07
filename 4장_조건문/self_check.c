#include <stdio.h>

int main(void) {
    int sandwich = 0;
    int coffee = 0;
    int price = 0;

    printf("커피를 총 몇 잔 주문하시겠습니까?: ");
    scanf("%d", &coffee);

    printf("샌드위치를 총 몇 개 주문하시겠습니까?: ");
    scanf("%d", &sandwich);

    if (sandwich > 0 && coffee > 0 ) { 
        price = (coffee * 3500) + (sandwich * 6000);
    }   
    else {
        price = (coffee * 4500) + (sandwich * 6000);
    }   
    
    printf("주문하신 메뉴의 총 금액은 %d원입니다.\n", price);

    return 0;
}