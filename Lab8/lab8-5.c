#include <stdio.h>

#define ARRAY_SIZE 5

typedef struct {
    char id[12];
    int midterm;
    int final;
    char grade;
} StudentRecord;

// รับ 1. struct ที่มีข้อมูลนักเรียน
// รับ 2. ขนาด array of struct
// รับ 3. struct pointer ที่เตรียมรอเอาไว้ชี้คนได้ตะแนน mid มากสุด
// รับ 4. struct pointer ที่เตรียมรอเอาไว้ชี้คนได้ตะแนน final มากสุด
// ต้องรับเป็น ** เพราะ ตัวที่รับมาเป็น struct pointer ที่เอาไว้รอชี้ array of struct ของคนที่มีค่ามากสุด
// ซึ่ง array ก็เป็น pointer อยู่แล้ว จึงต้องรับเป็น ** (งงอยู่ ???)
void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {
    // กำหนดให้ struct pointer ที่เตรียมไว้ ทั้งสอง ชี้ไปที่ struct student ตัวแรก
    *topMid = *topFin = &pRec[0];
    // วนลูปรอบ struct pRec ที่มีข้อมูลเก็บไว้
    for (int i = 0; i < size; i++) {
        // เช็คว่าถ้า struct ของนักเรียนคนนั้น มีคะแนน มากกว่า *topMid ที่กำหนดไว้หรือไม่
        if (pRec[i].midterm > (*topMid)->midterm) {
            // ถ้าใช่ ก็ให้ topMid ชี้ไปที่ struct ของนักเรียนคนนั้น
            *topMid = &pRec[i];
        }
        // เช็คว่าถ้า struct ของนักเรียนคนนั้น มีคะแนน มากกว่า *topFin ที่กำหนดไว้หรือไม่
        if (pRec[i].final > (*topFin)->final) {
            // ถ้าใช่ ก็ให้ topFin ชี้ไปที่ struct ของนักเรียนคนนั้น
            *topFin = &pRec[i];
        }
    }   
}

int main() {
    // ประกาศ pTopMid, pTopFin เป็น pointer เพราะจะได้ชี้ไปที่ struct students ได้
    // แล้วค่อยหาว่า struct students คนไหนคะแนน mid กับ final มากสุด ก็ให้ชี้ไปที่ struct students คนนั้น
    StudentRecord students[ARRAY_SIZE], *pTopMid, *pTopFin;
    int gradeCount[5] = {0};
    int i;
    // รับ id, คะแนน mid, คะแนน final เก็บเข้าไปใน array of struct students แต่ละคน
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    // เรียกใช้ฟังก์ชันหาคนได้คะแนน mid มากสุด กับคะแนน final มากสุด
    // ส่ง 1. struct ของ students ที่มีข้อมูลใส้ไว้
    // ส่ง 2. ขนาดของ array of struct
    // ส่ง 3. struct pointer ชื่อ pTopMid ที่เตรียมรอเอาไว้ชี้ struct ของนักเรียนที่ได้คะแนน mid มากสุด
    // ส่ง 4. struct pointer ชื่อ pTopFin ที่เตรียมรอเอาไว้ชี้ struct ของนักเรียนที่ได้คะแนน final มากสุด
    findTop(students, ARRAY_SIZE, &pTopMid, &pTopFin);

    //print grade
    printf("Top Score for Midterm:\n");
    // เข้าถึง struct pTopMid ที่ได้ชี้ไปที่คนที่ได้คะแนน mid มากสุดจากการใช้ฟังก์ชัน findTop
    // แล้วใช้ -> เพื่อเข้าถึง id กับ คะแนน midterm
    printf("Student ID %s with score %d\n", pTopMid->id, pTopMid->midterm);
    printf("Top Score for Final:\n");
    // เข้าถึง struct pTopFin ที่ได้ชี้ไปที่คนที่ได้คะแนน final มากสุดจากการใช้ฟังก์ชัน findTop
    // แล้วใช้ -> เพื่อเข้าถึง id กับ คะแนน midterm
    printf("Student ID %s with score %d\n", pTopFin->id, pTopFin->final);

    return 0;
}