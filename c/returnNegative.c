// Return Negative

int makeNegative(int num)
{
  int negative;
  
  if (num > 0)
  {
     negative = 0 - num;
     return negative;
  }
  
  else if (num < 0)
    return num;
  else
    return 0;
}