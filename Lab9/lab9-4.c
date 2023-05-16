#include <stdio.h>
#include <string.h>

struct Word {
    char word[21];
    int count;    
};

int main(){
        char input[21];
        int i, last_word = 0, find = 0;
        struct Word data[20] = {0};
        scanf("%20s", input);

        while (strcmp(input, "exit")) {
            // ทุกรอบที่รับ input ให้ loop เช็คว่ามีตัวซํ้าไหม ถ้ามี count += 1
            for (find = 0; find <= last_word; find++) {
                if (strcmp(input, data[find].word) == 0) {
                    data[find].count++;
                    break;
                }
            }
            if (find > last_word) {
                strcpy(data[find-1].word, input);
                data[find-1].count = 1;
                last_word++;
            }
            scanf("%20s", input);
        }

        printf("Output:\n");
        for(i = 0; i < last_word; i++){
            printf("%s = %d\n", data[i].word, data[i].count);
        }
}