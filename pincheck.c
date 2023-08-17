bool validate_pin(const char *pin) {
   unsigned int length = strlen(pin);

   // Check if the PIN length is 4 or 6
   if (length != 4 && length != 6) {
       return false;
   }

   // Check if all characters are digits
   for (unsigned int i = 0; i < length; i++) {
       if (!isdigit(pin[i])) {
           return false;
       }
   }

   // If all checks pass, return true
   return true;
}
