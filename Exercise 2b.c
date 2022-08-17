/**********************************************
 * A program that counts 1 to 10
 * each on a separate line
 * includes a message when the count reaches 3
 * and a different message when the count is 7
 ************************************************/

 int main()
 {
     int myNumber;
     for(myNumber = 1; myNumber < 11; myNumber++){
        printf("%d\n",myNumber);

     if(myNumber == 3)
        printf("This is the third count\n",myNumber);

        if(myNumber == 7)
            printf("Now we are at the seventh count\n",myNumber);}
 }


