/*
 * 计算方法 第一次实验 问题二
 * PB17000005 赵作竑
 * 2020年3月21日
 */
#include <stdio.h>

int main() {
    double arr[5] = {
            4040.045551380452,
            -2759471.276702747,
            -31.64291531266504,
            2755462.874010974,
            0.0000557052996742893
    };
    double sum[3];
    sum[0] = 0;
    for (int i = 0; i < 5; ++i) {
        sum[0] += arr[i];
        sum[1] += arr[4 - i];
    }
    double tmp1 = arr[3], tmp2 = arr[1];
    tmp1 += arr[0];
    tmp1 += arr[4];
    tmp2 += arr[2];
    sum[2] = tmp1 + tmp2;
    printf("             Result\n");
    printf("Method(a)    %-7e\n", sum[0]);
    printf("Method(b)    %-7e\n", sum[1]);
    printf("Method(c)    %-7e\n", sum[2]);

    return 0;
}
