#include <stdio.h>
#include <math.h>
int main() {
     
    float goal, quiz, lab;
    printf("คะแนนที่อยากได้(เต็ม 100): ");
    scanf("%f", &goal);
    printf("คะแนนเก็บแล็บที่ได้: ");
    scanf("%f", &lab);
    printf("คะแนนเก็บควิซที่ได้: ");
    scanf("%f", &quiz);

    float realtobeDoneScore = goal - lab - quiz;
    printf("\nคะแนนสอบปลายภาคที่ต้องได้คือ: %.0f\n", ceil(realtobeDoneScore));
    float ninetypercentscore = ceil(realtobeDoneScore) - 10;
    printf("ถ้าทำถูก >= ร้อยละ90 จะต้องทำ %.0f คะแนน\n", ceil(ninetypercentscore));
    printf("**ถ้าสมมุติกรณีข้อละสองคะแนน จากการเฉลี่ย มี 50 ข้อ 100 คะแนน\n");
    float numofdo = ceil(ninetypercentscore)/2;
    printf("จำนวนข้อทั้งหมดที่ต้องทำ: %.0f\n", ceil(numofdo));
    float right = (ceil(numofdo)/10) * 9;
    float wrong = ceil(numofdo) - ceil(right);
    printf("ในจำนวนนั้นต้องทำถูก %.0f ข้อ และผิดได้ %.0f ข้อ", ceil(right), ceil(wrong));

    return 0;
}