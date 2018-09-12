int my_strlen2(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}