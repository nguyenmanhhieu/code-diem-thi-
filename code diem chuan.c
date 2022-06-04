//
//  main.c
//  code điểm thi
//
//  Created by Hiếu Hee on 04/06/2022.
//



#include <stdio.h>
int main(void)
{
    int bh;
    int bn;
    int lt;
    int th;
    int btl;
    printf("nhap so buoi hoc toi da\n");
    scanf("%d",&bh);
    printf("nhap so buoi nghi\n");
    scanf("%d",&bn);
    if(bn<=bh*0.25){
        printf("du dieu kien thi\n");
        printf("nhap diem ly thuyet\n");
        scanf("%d",&lt);
        printf("nhap diem thuc hanh\n");
        scanf("%d",&th);
        printf("nhap diem bai tap lon\n");
        scanf("%d",&btl);
        if (lt<20*0.4){
            printf("thi lai ly thuyet\n");
        }
        else{
            printf("ban da do ly thuyet\n");
        }
        if (th<15*0.4){
            printf("thi lai thuc hanh\n");
        }
        else{
            printf("ban da do thuc hanh\n");
        }
        if (btl<10*0.4){
            printf("thi lai bai tap lon\n");
        }
        else{
            printf("ban da do bai tap lon\n");}
        }
    else {
         printf("hoc lai\n");
         }
    return 0;
}

