#include <stdio.h>
    // Your code here!
// Hàm xuất các số nguyên có 2 chữ số và là bội của 7
void inBoiSoCua7() {
    int i;
    // Vòng lặp qua tất cả các số nguyên có 2 chữ số
    for(i = 10; i < 100; i++) {
        // Kiểm tra xem số đó có phải là bội số của 7 không
        if(i % 7 == 0) {
            printf("%d\n", i); // In số ra màn hình nếu đúng
        }
    }
}

int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    inBoiSoCua7(); // Gọi hàm để thực hiện nhiệm vụ
    return 0;
}