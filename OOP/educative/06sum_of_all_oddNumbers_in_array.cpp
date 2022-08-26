int sumAllOdds(int arr[], int size)
{
  int sum = 0;

  // write your code here
  for (int i = 0; i <= size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      sum += arr[i];
    }
    else
    {
      sum = sum;
    }
  }
  return sum;
}

