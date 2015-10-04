// 線形探索法のプログラム
#include <stdio.h>
#include <stdlib.h>
// 対象となるデータの初期化
static struct {
  int key;
  int data;
} table[100];

static int search(int key);
static int n; //tableに登録されているデータ数

int main(int argc, char *argv[])
{
  int i;
  int search_key;
  int result;
  n = 100;
  for(i=0;i < 100; i++){
    table[i].key = i;
    table[i].data = i+100;
  }

  search_key = 30;
  if((result = search(search_key))< 0) {
    printf("not found");
  }else{
    printf("key is found: %d", result);
  }
  exit(0);
}

static int search(int key){
  int i;
  i = 0;
  while(i < n){
   if(table[i].key == key)
     return (table[i].data);
   i++;
  }
  return -1;
}
