import os
import os.path

path = os.getcwd()                      # get thee current working directory path
filen = 'COP'                           # initialize file name
print "[!] Looking for:"                # print out a message
print(path+'\\'+filen)                  # print out the path file
if os.path.isfile(path + '\\' + filen): # check if the file is exist or not
    print ('[*] Already exist!')        # print already exist
else:                                   # else
    print ("[#] Setting up..")          # print a message
    os.system("g++ Source.cpp -o COP")  # Compile the Source.cpp with GNU
    if os.path.isfile(path+filen):      # check if the file has been created or not
        print("[+] Done!")              # if yes print done!
    else:                               # or not print and error
        print "Error[!] Are you sure that you have installed Wine?" 
