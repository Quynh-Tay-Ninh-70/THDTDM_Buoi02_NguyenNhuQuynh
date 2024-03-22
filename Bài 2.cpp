#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? chính phuong
int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

// Hàm d?m và in ra các s? chính phuong nh? hon n
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong: %d\n", count);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    countAndPrintPerfectSquares(n); // G?i hàm d? d?m và in ra các s? chính phuong
    return 0;
}
