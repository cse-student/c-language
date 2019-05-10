char *decimalToBinary(unsigned short num){
    static char bin[16];
    if (num < 1){
        bin[0] = '0';
        bin[1] = '\0';
    }
    // counter for binary array
    int i = 0;
    while (num > 0) {

        // storing remainder in binary array
        if (num %2 == 0){
            bin[i] = '0';
        }
        else{
            bin[i] = '1';
        }
        num = num / 2;
        i++;
    }
    bin[i] = '\0';
    i--;
    // reverse array
    for(int j = 0; j < i/2+1; j++){
        char temp = bin[j];
        bin[j] = bin[i-j];
        bin[i-j] = temp;
    }
    return bin;
}

void bitwiseAND(int num1, int num2){
    printf("Binary1:            %s\n", decimalToBinary(num1));
    printf("Binary2:            %s\n", decimalToBinary(num2));
    printf("Binary1 & Binary2 = %s\n", decimalToBinary(num1 & num2));
}


void bitwiseOR(int num1, int num2){
    printf("Binary1:            %s\n", decimalToBinary(num1));
    printf("Binary2:            %s\n", decimalToBinary(num2));
    printf("Binary1 | Binary2 = %s", decimalToBinary(num1 | num2));
}

void bitwiseXOR(int num1, int num2){
    printf("Binary1:                      %s\n", decimalToBinary(num1));
    printf("Binary2:                      %s\n", decimalToBinary(num2));
    int num3 = num1 ^ num2;
    char *bin3 = decimalToBinary(num3);
    printf("Binary3 = Binary1 ^ Binary2 =   %s\n", bin3);
    int num4 = num3 ^ num2;
    printf("Binary4 = Binary3 ^ Binary2 = %s\n", decimalToBinary(num4));
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    //
    // Performing Binary XOR on a number(num1) twice with the same number(num2)
    // results with the original number(num1)
    //
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
}

void oneComplement(int num){
    printf("Binary1:                %s\n", decimalToBinary(num));
    printf("Binary1 OneComplement : %s\n", decimalToBinary(~10));
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    //
    // ~ operator performs the one complement operation
    // that is it flips the binary value(1=>0, 0=>1)
    //
    //-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
}