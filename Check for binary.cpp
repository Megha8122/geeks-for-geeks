// Return true if str is binary, else false
bool isBinary(string str)
{
   for (char ch : str) {
       if(ch != '0' && ch != '1')
        return 0;
   }
   return 1;
}
