// Generated by the unholy source of chatGPT
unsigned char reverseBits(unsigned char num) {
   unsigned char reversedNum = 0;
   unsigned char temp;
   
   int i = 0;

   // Reverse the first 4 bits
   for (; i < 4; i++) {
      temp = (num & (1 << i));
      if(temp)
         reversedNum |= (1 << ((4 - 1) - i));
   }

   // Copy the last 4 bits
   reversedNum |= (num & (0xF0));

   return reversedNum;
}