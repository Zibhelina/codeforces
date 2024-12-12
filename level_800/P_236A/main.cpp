#include <iostream>

const int ALPHABET_SIZE = 26;

int main() {
   int* table_count = (int*) malloc(sizeof(int) * ALPHABET_SIZE);
   for(int i = 0; i < ALPHABET_SIZE; i++) {
        table_count[i] = 0;
   }
   int distinct_count = 0;
   char ch;
   while(std::cin.get(ch)) {
        if(ch == '\n') {
            break;
        } else if (ch >= 65 && ch <= 90 ) {
            ch += 32;
        }
        if(table_count[ch-97] == 0) {
            table_count[ch-97]++;
            distinct_count++;
        }
   }
   free(table_count);
   if(distinct_count % 2 == 0) {
        printf("CHAT WITH HER!\n");
   } else {
        printf("IGNORE HIM!\n");
   }
   return 0;
}