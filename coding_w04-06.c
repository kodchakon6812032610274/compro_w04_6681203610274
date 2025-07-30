#include <stdio.h>
const int GLOBAL_RATE = 20;

void calculate() {
    const int LOCAL_BONUS = 80;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}
int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    return 0;
}
// ค่าGLOBAL_RATEและLOCAL_BONUSต่างกันในด้านค่าคงที่
// ค่าที่แสดงจัดมีGLOBAL_RATEสองตัว
// เนื่องจากmainรับได้แค่ค่าเดียว
// ค่า่คงที่บางตัวไม่สามารถเรียนใช้mainได้