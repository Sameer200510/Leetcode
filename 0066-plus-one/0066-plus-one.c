/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
 int cnt = digitsSize;
  while (cnt > 0) {
    cnt--;
    if (digits[cnt] == 9) {
      digits[cnt] = 0;
    } else {
      digits[cnt] = digits[cnt] + 1;
      
      *returnSize = digitsSize;
      return digits;
    }
  }

  
  int* ans = (int*)calloc((digitsSize + 1), sizeof(int));
  ans[0] = 1;

  *returnSize = digitsSize + 1;
  return ans;
}