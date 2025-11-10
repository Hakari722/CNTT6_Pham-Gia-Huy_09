#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

int main() {
	int arr [MAX];
	int n = 0;
	int choice;
	int confirm = 'Y';
	int sorted = 0;
	
	while(confirm == 'Y' || confirm == 'y'){
		printf("\n========================MENU=======================\n");
		printf("1.Nhap so luong phan tu\n");
		printf("2.In gia tri cac phan tu trong mang\n");
		printf("3.Tinh tong va tat ca so am va so duong\n");
		printf("4.In ra cac phan tu chia het cho 3\n");
		printf("5.Them mot phan tu tai vi tri cu the\n");
		printf("6.Xoa mot phan tu tai mot vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan(insertion sort)\n");
		printf("8.Kiem tra su ton tai cua phan tu trong mang\n");
		printf("9.In ra cac phan tu nam trong khoang[a,b]\n");
		printf("10.Dao nguoc vi tri cac phan tu trong mang\n");
		printf("====================================================\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:{
					printf("nhap so luong phan tu: ");
				scanf("%d", &n);
				if(n <= 0 || n > MAX){
					printf("so phan tu khong hop le!\n");
					n = 0;
					break;
				}
				for(int i = 0; i < n; i++){
					printf("arr[%d] =", i);
					scanf("%d", &arr[i]);
			    }
			    sorted = 0;
				break;
			}
			case 2:{
				if(n == 0){
					printf("mang rong!\n");
					break;
				}
				for(int i = 0; i < n; i++){
					printf("arr[%d] = %d\n", i, arr[i]);
				}
				break;
			}
			case 3:{
				if(n == 0){
					printf("mang rong!\n");
					break;
				}
				int tong = 0;
				for(int i = 0; i < n; i++){
					tong += arr[i];
					printf("tong cac phan tu: %d", tong);
				}
				printf("trung binh cong: %.2f\n", (float)tong / n);
				break;
			}
			case 4:{
				if(n == 0){
					printf("mang rong!");
					break;
				}
				for(int i = 0; i < n; i++){
				}
				break;
			}
			case 5:{
				if (n >= MAX) {
                    printf("Mang da day!\n");
                    break;
                }
                int value;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                arr[n++] = value;
                printf("Da them thanh cong!\n");
				break;
			}
			case 6:{
				int pos;
                printf("Nhap vi tri muon xoa (0 -> %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
                    n--;
                    printf("Da xoa thanh cong!\n");
                }
				break;
			}
			case 7:
			case 8:{
				int x, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        printf("Phan tu %d nam o vi tri %d\n", x, i);
                        found = 1;
                    }
                }
                if (!found) printf("Khong tim thay %d trong mang.\n", x);
				break;
			}
			case 9:
			case 10:
				
			
			default:
			printf("lua chon khong hop le!\n");					
		}
		printf("ban co muon tiep tuc? (Y/N): ");
		scanf(" %c",&confirm);
	}
	printf("Chuong trinh ket thuc!\n");
	return 0;
}

