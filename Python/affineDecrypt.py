

n = 0;
i = 0;
decision = "yes" 
while decision == "yes":
    string = input("What is your encrypted string? ") #takes in message
    string = string.lower()#avoids pesky big letters

    coefOne = int(input("State your first coefficent: ")) 
    coefTwo = int(input("Now your second: "))
    for i in range(1, 26):
        if(coefOne*i)%26==1:
            coefOne = i;
            break;
    for n in range(len(string)):
        if(string[n].isalpha() == False ):
            ans = string[n]
        
        else:
            curr = ord(string[n]) - ord('a')#brings it down to original num val
            curr = (coefOne*(curr-coefTwo))%26 #uses inverse of affine ciper to decrypt
            ans = curr +ord('a') #decrypts then converts to a new letter
            ans = chr(ans)
        
        print(ans, end="")
    decision = input("Would you like to continue: (yes/no) ")

exit()