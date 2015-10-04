// バイナリーサーチの実装
// keyが昇順(降順)にソートされている前提

static struct {
  int key;
  int data;
} table[100];

static int n; //テーブルに登録されているデータ数

int binary_search(int key)
{
  int low, high, middle;

  low = 0;
  high = n - 1;

  while(low <= high){
    middle = (low + high) / 2;
    if(key == table[middle].key){
      return table[middle].data;
    } else if(key < table[middle].key) {
      high = middle - 1;
    } else {
      low = middle + 1;
    }
  }
  return -1;
}

